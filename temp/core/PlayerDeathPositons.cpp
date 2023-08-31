//
// Created by ShrBox on 2022/12/5.
//
#include "liteloader/core/PlayerDeathPositions.h"
#include "liteloader/api/event/LegacyEvents.h"
#include "mc/Player.hpp"

std::unordered_map<std::string, std::pair<Vec3, int32_t>> deathPositions = {};

std::unordered_map<std::string, std::pair<Vec3, int32_t>> PlayerDeathPositions::getDeathPositions() {
    return deathPositions;
}

std::pair<Vec3, int32_t> PlayerDeathPositions::makeDeathPos(Vec3 vec3, int32_t dim) {
    std::pair<Vec3, int32_t> pos(vec3, dim);
    return pos;
}

void PlayerDeathPositions::deathEventListener() {
    ll::event::legacy::PlayerDieEvent::subscribe([](ll::event::legacy::PlayerDieEvent ev) {
        deathPositions[ev.mPlayer->getUuid()] = PlayerDeathPositions::makeDeathPos(ev.mPlayer->getPos(), ev.mPlayer->getDimensionId());
        return true;
    });
}