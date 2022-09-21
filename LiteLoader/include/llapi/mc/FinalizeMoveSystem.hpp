/**
 * @file  MC/FinalizeMoveSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class FinalizeMoveSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FINALIZEMOVESYSTEM
public:
    class FinalizeMoveSystem& operator=(class FinalizeMoveSystem const &) = delete;
    FinalizeMoveSystem(class FinalizeMoveSystem const &) = delete;
    FinalizeMoveSystem() = delete;
#endif

public:
    /**
     * @symbol ?create@FinalizeMoveSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();

};