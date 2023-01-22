#ifndef CENEMYY_HEADERGUARD
#define CENEMYY_HEADERGUARD

#include <iostream>
#include <CEnemy.hpp>

class CEnemyY : public CEnemy
{
public:
    CEnemyY();
    ~CEnemyY();
    virtual void printEnemy() const override;
};

CEnemyY::CEnemyY()
{
}

CEnemyY::~CEnemyY()
{
}

void CEnemyY::printEnemy() const
{
    std::cout << "Ü";
}

#endif // CENEMYY_HEADERGUARD
