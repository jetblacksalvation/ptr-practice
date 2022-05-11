// cringearray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<array>
template <typename type> class Array {//template typename has to go BEFORE the class
public:
    void* ptr;
    type* var;//push static cast to this
    Array(const type pushto) {//push this variables address to ptr, which can have anytype, just needs to be casted to correct type
        ptr = new type(pushto);//apperently this is done like this? either way it was working before as an address, maybe it acted like 2d pointer?
        var = static_cast<type*>(ptr);//does this return anything or sets ptr to type poitner, will var even be set to anything????? i dont think so..



    };
    ~Array() { delete ptr; };//deconstructor, memory leaks go bye bye? :)

    std::string returnval() {// changed it to return variable typename, this works! just need to find a way to call/print out the value of br aka 1
        return typeid(static_cast<type*>(ptr)).name();
    };



};
int* brul = new int;
int br = 1;
int main()
{
    /*
        GOAL - print br's value - 1 GOAL ACHIEVED
        OPTIONAL GOAL - TURN THE GOD TALK PROGRAM INTO SOMETHING THAT USES VOID POINTERS

        NEW GOAL - TURN THIS INTO AN ARRAY LIKE DATA TYPE THAT CAN TAKE ANY TYPE

    */

    std::cout << "Hello World!\n";
    Array<std::string>  bruh("deez");
    //to get this to work you must TYPECAST ptr into the type - int
    std::cout << typeid(bruh.ptr).name() << std::endl;  //changing &bruh.ptr makes it a pointer to a pointer, do not do that
    std::cout << *bruh.var << std::endl;// why did adding * to this fix it????????


}