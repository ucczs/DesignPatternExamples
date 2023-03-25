#ifndef CEXACTDISTANCE_HEADERGUARD
#define CEXACTDISTANCE_HEADERGUARD

#include <distance_calc/CDistanceAlgorithm.hpp>
#include <cmath>

class CExactDistance : public CDistanceAlgorithm
{
private:
public:
    CExactDistance();
    ~CExactDistance();
    virtual float getDistance(coordinates ego_pos, coordinates obj_pos) const override;

};

CExactDistance::CExactDistance(){}
CExactDistance::~CExactDistance(){}

float CExactDistance::getDistance(coordinates ego_pos, coordinates obj_pos) const
{
    return sqrt(pow((ego_pos.x_pos - obj_pos.x_pos), 2) + pow((ego_pos.y_pos - obj_pos.y_pos), 2));
}




#endif // CEXACTDISTANCE_HEADERGUARD
