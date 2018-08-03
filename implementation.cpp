//
//  implementation.cpp
//  c++ classes and objects
//
//  Created by shoaib ramjaun on 2018-08-03.
//  Copyright © 2018 shoaib ramjaun. All rights reserved.
//
#include <iostream>
#include <cstdio>
#include <string>
#include "main.h"
using namespace std;
using namespace sict;
void main:: display(){
    cout.setf(ios::fixed);// needed to create the decimal places of 2 after decimal point
    cout.precision(2);// sets the significant digits to 2
    cout << "I am " << name << " and I am " << age << " years old. "<< endl;
    cout << "I make $" << salary << " !" << endl;
}
void main:: getInfo(int m_age, string m_name, double m_salary){
    age = m_age;
    name = m_name;
    salary = m_salary;
}

