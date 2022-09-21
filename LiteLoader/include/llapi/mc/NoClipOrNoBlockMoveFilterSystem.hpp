/**
 * @file  MC/NoClipOrNoBlockMoveFilterSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class NoClipOrNoBlockMoveFilterSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NOCLIPORNOBLOCKMOVEFILTERSYSTEM
public:
    class NoClipOrNoBlockMoveFilterSystem& operator=(class NoClipOrNoBlockMoveFilterSystem const &) = delete;
    NoClipOrNoBlockMoveFilterSystem(class NoClipOrNoBlockMoveFilterSystem const &) = delete;
    NoClipOrNoBlockMoveFilterSystem() = delete;
#endif

public:
    /**
     * @symbol ?create@NoClipOrNoBlockMoveFilterSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();

};