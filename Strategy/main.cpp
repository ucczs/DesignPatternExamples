#include "CMap.hpp"
#include "common_types.hpp"
#include "CCollisionWarner.hpp"
#include "distance_calc/CExactDistance.hpp"
#include "distance_calc/CManhattenDistance.hpp"

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <chrono>

coordinates getRandomObject()
{
    float x_pos = std::rand() % 1000;
    float y_pos = std::rand() % 1000;

    coordinates new_obj {x_pos, y_pos};
    return new_obj;
}

void compareAlgos(CMap map)
{
    CCollisionWarner warner;
    CManhattenDistance man_algo;
    CExactDistance exact_algo;

    coordinates ego_pos = {23, 43};

    warner.setDistCalcStrategy(&exact_algo);
    auto start = std::chrono::high_resolution_clock::now();
    float min_dist = warner.calculateShortestDistance(ego_pos, map.get_map());
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "Minimal distance is: " << min_dist << std::endl;
    std::cout << "Exact algo duration: " << duration.count() << std::endl;

    warner.setDistCalcStrategy(&man_algo);
    start = std::chrono::high_resolution_clock::now();
    min_dist = warner.calculateShortestDistance(ego_pos, map.get_map());
    stop = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "Minimal distance is: " << min_dist << std::endl;
    std::cout << "Mnahatten algo duration: " << duration.count() << std::endl;
}


int main()
{
    std::srand(std::time(0));

    CMap obj_map;

    int obj_count = 100000;
    for (size_t i = 0; i < obj_count; i++)
    {
        coordinates newObj = getRandomObject();
        obj_map.addObject(newObj);
    }

    // compareAlgos(myMap);

    CCollisionWarner warner;
    CExactDistance exact_algo;
    CManhattenDistance man_algo;

    if (obj_count < 1000)
    {
        warner.setDistCalcStrategy(&exact_algo);
    }
    else
    {
        warner.setDistCalcStrategy(&man_algo);
    }

    coordinates ego_pos = {23, 43};
    float min_dist = warner.calculateShortestDistance(ego_pos, obj_map.get_map());
    std::cout << "Minimal distance is: " << min_dist << std::endl;

    return 0;
}
