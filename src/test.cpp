
#include "Control.hpp"
#include "Box.hpp"
#include "LinkedList.hpp"
#include "ManagerList.hpp"
#include "Node.hpp"

int main()
{
    Control * control = new Control();
    control->ReadFile();
    control->manager->swapLinkedList(0,2);
    control->printAvarege();
cout << "\n\n hello world \n\n";
     std::cout << "Press Enter to exit.";
    std::cin.ignore(); // Ignore any previous input
    std::cin.get(); // Wait for the user to press Enter

    
}