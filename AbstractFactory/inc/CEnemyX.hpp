#ifndef CENEMYX_HEADERGUARD
#define CENEMYX_HEADERGUARD

#include <iostream>
#include <CEnemy.hpp>

class CEnemyX : public CEnemy
{
public:
    CEnemyX();
    ~CEnemyX();
    virtual void printEnemy() const override;
};

CEnemyX::CEnemyX()
{
}

CEnemyX::~CEnemyX()
{
}

void CEnemyX::printEnemy() const
{
    std::cout << "Ö";
}

#endif // CENEMY_HEADERGUARD
