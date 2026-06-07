#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Vec3;
struct PushableByEntityComponent;
struct PushablePreset;
// clang-format on

namespace PushableByEntityUtility {
// functions
// NOLINTBEGIN
MCAPI ::std::pair<::Vec3, ::Vec3> calculateBallPushVectors(
    ::Vec3 const&           otherToOwner,
    float                   otherSpeed,
    bool                    isOnGround,
    ::PushablePreset const& preset,
    bool                    pushSelfOnly
);

MCAPI ::PushablePreset const&
getPreset(::Actor const& owner, ::PushableByEntityComponent const& component, ::Actor const& other);

MCAPI void pullToRide(::Actor& owner, ::Actor& other);

MCAPI void push(::Actor& owner, ::Vec3 const& vec);

MCAPI void push(::Actor& owner, ::Actor& other, bool pushSelfOnly);

MCAPI bool skipPush(::Actor& owner, ::Actor& other);
// NOLINTEND

} // namespace PushableByEntityUtility
