#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
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
    // ?tickJumpInputSystem@JumpInputSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@UPlayerInputRequestComponent@@@@$$CBUMovementAbilitiesComponent@@$$CBUMoveInputComponent@@@@V?$EntityModifier@V?$FlagComponent@UMobIsJumpingFlag@@@@@@@Z
    MCAPI static void
        tickJumpInputSystem(class ViewT<class StrictEntityContext, struct Include<struct PlayerInputRequestComponent>, struct MovementAbilitiesComponent const, struct MoveInputComponent const>, class EntityModifier<class FlagComponent<struct MobIsJumpingFlag>>);

    // NOLINTEND
};
