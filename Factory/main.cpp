#include <iostream>
#include <CCreatorEnglish.hpp>
#include <CCreatorEnglishBaby.hpp>
#include <CCreatorFrench.hpp>


int main()
{
    std::cout  << std::endl << "Start examples.." << std::endl << std::endl;

    CCreatorEnglish englishCreator;
    englishCreator.conversation();

    std::cout  << std::endl << "- Next -" << std::endl << std::endl;

    CCreatorEnglishBaby englishBabyCreator;
    englishBabyCreator.conversation();

    std::cout  << std::endl << "- Next -" << std::endl  << std::endl;

    CCreatorFrench frenchCreator;
    frenchCreator.conversation();

    return 0;
}