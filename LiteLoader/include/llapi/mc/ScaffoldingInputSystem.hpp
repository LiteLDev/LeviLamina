/**
 * @file  ScaffoldingInputSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScaffoldingInputSystem.
 *
 */
class ScaffoldingInputSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCAFFOLDINGINPUTSYSTEM
public:
    class ScaffoldingInputSystem& operator=(class ScaffoldingInputSystem const &) = delete;
    ScaffoldingInputSystem(class ScaffoldingInputSystem const &) = delete;
    ScaffoldingInputSystem() = delete;
#endif

public:
    /**
     * @symbol ?createScaffoldingInputSystem\@ScaffoldingInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createScaffoldingInputSystem();
    /**
     * @symbol ?doScaffoldingInputSystem\@ScaffoldingInputSystem\@\@SAXAEBUMoveInputComponent\@\@AEBUPlayerInputModeComponent\@\@AEAUFallDistanceComponent\@\@AEAUStateVectorComponent\@\@AEAUSynchedActorDataComponent\@\@\@Z
     */
    MCAPI static void doScaffoldingInputSystem(struct MoveInputComponent const &, struct PlayerInputModeComponent const &, struct FallDistanceComponent &, struct StateVectorComponent &, struct SynchedActorDataComponent &);

};
