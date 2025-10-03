#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Vec3;
// clang-format on

class SensingComponent {
public:
    // SensingComponent inner types define
    using ActorSet = ::std::unordered_set<::ActorUniqueID>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ActorUniqueID>> mSeen;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ActorUniqueID>> mUnseen;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool canSee(::Mob& owner, ::Actor const& target);

    MCAPI bool withinFOV(::Mob& owner, ::Vec3 const& targetPosition, float fov);

    MCAPI ~SensingComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
