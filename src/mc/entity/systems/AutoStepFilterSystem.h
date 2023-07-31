#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class AutoStepFilterSystem {

public:
    // prevent constructor by default
    AutoStepFilterSystem& operator=(AutoStepFilterSystem const&) = delete;
    AutoStepFilterSystem(AutoStepFilterSystem const&)            = delete;
    AutoStepFilterSystem()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createAutoStepFilterSystem\@AutoStepFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAutoStepFilterSystem();
    /**
     * @symbol
     * ?tickAutoStepFilterSystem\@AutoStepFilterSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUMoveRequestComponent\@\@$$CBUMaxAutoStepComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@V?$Optional\@$$CBUAbilitiesComponent\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UAutoStepRequestFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
        tickAutoStepFilterSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct MoveRequestComponent const, struct MaxAutoStepComponent const, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<struct AbilitiesComponent const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct AutoStepRequestFlag>>);
    // NOLINTEND
};
