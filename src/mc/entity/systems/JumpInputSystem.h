#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
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
    // ?doJumpInputSystem@JumpInputSystem@@SAXAEBVStrictEntityContext@@V?$optional_ref@$$CBV?$FlagComponent@UAutoJumpingFlag@@@@@@AEBUMovementAbilitiesComponent@@AEBUMoveInputComponent@@V?$EntityModifier@V?$FlagComponent@UMobIsJumpingFlag@@@@@@@Z
    MCAPI static void doJumpInputSystem(
        class StrictEntityContext const& context,
        class optional_ref<class FlagComponent<struct AutoJumpingFlag> const>,
        struct MovementAbilitiesComponent const&,
        struct MoveInputComponent const&,
        class EntityModifier<class FlagComponent<struct MobIsJumpingFlag>> mod
    );

    // symbol:
    // ?tickJumpInputSystem@JumpInputSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@UPlayerInputRequestComponent@@@@V?$Optional@$$CBV?$FlagComponent@UAutoJumpingFlag@@@@@@$$CBUMovementAbilitiesComponent@@$$CBUMoveInputComponent@@@@V?$EntityModifier@V?$FlagComponent@UMobIsJumpingFlag@@@@@@@Z
    MCAPI static void tickJumpInputSystem(
        class ViewT<
            class StrictEntityContext,
            struct Include<struct PlayerInputRequestComponent>,
            class Optional<class FlagComponent<struct AutoJumpingFlag> const>,
            struct MovementAbilitiesComponent const,
            struct MoveInputComponent const>                               view,
        class EntityModifier<class FlagComponent<struct MobIsJumpingFlag>> mod
    );

    // NOLINTEND
};
