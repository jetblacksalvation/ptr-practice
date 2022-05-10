// cringearray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<array>
template <typename type> class Array {//template typename has to go BEFORE the class
public:
    void* ptr;

    Array(const type pushto) {//push this variables address to ptr, which can have anytype, just needs to be casted to correct type
        ptr = new type(pushto);
    };
    ~Array() { delete ptr; };//deconstructor, memory leaks go bye bye? 

    std::string returnval() {
        return typeid(static_cast<type*>(ptr)).name();
    };



};
int* brul = new int;
int br = 1;
int main()
{
    std::cout << "Hello World!\n";
    Array<int>  bruh(br);
    //to get this to work you must TYPECAST ptr into the type 
    std::cout << typeid(bruh.ptr).name() << std::endl;  //changing &bruh.ptr makes it a pointer to a pointer, do not do that 
    std::cout << bruh.returnval() << std::endl;
    

}