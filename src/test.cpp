#include <iostream>
using namespace std;
#include "Control.hpp"
int main()
{
    Control * control = new Control();
    control->ReadFile();
    control->manager->swapLinkedList(0,2);
    control->printAvarege();
    cout << "\n\n hello world";
}