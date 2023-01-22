#ifndef CLEVELFACTORYZ_HEADERGUARD
#define CLEVELFACTORYZ_HEADERGUARD

#include <CLevelFactory.hpp>
#include <CStepB.hpp>
#include <CStep.hpp>
#include <CFreeSpaceZ.hpp>
#include <CFreeSpace.hpp>
#include <CEnemyZ.hpp>
#include <CEnemy.hpp>

class CLevelZFactory : public CLevelFactory
{
public:
    CLevelZFactory();
    ~CLevelZFactory();
    virtual CStep* createStep() const override;
    virtual CFreeSpace* createFreeSpace() const override;
    virtual CEnemy* createEnemy() const override;
};

CLevelZFactory::CLevelZFactory()
{
}

CLevelZFactory::~CLevelZFactory()
{
}

CStep* CLevelZFactory::createStep() const
{
    return new CStepB;
}

CFreeSpace* CLevelZFactory::createFreeSpace() const
{
    return new CFreeSpaceZ;
}

CEnemy* CLevelZFactory::createEnemy() const
{
    return new CEnemyZ;
}

#endif // CLEVELFACTORYZ_HEADERGUARD