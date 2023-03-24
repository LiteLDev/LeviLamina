/**
 * @file  LavaMoveSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class LavaMoveSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LAVAMOVESYSTEM
public:
    class LavaMoveSystem& operator=(class LavaMoveSystem const &) = delete;
    LavaMoveSystem(class LavaMoveSystem const &) = delete;
    LavaMoveSystem() = delete;
#endif

public:
    /**
     * @symbol ?createLavaMoveSideBySideSystem\@LavaMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createLavaMoveSideBySideSystem();
    /**
     * @symbol ?createLavaMoveSystem\@LavaMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createLavaMoveSystem();

};
