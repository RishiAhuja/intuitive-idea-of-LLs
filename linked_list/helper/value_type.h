#ifndef VALUE_TYPE_H
#define VALUE_TYPE_H

#include "../interfaces/stream_insertable.h"

class ValueType : public StreamInsertable{
    public: 
        using value_type = char;
        value_type value = 0;

    ValueType(value_type p_value) : value(p_value) {};
    virtual void stream_insert(std::ostream& out) const {
        out << value;
    }
    
};

#endif