#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/util/ExpiringTick.h"
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class BlockPos;
class EntityContext;
class Vec3;
struct ActorDefinitionIdentifier;
// clang-format on

class Camel : public ::Animal {
public:
    // Camel inner types define
    enum class SittingState : uchar {
        StandingAdult = 0,
        SittingAdult  = 1,
        StandingBaby  = 2,
        SittingBaby   = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Camel::SittingState>            mLastSittingState;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>> mDashCooldown;
    ::ll::TypedStorage<1, 1, bool>                             mWasInCooldown;
    // NOLINTEND

public:
    // prevent constructor by default
    Camel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void aiStep() /*override*/;

    virtual void normalTick() /*override*/;

    virtual ::Vec3 getInterpolatedRidingOffset(float, int const) const /*override*/;

    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Camel(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
