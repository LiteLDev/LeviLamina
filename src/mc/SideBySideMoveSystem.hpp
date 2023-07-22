/**
 * @file  SideBySideMoveSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SideBySideMoveSystem.
 *
 */
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
     * @symbol  ?createSystem\@SideBySideMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};