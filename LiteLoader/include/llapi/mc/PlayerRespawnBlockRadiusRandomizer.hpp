/**
 * @file  PlayerRespawnBlockRadiusRandomizer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerRespawnBlockRadiusRandomizer.
 *
 */
class PlayerRespawnBlockRadiusRandomizer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERRESPAWNBLOCKRADIUSRANDOMIZER
public:
    class PlayerRespawnBlockRadiusRandomizer& operator=(class PlayerRespawnBlockRadiusRandomizer const &) = delete;
    PlayerRespawnBlockRadiusRandomizer(class PlayerRespawnBlockRadiusRandomizer const &) = delete;
    PlayerRespawnBlockRadiusRandomizer() = delete;
#endif

public:
    /**
     * @hash   1962591418
     * @symbol ?getNextPosition@PlayerRespawnBlockRadiusRandomizer@@QEAA_NAEAVVec3@@_N@Z
     */
    MCAPI bool getNextPosition(class Vec3 &, bool);
    /**
     * @hash   1046650875
     * @symbol ?init@PlayerRespawnBlockRadiusRandomizer@@QEAAXIAEAVRandom@@@Z
     */
    MCAPI void init(unsigned int, class Random &);

};