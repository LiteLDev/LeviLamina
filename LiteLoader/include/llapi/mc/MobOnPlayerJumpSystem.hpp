/**
 * @file  MC/MobOnPlayerJumpSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MobOnPlayerJumpSystem.
 *
 */
class MobOnPlayerJumpSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBONPLAYERJUMPSYSTEM
public:
    class MobOnPlayerJumpSystem& operator=(class MobOnPlayerJumpSystem const &) = delete;
    MobOnPlayerJumpSystem(class MobOnPlayerJumpSystem const &) = delete;
    MobOnPlayerJumpSystem() = delete;
#endif

public:
    /**
     * @hash   849629417
     * @symbol ?getPlayerJumpPendingScale@MobOnPlayerJumpSystem@@SAMH@Z
     */
    MCAPI static float getPlayerJumpPendingScale(int);

};