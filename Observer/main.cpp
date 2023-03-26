#include "observers/CObserverLaptop.hpp"
#include "observers/CObserverPhone.hpp"
#include "observers/CObserverWatch.hpp"

#include "publisher/CStockPricePublisher.hpp"
#include "publisher/CTimePublisher.hpp"

#include <iostream>


int main()
{
    CTimePublisher timePub(1000);

    CObserverLaptop laptopTimeObs(&timePub);
    CObserverPhone phoneTimeObs(&timePub);
    CObserverWatch watchTimeObs(&timePub);

    timePub.notifyObservers();

    timePub.increment_time();
    timePub.notifyObservers();

    std::cout << std::endl << "---------------------------------------------" << std::endl << std::endl;

    CStockPricePublisher stockPub(15.32);

    CObserverLaptop laptopStockObs(&stockPub);
    CObserverWatch watchStockObs(&stockPub);

    stockPub.notifyObservers();

    stockPub.set_price(16.32);
    stockPub.notifyObservers();

    return 0;
}