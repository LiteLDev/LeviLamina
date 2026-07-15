#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct FallingBlockFlagComponent;
struct InterpolateMovementNeededComponent;
struct TickingSystemWithInfo;
// clang-format on

class FallingBlockNormalTickSystem {
public:
    // FallingBlockNormalTickSystem inner types define
    using SystemView = ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::FallingBlockFlagComponent>,
        ::ActorOwnerComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
