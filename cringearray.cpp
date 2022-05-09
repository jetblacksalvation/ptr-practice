// cringearray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<array>
template <typename type> class Array {
public:
    void* ptr;

    Array(type pushto) {
        ptr = &pushto;
    };
    ~Array() { delete ptr; };

    type returnval() {
        return static_cast<type>(ptr);//this don work :(
    };

    Array operator [](Array b){

    };

};
int* brul = new int;

int main()
{
    std::cout << "Hello World!\n";
    Array<int>  bruh(2);

    std::cout << bruh.ptr << std::endl;
    

}