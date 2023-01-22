#ifndef CENEMYZ_HEADERGUARD
#define CENEMYZ_HEADERGUARD

#include <iostream>
#include <CEnemy.hpp>

class CEnemyZ : public CEnemy
{
public:
    CEnemyZ();
    ~CEnemyZ();
    virtual void printEnemy() const override;
};

CEnemyZ::CEnemyZ()
{
}

CEnemyZ::~CEnemyZ()
{
}

void CEnemyZ::printEnemy() const
{
    std::cout << "Ä";
}

#endif // CENEMYZ_HEADERGUARD
