#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct MoveRequestComponent;
struct OnGroundFlagComponent;
struct RailMovementComponent;
struct SnapOnRailComponent;
struct StateVectorComponent;
// clang-format on

class MinecartComeOffRailSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _minecartComeOffRailSystem(::StrictEntityContext& context, ::RailMovementComponent const& railMovementComponent, ::StateVectorComponent& stateVectorComponent, ::Optional<::OnGroundFlagComponent const> onGroundFlagComponent, ::EntityModifier<::MoveRequestComponent> mod);

    MCNAPI static void _tickMinecartComeOffRailSystem(::ViewT<::StrictEntityContext, ::Exclude<::SnapOnRailComponent>, ::Include<::ActorMovementTickNeededComponent>, ::RailMovementComponent const, ::StateVectorComponent, ::Optional<::OnGroundFlagComponent const>> view, ::EntityModifier<::MoveRequestComponent> mod);
    // NOLINTEND

};
