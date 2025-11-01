#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Vec3;
struct Tick;
// clang-format on

class EntitySubsensor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnke19055;
    ::ll::UntypedStorage<4, 4> mUnk565267;
    ::ll::UntypedStorage<1, 1> mUnkc5df3d;
    ::ll::UntypedStorage<4, 4> mUnk556217;
    ::ll::UntypedStorage<4, 4> mUnkc2289e;
    ::ll::UntypedStorage<8, 8> mUnkc69f2f;
    ::ll::UntypedStorage<8, 32> mUnk1ec600;
    ::ll::UntypedStorage<8, 64> mUnkfd4a67;
    ::ll::UntypedStorage<8, 16> mUnk59037a;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySubsensor& operator=(EntitySubsensor const&);
    EntitySubsensor(EntitySubsensor const&);
    EntitySubsensor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void senseEntities(::Actor& actor, ::gsl::span<::gsl::not_null<::Actor*>> const& nearbyActors, ::Tick const& currentTick, ::Vec3 const& searchAreaPos, ::Vec3 const& searchAreaGrowth, bool canFireEventWithNoEntities);

    MCNAPI ~EntitySubsensor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
