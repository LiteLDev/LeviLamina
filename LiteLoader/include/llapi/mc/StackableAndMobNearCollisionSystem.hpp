/**
 * @file  MC/StackableAndMobNearCollisionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class StackableAndMobNearCollisionSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STACKABLEANDMOBNEARCOLLISIONSYSTEM
public:
    class StackableAndMobNearCollisionSystem& operator=(class StackableAndMobNearCollisionSystem const &) = delete;
    StackableAndMobNearCollisionSystem(class StackableAndMobNearCollisionSystem const &) = delete;
    StackableAndMobNearCollisionSystem() = delete;
#endif

public:
    /**
     * @symbol ?create@StackableAndMobNearCollisionSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();

};