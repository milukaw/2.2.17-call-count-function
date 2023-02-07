#include <iostream>

void CallCount();


int main()
{
    CallCount();
    CallCount();
    CallCount();
    CallCount();

}

void CallCount()
{
    static int i = 0;
    i++;

    std::cout << "Call count: " << i << std::endl;

}
