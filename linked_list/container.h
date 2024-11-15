#ifndef CONTAINER_H
#define CONTAINER_H

#include <iostream>
#include "interfaces/stream_insertable.h"
#include "helper/value_type.h"

class Container{
    private:
    ValueType value;
    
    public: 
    Container * next_container;

    public:
    //constructor: 
    Container(ValueType val) : value(val), next_container(nullptr) {}

    //getters as setters

    ValueType& get_value(){
        return value;
    }

    Container*& get_next_container_adress(){
        return next_container;
    }
};


#endif