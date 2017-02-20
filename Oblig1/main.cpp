// nothrow example
#include <iostream>     // std::cout
#include <new>          // std::nothrow
#include "Person.cpp"

int main () {
   
    Person p;
    Person("Jonas", 5353);
    
    return 0;
}
