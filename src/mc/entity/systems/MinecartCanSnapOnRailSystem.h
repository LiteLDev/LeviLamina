#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct InterpolateMovementNeededComponent;
struct RailMovementComponent;
struct SnapOnRailComponent;
struct StateVectorComponent;
// clang-format on

struct MinecartCanSnapOnRailSystem {
public:
    // MinecartCanSnapOnRailSystem inner types define
    using SystemView = ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::RailMovementComponent>,
        ::StateVectorComponent const>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _checkCanSnapOnRail(
        ::StrictEntityContext const&            context,
        ::StateVectorComponent const&           stateVectorComponent,
        ::EntityModifier<::SnapOnRailComponent> mod,
        ::IConstBlockSource const&              constBlockSource
    );
    // NOLINTEND
};
