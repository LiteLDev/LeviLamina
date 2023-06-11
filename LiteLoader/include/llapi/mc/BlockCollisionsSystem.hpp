/**
 * @file  BlockCollisionsSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class BlockCollisionsSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOLLISIONSSYSTEM
public:
    class BlockCollisionsSystem& operator=(class BlockCollisionsSystem const &) = delete;
    BlockCollisionsSystem(class BlockCollisionsSystem const &) = delete;
    BlockCollisionsSystem() = delete;
#endif

public:
    /**
     * @symbol ?createBlockCollisionsSystem\@BlockCollisionsSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createBlockCollisionsSystem();

};
