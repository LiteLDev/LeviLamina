#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Vec3;
// clang-format on

class EntitySubsensor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2>                   mRange;
    ::ll::TypedStorage<4, 4, float>                    mYOffset;
    ::ll::TypedStorage<1, 1, bool>                     mRequireAll;
    ::ll::TypedStorage<4, 4, int>                      mMinimumCount;
    ::ll::TypedStorage<4, 4, int>                      mMaximumCount;
    ::ll::TypedStorage<8, 8, uint64>                   mCooldownInTicks;
    ::ll::TypedStorage<8, 32, ::std::string>           mEvent;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>      mFilter;
    ::ll::TypedStorage<8, 16, ::std::optional<::Tick>> mNextSensingTick;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void senseEntities(
        ::Actor&                                      actor,
        ::gsl::span<::gsl::not_null<::Actor*>> const& nearbyActors,
        ::Tick const&                                 currentTick,
        ::Vec3 const&                                 searchAreaPos,
        ::Vec3 const&                                 searchAreaGrowth,
        bool                                          canFireEventWithNoEntities
    );

    MCAPI ~EntitySubsensor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
