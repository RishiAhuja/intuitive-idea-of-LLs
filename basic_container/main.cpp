#include <iostream>
#include "container.h"

using namespace std;

int main()
{
    char ch[] = "you";
    char ch2[] = " are crazy enough";

    Container container1(ch);
    cout << container1 << endl;
    container1.cat(ch2);
    cout << container1 << endl;

}
