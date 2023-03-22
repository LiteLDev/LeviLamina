/**
 * @file  LavaMoveFinalizeSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class LavaMoveFinalizeSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LAVAMOVEFINALIZESYSTEM
public:
    class LavaMoveFinalizeSystem& operator=(class LavaMoveFinalizeSystem const &) = delete;
    LavaMoveFinalizeSystem(class LavaMoveFinalizeSystem const &) = delete;
    LavaMoveFinalizeSystem() = delete;
#endif

public:
    /**
     * @symbol ?createLavaMoveFinalizeSideBySideSystem\@LavaMoveFinalizeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createLavaMoveFinalizeSideBySideSystem();
    /**
     * @symbol ?createLavaMoveFinalizeSystem\@LavaMoveFinalizeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createLavaMoveFinalizeSystem();

};
