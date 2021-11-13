#pragma once
#include "Global.h"
#include "MCApi/Level.hpp"
class Actor;
class LevelObj : public Level {
public:
    static BlockSource* getBlockSource(int dimid);
    static BlockSource* getBlockSource(Actor*);
    static Actor*        spawnMob(std::string name, const FloatVec4& pos);
};
