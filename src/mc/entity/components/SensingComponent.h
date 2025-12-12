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
    MCNAPI bool canSee(::Mob const& owner, ::Actor const& target);

    MCNAPI bool withinFOV(::Mob const& owner, ::Vec3 const& targetPosition, float fov) const;

    MCNAPI ~SensingComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
