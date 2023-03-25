#ifndef CMANHATTENDISTANCE_HEADERGUARD
#define CMANHATTENDISTANCE_HEADERGUARD

#include <distance_calc/CDistanceAlgorithm.hpp>
#include <cmath>

class CManhattenDistance : public CDistanceAlgorithm
{
private:
public:
    CManhattenDistance();
    ~CManhattenDistance();
    virtual float getDistance(coordinates ego_pos, coordinates obj_pos) const override;

};

CManhattenDistance::CManhattenDistance(){}
CManhattenDistance::~CManhattenDistance(){}

float CManhattenDistance::getDistance(coordinates ego_pos, coordinates obj_pos) const
{
    return abs(ego_pos.x_pos - obj_pos.x_pos) + abs(ego_pos.y_pos - obj_pos.y_pos);
}


#endif // CMANHATTENDISTANCE_HEADERGUARD
