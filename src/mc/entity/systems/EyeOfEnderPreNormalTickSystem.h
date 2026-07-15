#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct EyeOfEnderFlagComponent;
struct InterpolateMovementNeededComponent;
struct TickingSystemWithInfo;
// clang-format on

class EyeOfEnderPreNormalTickSystem {
public:
    // EyeOfEnderPreNormalTickSystem inner types define
    using SystemView = ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::EyeOfEnderFlagComponent>,
        ::ActorOwnerComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
