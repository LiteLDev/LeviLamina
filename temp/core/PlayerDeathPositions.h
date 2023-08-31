//
// Created by ShrBox on 2022/12/5.
//
#include <unordered_map>
#include "mc/Vec3.hpp"

namespace PlayerDeathPositions {
    std::pair<Vec3, int32_t> makeDeathPos(Vec3 vec3, int32_t dim);
    std::unordered_map<std::string, std::pair<Vec3, int32_t>> getDeathPositions();
    void deathEventListener();
}