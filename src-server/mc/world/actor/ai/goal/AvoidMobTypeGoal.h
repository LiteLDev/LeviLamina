#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/versionless/FloatRange.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Path;
struct MobDescriptor;
// clang-format on

class AvoidMobTypeGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::TypedStorage<1, 1, bool> mIgnoreVisibility;
    ::ll::TypedStorage<8, 32, ::std::string> mAvoidIdentifier;
    ::ll::TypedStorage<4, 4, int> mAvoidTargetPositionXZDistance;
    ::ll::TypedStorage<4, 4, int> mAvoidTargetPositionYDistance;
    ::ll::TypedStorage<4, 4, float> mMaximumDistance;
    ::ll::TypedStorage<4, 4, float> mMaximumFlee;
    ::ll::TypedStorage<4, 4, float> mProbabilityPerStrength;
    ::ll::TypedStorage<4, 4, float> mRiverSpeedModifier;
    ::ll::TypedStorage<4, 4, float> mSprintDistanceSquared;
    ::ll::TypedStorage<4, 4, float> mSprintSpeedModifier;
    ::ll::TypedStorage<4, 4, float> mWalkSpeedModifier;
    ::ll::TypedStorage<1, 1, bool> mRemoveTarget;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnEscapeTrigger;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mSoundIntervalRange;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mToAvoid;
    ::ll::TypedStorage<4, 12, ::Vec3> mPosition;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>> mPath;
    ::ll::TypedStorage<8, 8, ::Tick> mNextSoundEventTick;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobDescriptor>> mAvoidMobs;
    // NOLINTEND

public:
    // prevent constructor by default
    AvoidMobTypeGoal& operator=(AvoidMobTypeGoal const&);
    AvoidMobTypeGoal(AvoidMobTypeGoal const&);
    AvoidMobTypeGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~AvoidMobTypeGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool canFindAvoidPath(::Actor* actor);

    MCAPI ::Actor* findNearestEntityToAvoid(float dist);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
