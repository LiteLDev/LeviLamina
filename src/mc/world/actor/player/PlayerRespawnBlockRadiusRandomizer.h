#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerRespawnBlockRadiusRandomizer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERRESPAWNBLOCKRADIUSRANDOMIZER
public:
    PlayerRespawnBlockRadiusRandomizer& operator=(PlayerRespawnBlockRadiusRandomizer const&) = delete;
    PlayerRespawnBlockRadiusRandomizer(PlayerRespawnBlockRadiusRandomizer const&)            = delete;
    PlayerRespawnBlockRadiusRandomizer()                                                     = delete;
#endif

public:
    /**
     * @symbol ?getNextPosition\@PlayerRespawnBlockRadiusRandomizer\@\@QEAA_NAEAVVec3\@\@_N\@Z
     */
    MCAPI bool getNextPosition(class Vec3&, bool);
    /**
     * @symbol ?init\@PlayerRespawnBlockRadiusRandomizer\@\@QEAAXIAEAVRandom\@\@\@Z
     */
    MCAPI void init(unsigned int, class Random&);
};
