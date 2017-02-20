// nothrow example
#include <iostream>     // std::cout
#include <new>          // std::nothrow
#include "Person.hpp"

int main () {
   
    Person p;
    p.sayName();
    
    return 0;
}
