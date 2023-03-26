#ifndef __CSTOCKPRICEPUBLISHER_HPP__
#define __CSTOCKPRICEPUBLISHER_HPP__

#include "CPublisher.hpp"
#include <iostream>

class CStockPricePublisher : public CPublisher
{
private:
    float current_price = 0;
public:
    CStockPricePublisher(float start_price);
    ~CStockPricePublisher();
    void set_price(float new_price);
    float getState() const override;
};

CStockPricePublisher::CStockPricePublisher(float start_price):
    CPublisher{"StockPricePublisher"}
    , current_price{start_price}
{
}

CStockPricePublisher::~CStockPricePublisher()
{
}

void CStockPricePublisher::set_price(float new_price)
{
    std::cout << std::endl << "New price set." << std::endl << std::endl;
    current_price = new_price;
}

float CStockPricePublisher::getState() const
{
    return current_price;
}

#endif // __CSTOCKPRICEPUBLISHER_HPP__
