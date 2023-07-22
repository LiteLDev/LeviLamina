/**
 * @file  BatPostNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BatPostNormalTickSystem.
 *
 */
class BatPostNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BATPOSTNORMALTICKSYSTEM
public:
    class BatPostNormalTickSystem& operator=(class BatPostNormalTickSystem const &) = delete;
    BatPostNormalTickSystem(class BatPostNormalTickSystem const &) = delete;
    BatPostNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@BatPostNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};