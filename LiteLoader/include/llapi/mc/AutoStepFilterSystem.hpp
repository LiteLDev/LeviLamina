/**
 * @file  AutoStepFilterSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AutoStepFilterSystem.
 *
 */
class AutoStepFilterSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AUTOSTEPFILTERSYSTEM
public:
    class AutoStepFilterSystem& operator=(class AutoStepFilterSystem const &) = delete;
    AutoStepFilterSystem(class AutoStepFilterSystem const &) = delete;
    AutoStepFilterSystem() = delete;
#endif

public:
    /**
     * @symbol ?createAutoStepFilterSystem\@AutoStepFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAutoStepFilterSystem();
    /**
     * @symbol ?tickAutoStepFilterSystem\@AutoStepFilterSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUMoveRequestComponent\@\@$$CBUMaxAutoStepComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@V?$Optional\@$$CBUAbilitiesComponent\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UAutoStepRequestFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void tickAutoStepFilterSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct MoveRequestComponent const, struct MaxAutoStepComponent const, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<struct AbilitiesComponent const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct AutoStepRequestFlag>>);

};
