#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class JumpInputSystem {
public:
    // prevent constructor by default
    JumpInputSystem& operator=(JumpInputSystem const&);
    JumpInputSystem(JumpInputSystem const&);
    JumpInputSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createJumpInputSystem@JumpInputSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createJumpInputSystem();

    // symbol:
    // ?doJumpInputSystem@JumpInputSystem@@SAXAEBVStrictEntityContext@@V?$optional_ref@$$CBV?$FlagComponent@UAutoJumpingFlag@@@@@@AEBUAbilitiesComponent@@AEBUMoveInputComponent@@V?$EntityModifier@V?$FlagComponent@UMobIsJumpingFlag@@@@@@@Z
    MCAPI static void
    doJumpInputSystem(class StrictEntityContext const&, class optional_ref<class FlagComponent<struct AutoJumpingFlag> const>, struct AbilitiesComponent const&, struct MoveInputComponent const&, class EntityModifier<class FlagComponent<struct MobIsJumpingFlag>>);

    // NOLINTEND
};
