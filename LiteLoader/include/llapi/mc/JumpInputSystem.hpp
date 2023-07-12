/**
 * @file  JumpInputSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class JumpInputSystem.
 *
 */
class JumpInputSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUMPINPUTSYSTEM
public:
    class JumpInputSystem& operator=(class JumpInputSystem const &) = delete;
    JumpInputSystem(class JumpInputSystem const &) = delete;
    JumpInputSystem() = delete;
#endif

public:
    /**
     * @symbol ?createJumpInputSystem\@JumpInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createJumpInputSystem();
    /**
     * @symbol ?doJumpInputSystem\@JumpInputSystem\@\@SAXAEBVStrictEntityContext\@\@V?$optional_ref\@$$CBV?$FlagComponent\@UAutoJumpingFlag\@\@\@\@\@\@AEBUAbilitiesComponent\@\@AEBUMoveInputComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UMobIsJumpingFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void doJumpInputSystem(class StrictEntityContext const &, class optional_ref<class FlagComponent<struct AutoJumpingFlag> const>, struct AbilitiesComponent const &, struct MoveInputComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct MobIsJumpingFlag>>);

};
