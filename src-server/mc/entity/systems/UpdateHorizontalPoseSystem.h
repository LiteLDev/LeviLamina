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
struct ActorMovementTickNeededComponent;
struct IsHorizontalPoseFlagComponent;
struct PlayerComponent;
struct ShouldUpdateBoundingBoxRequestComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace UpdateHorizontalPoseSystem {
// functions
// NOLINTBEGIN
MCNAPI ::TickingSystemWithInfo createSystem();

MCNAPI void tick(::ViewT<::StrictEntityContext, ::ActorDataFlagComponent const, ::Include<::PlayerComponent, ::ActorMovementTickNeededComponent>> tickNeededView, ::ViewT<::StrictEntityContext, ::ActorDataFlagComponent const, ::Include<::ShouldUpdateBoundingBoxRequestComponent>, ::Exclude<::ActorMovementTickNeededComponent>> updateBBView, ::EntityModifier<::IsHorizontalPoseFlagComponent> modifier);

MCNAPI void update(::StrictEntityContext const& entity, ::ActorDataFlagComponent const& flags, ::EntityModifier<::IsHorizontalPoseFlagComponent>& modifier);
// NOLINTEND

}
