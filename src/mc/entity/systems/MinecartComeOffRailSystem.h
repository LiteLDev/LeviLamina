#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct InterpolateMovementNeededComponent;
struct OnGroundFlagComponent;
struct RailMovementComponent;
struct SnapOnRailComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class MinecartComeOffRailSystem {
public:
    // MinecartComeOffRailSystem inner types define
    using SystemView = ::ViewT<
        ::StrictEntityContext,
        ::Exclude<::SnapOnRailComponent>,
        ::Include<::InterpolateMovementNeededComponent>,
        ::RailMovementComponent const,
        ::StateVectorComponent,
        ::Optional<::OnGroundFlagComponent const>>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
