#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/projectile/ProjectileAnchor.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/phys/HitResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BaseGameVersion;
class CompoundTag;
class DataLoadHelper;
class Level;
class OnHitSubcomponent;
class Vec2;
// clang-format on

class ProjectileComponent {
public:
    // ProjectileComponent inner types define
    enum class EAxis : int {
        None = -1,
        X    = 0,
        Y    = 1,
        Z    = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                   mWasOnGround;
    ::ll::TypedStorage<1, 1, bool>                                   mNoPhysics;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                        mOwnerId;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mThrownPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mApexPos;
    ::ll::TypedStorage<1, 1, bool>                                   mFoundApex;
    ::ll::TypedStorage<4, 4, int>                                    mLife;
    ::ll::TypedStorage<4, 4, int>                                    mTickCount;
    ::ll::TypedStorage<4, 4, int>                                    mFlightTime;
    ::ll::TypedStorage<4, 4, int>                                    mOnGroundTime;
    ::ll::TypedStorage<4, 4, int>                                    mShakeTime;
    ::ll::TypedStorage<4, 12, ::BlockPos>                            mBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos>                            mStuckToBlockPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mCollisionPos;
    ::ll::TypedStorage<4, 4, int>                                    mEnchantPower;
    ::ll::TypedStorage<4, 4, int>                                    mEnchantImpaler;
    ::ll::TypedStorage<8, 112, ::HitResult>                          mHitResult;
    ::ll::TypedStorage<1, 1, uchar>                                  mHitFacing;
    ::ll::TypedStorage<1, 1, bool>                                   mReflect;
    ::ll::TypedStorage<4, 4, int>                                    mReflectImmunityTicks;
    ::ll::TypedStorage<4, 4, float>                                  mPower;
    ::ll::TypedStorage<4, 4, float>                                  mDamage;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mOffset;
    ::ll::TypedStorage<4, 4, ::ParticleType>                         mHitParticle;
    ::ll::TypedStorage<4, 4, float>                                  mGravity;
    ::ll::TypedStorage<4, 4, float>                                  mUpwardsAngleOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<::OnHitSubcomponent*>>   mOnHitCommands;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>             mOnHitEvent;
    ::ll::TypedStorage<4, 4, float>                                  mUncertaintyBase;
    ::ll::TypedStorage<4, 4, float>                                  mUncertaintyMultiplier;
    ::ll::TypedStorage<4, 4, ::ActorType>                            mFilterType;
    ::ll::TypedStorage<4, 4, float>                                  mOnFireTime;
    ::ll::TypedStorage<4, 4, int>                                    mPotionEffect;
    ::ll::TypedStorage<4, 4, float>                                  mSplashRange;
    ::ll::TypedStorage<1, 1, bool>                                   mKnockback;
    ::ll::TypedStorage<4, 4, float>                                  mKnockbackForce;
    ::ll::TypedStorage<1, 1, bool>                                   mCatchFire;
    ::ll::TypedStorage<1, 1, bool>                                   mChanneling;
    ::ll::TypedStorage<1, 1, bool>                                   mIsSplash;
    ::ll::TypedStorage<4, 4, float>                                  mInertiaMod;
    ::ll::TypedStorage<4, 4, float>                                  mLiquidInertia;
    ::ll::TypedStorage<1, 1, bool>                                   mSemiRandomDiffDamage;
    ::ll::TypedStorage<4, 4, ::ProjectileAnchor>                     mSpawnPosAnchor;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mHitEntitySound;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mHitGroundSound;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mShootSound;
    ::ll::TypedStorage<1, 1, bool>                                   mIsDangerous;
    ::ll::TypedStorage<1, 1, bool>                                   mShootTarget;
    ::ll::TypedStorage<1, 1, bool>                                   mDamageOwner;
    ::ll::TypedStorage<1, 1, bool>                                   mReflectOnHurt;
    ::ll::TypedStorage<1, 1, bool>                                   mDestroyOnHurt;
    ::ll::TypedStorage<1, 1, bool>                                   mStopOnHurt;
    ::ll::TypedStorage<1, 1, bool>                                   mCritParticleOnHurt;
    ::ll::TypedStorage<1, 1, bool>                                   mHitWater;
    ::ll::TypedStorage<1, 1, bool>                                   mHitActor;
    ::ll::TypedStorage<1, 1, bool>                                   mMultipleHits;
    ::ll::TypedStorage<4, 4, int>                                    mPiercingEnchantLevel;
    ::ll::TypedStorage<4, 4, int>                                    mActorHitCount;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorType>>            mIgnoredEntities;
    ::ll::TypedStorage<1, 1, bool>                                   mHitNearestPassenger;
    ::ll::TypedStorage<1, 1, bool>                                   mIsHoming;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                        mPendingTargetID;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>>                   mTarget;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                        mTargetID;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mTargetDelta;
    ::ll::TypedStorage<4, 4, int>                                    mFlightSteps;
    ::ll::TypedStorage<4, 4, ::ProjectileComponent::EAxis>           mCurrentMoveDirection;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                        mLastReflectActor;
    ::ll::TypedStorage<1, 1, bool>                                   mShouldBounce;
    ::ll::TypedStorage<4, 4, uint>                                   mCurrentDelay;
    ::ll::TypedStorage<1, 1, bool>                                   mWaitingForServer;
    ::ll::TypedStorage<1, 1, bool>                                   mWaitingForServerHitGround;
    ::ll::TypedStorage<8, 112, ::HitResult>                          mCachedHitResult;
    ::ll::TypedStorage<1, 1, bool>                                   mDelayOneFrame;
    // NOLINTEND

public:
    // prevent constructor by default
    ProjectileComponent& operator=(ProjectileComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ProjectileComponent();

    MCAPI ProjectileComponent(::ProjectileComponent&&);

    MCAPI ProjectileComponent(::ProjectileComponent const&);

    MCAPI ::std::tuple<::BlockPos, float>
    _getInitialTargetParams(::Actor const& owner, ::TempEPtr<::Actor> target) const;

    MCAPI void _handleLightningOnHit(::Actor& owner);

    MCAPI void _selectNextMoveDirection(::Actor const& owner, ::ProjectileComponent::EAxis avoidAxis);

    MCAPI bool _tryReflect(::Actor& owner, ::Level& level);

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI float computeCollisionMargin(::BaseGameVersion const& baseGameVersion);

    MCAPI ::HitResult getCachedHitResult() const;

    MCAPI ::HitResult getHitResult() const;

    MCAPI ::Vec3 getShooterAngle(::Actor& shooter) const;

    MCAPI float getUncertainty(::SharedTypes::Legacy::Difficulty diff) const;

    MCAPI void handleMovementGravity(::Actor& owner);

    MCAPI void handleMovementHoming(::Actor& owner);

    MCAPI void hurt(::Actor& owner, ::ActorDamageSource const& damageSource);

    MCAPI void initFromDefinition(::Actor& owner);

    MCAPI void lerpMotion(::Actor& owner, ::Vec3 const& delta);

    MCAPI void onHit(::Actor& owner, ::HitResult const& res);

    MCAPI ::ProjectileComponent& operator=(::ProjectileComponent&&);

    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void setHitResult(::HitResult result);

    MCAPI void shoot(::Actor& owner, ::Actor& shooter);

    MCAPI void
    shoot(::Actor& owner, ::Vec3 const& dir, float pow, float uncertainty, ::Vec3 const& baseSpeed, ::Actor* target);

    MCAPI ~ProjectileComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Vec2 dampenShooterAngle(::Vec2 const& angle, float angleOffset, ::BaseGameVersion const& currVer);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ProjectileComponent&&);

    MCAPI void* $ctor(::ProjectileComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
