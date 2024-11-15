#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "container.h"
#include "helper/value_type.h"

class List{
    private:
    Container * starter;
    static ValueType DEFAULT_INITIAL_VALUE;
    
    public:
    //constructor
    List() : starter(nullptr) {}

    void initialize(ValueType initial_value = DEFAULT_INITIAL_VALUE){
        if(starter == nullptr){
            starter = new Container(initial_value);
        }else{
            (*starter).get_value() = initial_value;
        }
    }
    void append(ValueType val){
        //making the next object and allocating space to it and assigning to the last object.
        Container* new_container = new Container(val);

        Container* last_container = starter;
        while(last_container->get_next_container_adress() != nullptr){
            last_container = last_container->get_next_container_adress();
        }

        last_container->next_container = new_container;
    }

    void view_list(){
        Container* last_container = starter;
        while(last_container->get_next_container_adress() != nullptr){
            last_container = last_container->get_next_container_adress();
            std::cout << (last_container->get_value());
        }
        std::cout << std::endl;
    }
};
#endif //LIST_H