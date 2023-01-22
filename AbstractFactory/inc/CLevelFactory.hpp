#ifndef CLEVELFACTORY_HEADERGUARD
#define CLEVELFACTORY_HEADERGUARD

#include <CStep.hpp>
#include <CEnemy.hpp>
#include <CFreeSpace.hpp>

class CLevelFactory
{
public:
    CLevelFactory();
    ~CLevelFactory();
    virtual CStep* createStep() const = 0;
    virtual CFreeSpace* createFreeSpace() const = 0;
    virtual CEnemy* createEnemy() const = 0;
};

CLevelFactory::CLevelFactory()
{
}

CLevelFactory::~CLevelFactory()
{
}

#endif // CLEVELFACTORY_HEADERGUARD


