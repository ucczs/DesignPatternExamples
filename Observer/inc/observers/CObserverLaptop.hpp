#ifndef __COBSERVERLAPTOP_HPP__
#define __COBSERVERLAPTOP_HPP__

#include "CObserver.hpp"
#include "publisher/CPublisher.hpp"
#include <iostream>

class CObserverLaptop : public CObserver
{
private:
public:
    CObserverLaptop(CPublisher* publisher);
    ~CObserverLaptop();
    void update() override;
};

CObserverLaptop::CObserverLaptop(CPublisher* publisher):
    CObserver{publisher}
{
    publisher->registerObserver(this);
}

CObserverLaptop::~CObserverLaptop()
{
}

void CObserverLaptop::update()
{
    float state = publisher->getState();
    std::string publisher_name = publisher->getName();
    std::cout << "Laptop Ring ---- new value from " << publisher_name << ": " << state << std::endl;
}


#endif // __COBSERVERLAPTOP_HPP__
