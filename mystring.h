#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>

using namespace std;

class MyString {
private:
    char *str;
    int size;
    int capacity;
public:
    MyString();
    MyString(const char *);
    //MyString(const char[]);
    MyString(string);
    MyString(const char *, int);
    MyString(int, char);
    MyString(MyString &);

    int getSize() const;
    int getCapacity() const;

    ~MyString();
};


#endif