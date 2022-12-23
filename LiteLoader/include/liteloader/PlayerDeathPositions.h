//
// Created by ShrBox on 2022/12/5.
//
#include <unordered_map>
#include <llapi/mc/Vec3.hpp>

namespace PlayerDeathPositions {
    std::pair<Vec3, int> makeDeathPos(Vec3 vec3, int dim);
    std::unordered_map<std::string, std::pair<Vec3, int>> getDeathPositions();
    void deathEventListener();
}