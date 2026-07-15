#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/actor/ProjectileAnchor.h"
#include "mc/util/FloatRange.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class FireAtTargetGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                  mMob;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                     mFilters;
    ::ll::TypedStorage<4, 8, ::FloatRange>                            mAttackRangeSquared;
    ::ll::TypedStorage<4, 4, uint>                                    mAttackCooldownTicks;
    ::ll::TypedStorage<4, 4, uint>                                    mPreShootDelayTicks;
    ::ll::TypedStorage<8, 8, uint64>                                  mDurationTicks;
    ::ll::TypedStorage<4, 4, float>                                   mMaxHeadRotationX;
    ::ll::TypedStorage<4, 4, float>                                   mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float>                                   mRangedFOV;
    ::ll::TypedStorage<1, 1, bool>                                    mTriedToShoot;
    ::ll::TypedStorage<8, 8, uint64>                                  mAttackCooldownTimeStamp;
    ::ll::TypedStorage<8, 8, uint64>                                  mPreShootDelayTimeStamp;
    ::ll::TypedStorage<8, 8, uint64>                                  mEndTimeStamp;
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>           mProjectileDefinition;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ProjectileAnchor> mOwnerAnchor;
    ::ll::TypedStorage<4, 12, ::Vec3>                                 mOwnerOffset;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ProjectileAnchor> mTargetAnchor;
    ::ll::TypedStorage<4, 12, ::Vec3>                                 mTargetOffset;
    ::ll::TypedStorage<1, 1, bool>                                    mUseRotation;
    // NOLINTEND

public:
    // prevent constructor by default
    FireAtTargetGoal& operator=(FireAtTargetGoal const&);
    FireAtTargetGoal(FireAtTargetGoal const&);
    FireAtTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FireAtTargetGoal(::Mob& mob);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
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
