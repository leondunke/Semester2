#include <iostream>

using MyCppStruct = struct
{
    int16_t a = 0;
    float b = 0.0F;

    void print() const
    {
        std::cout << "a= " << a << "; b= " << b << std::endl;
    }
};



auto main() -> int
{
    std::cout << "Hello, World!" << std::endl;
    MyCppStruct my_struct;
    std::cout << "Printing struct my_struct:" << std::endl;
    my_struct.print();
}