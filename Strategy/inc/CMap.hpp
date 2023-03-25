#ifndef CMAP_HEADERGUARD
#define CMAP_HEADERGUARD

#include "common_types.hpp"
#include <vector>

class CMap
{
private:
    std::vector<coordinates> m_map {};
public:
    CMap();
    ~CMap();
    
    void addObject(coordinates object);
    int getNumbOfObjects() const;
    std::vector<coordinates> get_map() const;
};

CMap::CMap()
{
}

CMap::~CMap()
{
}

void CMap::addObject(coordinates object)
{
    m_map.push_back(object);
}

int CMap::getNumbOfObjects() const
{
    return m_map.size();
}

std::vector<coordinates> CMap::get_map() const
{
    return m_map;
}



#endif // CMAP_HEADERGUARD
