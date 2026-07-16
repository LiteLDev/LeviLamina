#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Vec3;
// clang-format on

namespace PushableByEntityUtility {
// functions
// NOLINTBEGIN
MCAPI void pullToRide(::Actor& owner, ::Actor& other);

MCAPI void push(::Actor& owner, ::Vec3 const& vec);

MCAPI void push(::Actor& owner, ::Actor& other, bool pushSelfOnly);

MCAPI bool skipPush(::Actor& owner, ::Actor& other);
// NOLINTEND

} // namespace PushableByEntityUtility
