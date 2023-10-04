#include "mystring.h"

MyString::MyString() : str(nullptr), size(0), capacity(0) {}

MyString::MyString(const char *input) : MyString::MyString()
{
    for(int i = 0; input[i] != 0; ++i) ++size;
    capacity = size + 1;
    str = new char[capacity];
    for(int i = 0; i < size; ++i)
    {
        str[i] = input[i];
    }
    str[size] = '\0';
}

MyString::MyString(string input) : MyString::MyString() {

}

MyString::MyString(const char *input, int count) : MyString::MyString() {
    size = count;
    capacity = count + 1;
    str = new char[capacity];
    for(int i = 0; i < size; ++i) str[i] = input[i];
    str[size] = '\0';
}

MyString::MyString(int count, char symbol) : MyString::MyString() {
    size = count;
    capacity = count + 1;
    str = new char[capacity];
    for(int i = 0; i < size; ++i) str[i] = symbol;
    str[size] = '\0';
}

MyString::MyString(MyString &input) : str(input.str), size(input.size), capacity(input.capacity) {

}

int MyString::getSize() const
{
    return size;
}

int MyString::getCapacity() const {
    return size + 1;
}

MyString::~MyString() {
    delete[] str;
}


