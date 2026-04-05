#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct InterpolateMovementNeededComponent;
struct IsHorizontalPoseFlagComponent;
struct PlayerComponent;
struct ShouldUpdateBoundingBoxRequestComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace UpdateHorizontalPoseSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void tick(
    ::ViewT<
        ::StrictEntityContext,
        ::ActorDataFlagComponent const,
        ::Include<::PlayerComponent, ::InterpolateMovementNeededComponent>> tickNeededView,
    ::ViewT<
        ::StrictEntityContext,
        ::ActorDataFlagComponent const,
        ::Include<::ShouldUpdateBoundingBoxRequestComponent>,
        ::Exclude<::InterpolateMovementNeededComponent>> updateBBView,
    ::EntityModifier<::IsHorizontalPoseFlagComponent>    modifier
);

MCAPI void update(
    ::StrictEntityContext const&                       entity,
    ::ActorDataFlagComponent const&                    flags,
    ::EntityModifier<::IsHorizontalPoseFlagComponent>& modifier
);
// NOLINTEND

} // namespace UpdateHorizontalPoseSystem
