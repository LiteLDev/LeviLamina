#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Vec3;
struct ActorUniqueID;
// clang-format on

class SensingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk87de40;
    ::ll::UntypedStorage<8, 64> mUnk70ff8a;
    // NOLINTEND

public:
    // prevent constructor by default
    SensingComponent& operator=(SensingComponent const&);
    SensingComponent(SensingComponent const&);
    SensingComponent();

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
