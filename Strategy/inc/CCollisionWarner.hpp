#ifndef COLLISIONWARNER_HEADERGUARD
#define COLLISIONWARNER_HEADERGUARD

#include <distance_calc/CDistanceAlgorithm.hpp>
#include <vector>
#include <iostream>


class CCollisionWarner
{
private:
    CDistanceAlgorithm* m_dist_calc_algo {};
public:
    CCollisionWarner();
    ~CCollisionWarner();
    float calculateShortestDistance(coordinates ego_pos, 
                                    std::vector<coordinates> m_map) const;
    void setDistCalcStrategy(CDistanceAlgorithm* dist_calc);
};

CCollisionWarner::CCollisionWarner(){}
CCollisionWarner::~CCollisionWarner(){}

float CCollisionWarner::calculateShortestDistance(coordinates ego_pos,
                                                  std::vector<coordinates> m_map) const
{
    std::cout << "calculateShortestDistance entered" << std::endl;
    float min_dist = FLT_MAX;
    for (auto obj : m_map)
    {
        float dist = m_dist_calc_algo->getDistance(ego_pos, obj);
        min_dist = std::min(dist, min_dist);
    }

    return min_dist;
}

void CCollisionWarner::setDistCalcStrategy(CDistanceAlgorithm* dist_calc)
{
    m_dist_calc_algo = dist_calc;
}


#endif // COLLISIONWARNER_HEADERGUARD