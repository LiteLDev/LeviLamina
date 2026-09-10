#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
class Vec3;
struct VisibilityCacheComponent;
// clang-format on

namespace ActorFOVUtility {
// functions
// NOLINTBEGIN
MCNAPI bool canSee(::VisibilityCacheComponent& visibilityCacheComponent, ::Actor const& owner, ::Actor const& target);

MCNAPI bool isPlayerHiddenFrom(::Player const& player, ::ActorType actorType);

MCNAPI bool withinFOV(::Actor const& owner, ::Vec3 const& targetPosition, float fov);
// NOLINTEND

} // namespace ActorFOVUtility
