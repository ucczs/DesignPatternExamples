#ifndef CLEVELFACTORYX_HEADERGUARD
#define CLEVELFACTORYX_HEADERGUARD

#include <CLevelFactory.hpp>
#include <CStepA.hpp>
#include <CStep.hpp>
#include <CFreeSpaceX.hpp>
#include <CFreeSpace.hpp>
#include <CEnemyX.hpp>
#include <CEnemy.hpp>

class CLevelXFactory : public CLevelFactory
{
public:
    CLevelXFactory();
    ~CLevelXFactory();
    virtual CStep* createStep() const override;
    virtual CFreeSpace* createFreeSpace() const override;
    virtual CEnemy* createEnemy() const override;
};

CLevelXFactory::CLevelXFactory()
{
}

CLevelXFactory::~CLevelXFactory()
{
}

CStep* CLevelXFactory::createStep() const
{
    return new CStepA;
}

CFreeSpace* CLevelXFactory::createFreeSpace() const
{
    return new CFreeSpaceX;
}

CEnemy* CLevelXFactory::createEnemy() const
{
    return new CEnemyX;
}

#endif // CLEVELFACTORYX_HEADERGUARD