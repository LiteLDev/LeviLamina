#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct DistanceSortedActor;
// clang-format on

class SniffGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                    mMob;
    ::ll::TypedStorage<4, 12, ::Vec3>                   mSniffingRadius;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mCooldownRangeSeconds;
    ::ll::TypedStorage<2, 2, ushort>                    mDurationTicks;
    ::ll::TypedStorage<8, 8, ::Tick>                    mEndTick;
    ::ll::TypedStorage<8, 8, ::Tick>                    mCooldownExpiryTick;
    ::ll::TypedStorage<4, 4, float>                     mSuspicionRadiusHorizontal;
    ::ll::TypedStorage<4, 4, float>                     mSuspicionRadiusVertical;
    // NOLINTEND

public:
    // prevent constructor by default
    SniffGoal& operator=(SniffGoal const&);
    SniffGoal(SniffGoal const&);
    SniffGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~SniffGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::DistanceSortedActor> _fetchNearbySniffableActors(::ActorType actorType) const;

    MCAPI ::std::optional<::DistanceSortedActor> _fetchNearestSniffableActor() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCFOLD void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
