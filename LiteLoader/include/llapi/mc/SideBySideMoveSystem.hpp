/**
 * @file  MC/SideBySideMoveSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class SideBySideMoveSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDEMOVESYSTEM
public:
    class SideBySideMoveSystem& operator=(class SideBySideMoveSystem const &) = delete;
    SideBySideMoveSystem(class SideBySideMoveSystem const &) = delete;
    SideBySideMoveSystem() = delete;
#endif

public:
    /**
     * @symbol ?createFetchCollisionShapesSystem@SideBySideMoveSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createFetchCollisionShapesSystem();
    /**
     * @symbol ?createSystem@SideBySideMoveSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};