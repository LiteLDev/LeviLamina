#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class SheepPreAIStepSystem {
public:
    // prevent constructor by default
    SheepPreAIStepSystem& operator=(SheepPreAIStepSystem const&);
    SheepPreAIStepSystem(SheepPreAIStepSystem const&);
    SheepPreAIStepSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _doSheepPreAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent&);

    MCAPI static void _tickSheepPreAIStepSystem(class ViewT<
                                                class StrictEntityContext,
                                                struct Include<
                                                    class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                    class FlagComponent<struct SheepFlag>>,
                                                class ActorOwnerComponent> view);

    // NOLINTEND
};
