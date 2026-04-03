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
MCNAPI void pullToRide(::Actor& owner, ::Actor& other);

MCNAPI void push(::Actor& owner, ::Vec3 const& vec);

MCNAPI void push(::Actor& owner, ::Actor& other, bool pushSelfOnly);

MCNAPI bool skipPush(::Actor& owner, ::Actor& other);
// NOLINTEND

} // namespace PushableByEntityUtility
