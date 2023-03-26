#ifndef __CMAILPUBLISHER_HPP__
#define __CMAILPUBLISHER_HPP__

#include <vector>
#include <string>
#include <iostream>
#include "observers/CObserver.hpp"

class CObserver;

class CPublisher
{
private:
    std::vector<CObserver*> observerList {};
    std::string name;
public:
    CPublisher(std::string name);
    ~CPublisher();
    void registerObserver(CObserver* newObserver);
    void notifyObservers();
    std::string getName() const;
    virtual float getState() const = 0;
};

CPublisher::CPublisher(std::string name)
{
    this->name = name;
}

CPublisher::~CPublisher()
{
}

void CPublisher::registerObserver(CObserver* newObserver)
{
    observerList.push_back(newObserver);
}

void CPublisher::notifyObservers()
{
    std::cout << name << " notifies observers" << std::endl;
    for( CObserver* observer : observerList)
    {
        observer->update();
    }
}

std::string CPublisher::getName() const
{
    return name;
}


#endif // __CMAILPUBLISHER_HPP__
