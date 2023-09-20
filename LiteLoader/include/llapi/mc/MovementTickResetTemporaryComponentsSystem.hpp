/**
 * @file  MovementTickResetTemporaryComponentsSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class MovementTickResetTemporaryComponentsSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEMENTTICKRESETTEMPORARYCOMPONENTSSYSTEM
public:
    class MovementTickResetTemporaryComponentsSystem& operator=(class MovementTickResetTemporaryComponentsSystem const &) = delete;
    MovementTickResetTemporaryComponentsSystem(class MovementTickResetTemporaryComponentsSystem const &) = delete;
    MovementTickResetTemporaryComponentsSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@MovementTickResetTemporaryComponentsSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};
