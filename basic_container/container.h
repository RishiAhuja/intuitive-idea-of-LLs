#ifndef CONTAINER_H
#define CONTAINER_H

#include <iostream>
#include "interfaces/stream_insertable.h"

/*TODO:
- copy construtor deep copy 
- setter and getter
- manual expansion - done
*/

/*FIXES:
- core abortion for large arrays

capacity updated: 20
capacity updated: 30
capacity updated: 40
malloc(): corrupted top size
Aborted (core dumped)
*/

class Container : public StreamInsertable{
    static int DEFAULT_CAPACITY;
    static int DEFAULT_EXPANSION_SIZE;
    using value_type = char;

    public: 
    //construtors and destructors
    template <size_t N>
    Container(value_type (&in_arr)[N] = {}, const int& p_capacity = DEFAULT_CAPACITY) : m_capacity(p_capacity) {
        m_items = new value_type[m_capacity];
        size_t size = N;
        m_size = size;
        for (size_t i = 0; i < size; i++){
            m_items[i] = in_arr[i];
        }   
        m_items[size] = '\0';
    };

    ~Container ();

    virtual void stream_insert(std::ostream& out) const override{
        out << "[capacity: " << m_capacity << ", " <<"size: " << m_size << ", " << "content: ";
        for (size_t i = 0; i < m_size; i++){
            std::cout << m_items[i];
        }
        std::cout << "]" << std::endl; 
    };

    //member functions
    template<int N>
    void cat(value_type (&appened_arr)[N]){
        int appened_arr_size = N;

        while(N > (m_capacity - m_size))
            expand(DEFAULT_EXPANSION_SIZE);

        for (size_t i = 0; i < appened_arr_size; i++){
            m_items[m_size + i] = appened_arr[i];
        }
        m_size += appened_arr_size;
    }

    void expand(size_t expansion_size){
        /* if(m_capacity > m_size){
            std::cout << "current capacity > current size : " << 
            m_capacity <<" > " << m_size << std::endl;
            std::cout << "expansion aborted" << std::endl;
            return;
        } */
        value_type * new_items = new value_type[expansion_size + m_size];
        for (size_t i {}; i < m_size; i++){
            new_items[i] = m_items[i];
        }
        delete [] m_items;
        m_items = new_items; //assigned memory
        m_capacity += expansion_size;
        std::cout << "capacity updated: " << m_capacity << std::endl;
    }

    private:
    value_type * m_items;
    int m_size;
    int m_capacity;
};


#endif