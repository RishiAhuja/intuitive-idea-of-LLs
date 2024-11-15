#include "container.h"

int Container::DEFAULT_CAPACITY = 10;
int Container::DEFAULT_EXPANSION_SIZE = 10;
Container::~Container(){
        delete [] m_items;
}

