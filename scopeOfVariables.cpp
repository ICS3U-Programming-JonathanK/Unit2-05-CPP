// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2019
// Modified by: Jonathan Kene
// Modified on: May 5 2021
// This program shows how local and global variables work

#include <iostream>

// global variable
int variableX = 10;

void localVariable() {
    // this shows what happens with local variables

    int variableX = 30;
    int variableY = 50;
    int variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}


void globalVariable() {
    // this shows what happens with global variables

    variableX = variableX + 1;
    int variableY = 20;
    int variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}

int main() {
    // this function calls local and global

    localVariable();
    globalVariable();
}
