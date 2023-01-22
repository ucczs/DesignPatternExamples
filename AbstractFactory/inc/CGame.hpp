#ifndef CGAME_HEADERGUARD
#define CGAME_HEADERGUARD

#include <CLevelFactory.hpp>

class CGame
{
private:
    void _createMultipleFreeSpaces(int counts, CLevelFactory* levelFactory);
    void _createMultipleEnemy(int counts, CLevelFactory* levelFactory);
    void _createMultipleSteps(int counts, CLevelFactory* levelFactory);
public:
    CGame();
    ~CGame();
    void createLevel(CLevelFactory& levelFactory);
};

CGame::CGame()
{
}

CGame::~CGame()
{
}

void CGame::_createMultipleFreeSpaces(int counts, CLevelFactory* levelFactory)
{
    for (size_t i = 0; i < counts; i++)
    {
        CFreeSpace* mySpace = levelFactory->createFreeSpace();
        mySpace->printSpace();
    }
}

void CGame::_createMultipleEnemy(int counts, CLevelFactory* levelFactory)
{
    for (size_t i = 0; i < counts; i++)
    {
        CEnemy* myEnemy = levelFactory->createEnemy();
        myEnemy->printEnemy();
    }
}

void CGame::_createMultipleSteps(int counts, CLevelFactory* levelFactory)
{
    for (size_t i = 0; i < counts; i++)
    {
        CStep* myStep = levelFactory->createStep();
        myStep->printStep();
    }
}

void CGame::createLevel(CLevelFactory& levelFactory)
{
    _createMultipleFreeSpaces(5, &levelFactory);
    _createMultipleEnemy(1, &levelFactory);
    _createMultipleFreeSpaces(3, &levelFactory);
    _createMultipleSteps(1, &levelFactory);
    _createMultipleFreeSpaces(3, &levelFactory);
    _createMultipleEnemy(2, &levelFactory);
    _createMultipleFreeSpaces(5, &levelFactory);
    _createMultipleSteps(3, &levelFactory);
    _createMultipleFreeSpaces(2, &levelFactory);
}

#endif // CGAME_HEADERGUARD