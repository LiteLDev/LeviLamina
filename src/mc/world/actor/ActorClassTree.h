#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

namespace ActorClassTree {
// functions
// NOLINTBEGIN
MCAPI bool isHangingEntity(::Actor const& inEntity);

MCAPI bool isInstanceOf(::Actor const& inEntity, ::ActorType type);
// NOLINTEND

} // namespace ActorClassTree
