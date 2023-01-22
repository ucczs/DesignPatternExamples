#ifndef CENEMY_HEADERGUARD
#define CENEMY_HEADERGUARD

#include <iostream>

class CEnemy
{
public:
    CEnemy();
    ~CEnemy();
    virtual void printEnemy() const = 0;
};

CEnemy::CEnemy()
{
}

CEnemy::~CEnemy()
{
}

#endif // CENEMY_HEADERGUARD