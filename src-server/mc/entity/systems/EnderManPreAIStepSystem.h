#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct EnderManFlagComponent;
struct MobIsJumpingFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

struct EnderManPreAIStepSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void tick(::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent, ::EnderManFlagComponent, ::MobIsJumpingFlagComponent>> view, ::EntityModifier<::MobIsJumpingFlagComponent> mod);
    // NOLINTEND

};
