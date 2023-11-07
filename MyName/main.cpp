#include <iostream>
#include <string>

int main()

{

    std::string Name("Frank");
    int num1{};
    char Letter{};

    std::cout << "Hello my name is " + Name + " try changing my name";
    std::cout << "\nSelect a number from 1-5 and then change a letter: ";
    std::cin >> num1 >> Letter;

    Name[num1 - 1] = Letter;

    std::cout << "Oh wow now my name is " + Name + "!";

    return 0;
}