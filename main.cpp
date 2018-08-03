//main.cpp
//shoaib ramjaun @ 2018
// learning classes and objects

#include <iostream>
#include <string>
#include "main.h"
using namespace std;
using namespace sict;
int main(){
   
    sict::main object1;
    object1.getInfo(18, "SHOAIB", 13.4543434244342);
    object1.display();
    sict::main object2;
    object2.getInfo(4, "ZAKI", 646765.98689876789);
    object2.display();
    
    return 0;
}
