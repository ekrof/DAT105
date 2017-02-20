//
//  AnsattData.cpp
//  Oblig1
//
//  Created by Jonas Ekerhovd on 20.02.2017.
//  Copyright © 2017 Jonas Ekerhovd. All rights reserved.
//

#include "AnsattData.hpp"
#include "Ansatt.cpp"
#include "Person.cpp"
#include <iostream>
#include <vector>
using namespace std;

class AnsattData : public Ansatt{
    
private:
    vector<Person> paarorende;
    int banknummer;
    unsigned int lonn;
    char stillingstype;
    
    
public:
    AnsattData(){
    }
    
    AnsattData(int bnknr, unsigned int lonn, char stillingstype){
        
    }
    
    
};
