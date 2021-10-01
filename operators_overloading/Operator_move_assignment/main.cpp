#include<iostream>
#include<string>
#include<cstring>
#include "mystring.h"


using namespace std;

int main() {

    
    MyString a { "Hello"};
    a = MyString {"Hola"};

    a = "Bonjore";
    
    return 0;
}