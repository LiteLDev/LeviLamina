#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class AutoStepFilterSystem {
public:
    // prevent constructor by default
    AutoStepFilterSystem& operator=(AutoStepFilterSystem const&);
    AutoStepFilterSystem(AutoStepFilterSystem const&);
    AutoStepFilterSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createAutoStepFilterSystem@AutoStepFilterSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createAutoStepFilterSystem();

    // symbol:
    // ?tickAutoStepFilterSystem@AutoStepFilterSystem@@SAXV?$ViewT@VStrictEntityContext@@$$CBUMoveRequestComponent@@$$CBUMaxAutoStepComponent@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@V?$Optional@$$CBUAbilitiesComponent@@@@@@V?$EntityModifier@V?$FlagComponent@UAutoStepRequestFlag@@@@@@@Z
    MCAPI static void tickAutoStepFilterSystem(
        class ViewT<
            class StrictEntityContext,
            struct MoveRequestComponent const,
            struct MaxAutoStepComponent const,
            class Optional<class FlagComponent<struct OnGroundFlag> const>,
            class Optional<struct AbilitiesComponent const>>                  view,
        class EntityModifier<class FlagComponent<struct AutoStepRequestFlag>> mod
    );

    // NOLINTEND
};
