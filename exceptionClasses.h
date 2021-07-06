//Program Name: Exception classes
//Programmer Name: Wasim Algamal
//Description: Holds the classes for each type of exception
//Date Created: 12/1/20

#pragma once
using namespace std;
#include <iostream>
#include <exception>

class monthException : public exception {

} mex;

class dayException : public exception {

} dex;

class yearException : public exception {

} yex;
