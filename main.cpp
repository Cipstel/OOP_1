#include "mystring.h"

int main() {
    MyString a;
    MyString b("Hello");
    //MyString c({'l', 'o', 'l'});
    MyString c("Super cool", 3);
    MyString d(3, '@');
    MyString e(b);


    return 0;
}
