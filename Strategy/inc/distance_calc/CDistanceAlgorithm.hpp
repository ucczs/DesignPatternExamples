#ifndef CDISTANCEALGORITHM_HEADERGUARD
#define CDISTANCEALGORITHM_HEADERGUARD

#include <common_types.hpp>

class CDistanceAlgorithm
{
private:

public:
    CDistanceAlgorithm();
    ~CDistanceAlgorithm();

    virtual float getDistance(coordinates ego_pos, coordinates obj_pos) const = 0;
};

CDistanceAlgorithm::CDistanceAlgorithm(){}
CDistanceAlgorithm::~CDistanceAlgorithm(){}


#endif // CDISTANCEALGORITHM_HEADERGUARD