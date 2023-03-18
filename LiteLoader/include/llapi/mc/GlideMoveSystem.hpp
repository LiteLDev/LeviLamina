/**
 * @file  GlideMoveSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class GlideMoveSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLIDEMOVESYSTEM
public:
    class GlideMoveSystem& operator=(class GlideMoveSystem const &) = delete;
    GlideMoveSystem(class GlideMoveSystem const &) = delete;
    GlideMoveSystem() = delete;
#endif

public:
    /**
     * @symbol ?createGlideMoveSystem\@GlideMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createGlideMoveSystem();

};
