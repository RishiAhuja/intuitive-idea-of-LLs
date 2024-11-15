#include <iostream>
#include "list.h"

int main(){

    List list;
    list.initialize(ValueType('0'));

    list.append(ValueType('R'));
    list.append(ValueType('i'));
    list.append(ValueType('s'));
    list.append(ValueType('h'));
    list.append(ValueType('i'));

    list.view_list();
}
