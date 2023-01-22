#include <CGame.hpp>
#include <CLevelXFactory.hpp>
#include <CLevelYFactory.hpp>
#include <CLevelZFactory.hpp>
#include <iostream>


int main()
{
    std::cout << "Initialize factory.." << std::endl;
    CLevelXFactory levelX;
    CLevelYFactory levelY;
    CLevelZFactory levelZ;

    std::cout << "Create game.." << std::endl;
    CGame myGame;
    myGame.createLevel(levelX);
    std::cout << std::endl;
    myGame.createLevel(levelY);
    std::cout << std::endl;
    myGame.createLevel(levelZ);
    std::cout << std::endl << "Game created successfully!" << std::endl;

    return 0;
}