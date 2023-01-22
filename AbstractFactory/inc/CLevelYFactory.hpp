#ifndef CLEVELFACTORYY_HEADERGUARD
#define CLEVELFACTORYY_HEADERGUARD

#include <CLevelFactory.hpp>
#include <CStepA.hpp>
#include <CStep.hpp>
#include <CFreeSpaceY.hpp>
#include <CFreeSpace.hpp>
#include <CEnemyY.hpp>
#include <CEnemy.hpp>

class CLevelYFactory : public CLevelFactory
{
public:
    CLevelYFactory();
    ~CLevelYFactory();
    virtual CStep* createStep() const override;
    virtual CFreeSpace* createFreeSpace() const override;
    virtual CEnemy* createEnemy() const override;
};

CLevelYFactory::CLevelYFactory()
{
}

CLevelYFactory::~CLevelYFactory()
{
}

CStep* CLevelYFactory::createStep() const
{
    return new CStepA;
}

CFreeSpace* CLevelYFactory::createFreeSpace() const
{
    return new CFreeSpaceY;
}

CEnemy* CLevelYFactory::createEnemy() const
{
    return new CEnemyY;
}

#endif // CLEVELFACTORYY_HEADERGUARD