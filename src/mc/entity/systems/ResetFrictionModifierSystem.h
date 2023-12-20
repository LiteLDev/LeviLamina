#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class ResetFrictionModifierSystem {
public:
    // prevent constructor by default
    ResetFrictionModifierSystem& operator=(ResetFrictionModifierSystem const&);
    ResetFrictionModifierSystem(ResetFrictionModifierSystem const&);
    ResetFrictionModifierSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@ResetFrictionModifierSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // symbol:
    // ?tickResetFrictionModifierSystem@ResetFrictionModifierSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@UPlayerInputRequestComponent@@@@UFrictionModifierComponent@@@@@Z
    MCAPI static void tickResetFrictionModifierSystem(class ViewT<
                                                      class StrictEntityContext,
                                                      struct Include<
                                                          class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                          struct PlayerInputRequestComponent>,
                                                      struct FrictionModifierComponent>);

    // NOLINTEND
};
