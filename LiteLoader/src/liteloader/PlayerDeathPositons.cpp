//
// Created by ShrBox on 2022/12/5.
//
#include <liteloader/PlayerDeathPositions.h>
#include <llapi/EventAPI.h>
#include <llapi/mc/Player.hpp>

std::unordered_map<std::string, std::pair<Vec3, int>> deathPositions = {};

std::unordered_map<std::string, std::pair<Vec3, int>> PlayerDeathPositions::getDeathPositions() {
    return deathPositions;
}

std::pair<Vec3, int> PlayerDeathPositions::makeDeathPos(Vec3 vec3, int dim) {
    std::pair<Vec3, int> pos(vec3, dim);
    return pos;
}

void PlayerDeathPositions::deathEventListener() {
    Event::PlayerDieEvent::subscribe([](Event::PlayerDieEvent ev) {
        deathPositions[ev.mPlayer->getUuid()] = PlayerDeathPositions::makeDeathPos(ev.mPlayer->getPos(), ev.mPlayer->getDimensionId());
        return true;
    });
}