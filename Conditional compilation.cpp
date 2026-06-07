#include <iostream>
#define PRINT_X

int main()
{
    #ifdef PRINT_X
    std::cout<<"X\n";
    #endif // PRINT_X

    #ifdef PRINT_Y
    std::cout<<"Y\n";
    #endif // PRINT_Y

    #ifndef PRINT_Y
    std::cout<<"Z\n";
    #endif // PRINT_Y

    #if 0 //don't compile anything starting from here
    std::cout<<"Hello\n";
    std::cout<<"World\n";
    #endif // 0

    #if 1 //always true, so the following code will be compiled
    std::cout<<"Hi\n";
    #endif // 1

    return 0;
}

//conditional compilation allows you to specify under what condition something will or won't compile.

//#ifdef allows the preprocessor to check whether an identifier has been previously defined via #defined.
//if yes then code between #ifdef and #endif is compiled, otherwise ignored.

//#ifndef just work opposite of #ifdef.
//if the identifier is not defined then the code under it will get compiled.

//#if 0 provides a convenient way to comment out a part of code that also contain a multi-line comments being non-nestable.
//to temporarily re-enable code you can change #if 0 to #if 1
