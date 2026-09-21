//
// Created by Cristian Alexis Gonzalez Aranda on 9/17/26.
//

#include "Data.h"

#include <iostream>
#include <ostream>
#pragma once


class Data {
public:
    string name;
    int numID;

    Data(int numID, string name) {
        this -> numID = numID;
        this -> name = name;
    }

    void print() {
        std::cout << name << " " << numID << std::endl;
    }
};
