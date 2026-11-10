#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/v1_26_50/actor/ProjectileComponentDefinition.h"
#include "mc/entity/components_json_legacy/ProjectileHitState.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/phys/HitResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BaseGameVersion;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
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

    using ProjectileAnchor = ::SharedTypes::v1_26_50::ProjectileComponentDefinition::ProjectileAnchor;

    using ShouldBounce = ::SharedTypes::v1_26_50::ProjectileComponentDefinition::ShouldBounce;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                 mWasOnGround;
    ::ll::TypedStorage<1, 1, bool>                                 mNoPhysics;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mOwnerId;
    ::ll::TypedStorage<4, 12, ::Vec3>                              mThrownPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                              mApexPos;
    ::ll::TypedStorage<1, 1, bool>                                 mFoundApex;
    ::ll::TypedStorage<4, 4, int>                                  mDespawnTimer;
    ::ll::TypedStorage<4, 4, int>                                  mLifetime;
    ::ll::TypedStorage<4, 4, int>                                  mFlightTime;
    ::ll::TypedStorage<4, 4, int>                                  mOnGroundTime;
    ::ll::TypedStorage<4, 4, int>                                  mShakeTime;
    ::ll::TypedStorage<4, 12, ::BlockPos>                          mBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos>                          mStuckToBlockPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                              mCollisionPos;
    ::ll::TypedStorage<4, 4, int>                                  mEnchantPower;
    ::ll::TypedStorage<4, 4, int>                                  mEnchantImpaler;
    ::ll::TypedStorage<8, 136, ::HitResult>                        mHitResult;
    ::ll::TypedStorage<1, 1, uchar>                                mHitFacing;
    ::ll::TypedStorage<1, 1, bool>                                 mReflect;
    ::ll::TypedStorage<4, 4, int>                                  mReflectImmunityTicks;
    ::ll::TypedStorage<4, 4, float>                                mPower;
    ::ll::TypedStorage<4, 4, float>                                mDamage;
    ::ll::TypedStorage<4, 12, ::Vec3>                              mOffset;
    ::ll::TypedStorage<4, 4, ::ParticleType>                       mHitParticle;
    ::ll::TypedStorage<4, 4, float>                                mGravity;
    ::ll::TypedStorage<4, 4, float>                                mUpwardsAngleOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<::OnHitSubcomponent*>> mOnHitCommands;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>           mOnHitEvent;
    ::ll::TypedStorage<4, 4, float>                                mUncertaintyBase;
    ::ll::TypedStorage<4, 4, float>                                mUncertaintyMultiplier;
    ::ll::TypedStorage<4, 4, float>                                mOnFireTime;
    ::ll::TypedStorage<4, 4, int>                                  mPotionEffect;
    ::ll::TypedStorage<4, 4, float>                                mSplashRange;
    ::ll::TypedStorage<4, 4, float>                                mKnockbackForce;
    ::ll::TypedStorage<1, 1, bool>                                 mCatchFire;
    ::ll::TypedStorage<1, 1, bool>                                 mSpreadFire;
    ::ll::TypedStorage<1, 1, bool>                                 mChanneling;
    ::ll::TypedStorage<4, 4, float>                                mInertiaMod;
    ::ll::TypedStorage<4, 4, float>                                mLiquidInertia;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_50::ProjectileComponentDefinition::ProjectileAnchor> mSpawnPosAnchor;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                                   mHitEntitySound;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                                   mHitGroundSound;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                                   mShootSound;
    ::ll::TypedStorage<1, 1, bool>                                                                     mIsDangerous;
    ::ll::TypedStorage<1, 1, bool>                                                                     mShootTarget;
    ::ll::TypedStorage<1, 1, bool>                                                                     mDamageOwner;
    ::ll::TypedStorage<1, 1, bool>                                                                     mReflectOnHurt;
    ::ll::TypedStorage<1, 1, bool>                                                                     mDestroyOnHurt;
    ::ll::TypedStorage<1, 1, bool>                                                                     mStopOnHurt;
    ::ll::TypedStorage<1, 1, bool>                         mCritParticleOnHurt;
    ::ll::TypedStorage<1, 1, bool>                         mHitWater;
    ::ll::TypedStorage<1, 1, bool>                         mHitActor;
    ::ll::TypedStorage<1, 1, bool>                         mMultipleHits;
    ::ll::TypedStorage<4, 4, int>                          mPiercingEnchantLevel;
    ::ll::TypedStorage<4, 4, int>                          mActorHitCount;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorType>>  mIgnoredEntities;
    ::ll::TypedStorage<1, 1, bool>                         mHitNearestPassenger;
    ::ll::TypedStorage<1, 1, bool>                         mIsHoming;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>              mPendingTargetID;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>>         mTarget;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>              mTargetID;
    ::ll::TypedStorage<4, 12, ::Vec3>                      mTargetDelta;
    ::ll::TypedStorage<4, 4, int>                          mFlightSteps;
    ::ll::TypedStorage<4, 4, ::ProjectileComponent::EAxis> mCurrentMoveDirection;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>              mLastReflectActor;
    ::ll::TypedStorage<1, 5, ::ProjectileHitState>         mHitState;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_50::ProjectileComponentDefinition::ShouldBounce> mShouldBounce;
    ::ll::TypedStorage<1, 1, bool>                                                                 mHasLeftOwner;
    ::ll::TypedStorage<4, 4, uint>                                                                 mCurrentDelay;
    ::ll::TypedStorage<1, 1, bool>                                                                 mWaitingForServer;
    ::ll::TypedStorage<1, 1, bool>          mWaitingForServerHitGround;
    ::ll::TypedStorage<8, 136, ::HitResult> mCachedHitResult;
    ::ll::TypedStorage<1, 1, bool>          mDelayOneFrame;
    ::ll::TypedStorage<1, 1, bool>          mShouldRestoreUsesMobTravelComponent;
    ::ll::TypedStorage<1, 1, bool>          mIsolatedPhysics;
    // NOLINTEND

public:
    // prevent constructor by default
    ProjectileComponent& operator=(ProjectileComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProjectileComponent();

    MCNAPI ProjectileComponent(::ProjectileComponent&&);

    MCNAPI ProjectileComponent(::ProjectileComponent const&);

    MCNAPI void _selectNextMoveDirection(::Actor const& owner, ::ProjectileComponent::EAxis avoidAxis);

    MCNAPI void _tryReflectOnHurt(::Actor& owner, ::ActorDamageSource const& damageSource);

    MCNAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI ::std::vector<::ActorType> const getIgnoredEntities() const;

    MCNAPI ::Vec3 getShooterAngle(::Actor& shooter) const;

    MCAPI void handleMovementAndGravity(::Actor& owner, bool skipPositionUpdate);

    MCAPI void handleMovementHoming(::Actor& owner);

    MCNAPI void hurt(::Actor& owner, ::ActorDamageSource const& damageSource);

    MCNAPI void initFromDefinition(::Actor& owner);

    MCNAPI void lerpMotion(::Actor& owner, ::Vec3 const& delta);

    MCNAPI void onComponentRemoved(::EntityContext& entity);

    MCAPI void onHit(::Actor& owner, ::HitResult const& hitResult);

    MCNAPI ::ProjectileComponent& operator=(::ProjectileComponent&&);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void setActiveTarget(::Actor const& owner, ::Actor* target);

    MCNAPI void shoot(::Actor& owner, ::Actor& shooter);

    MCAPI void
    shoot(::Actor& owner, ::Vec3 const& dir, float pow, float uncertainty, ::Vec3 const& baseSpeed, ::Actor* target);

    MCNAPI void tryApplyOffset(::Actor& owner, ::Actor* sender) const;

    MCNAPI ~ProjectileComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _isLoyaltyTrident(::Actor const& owner);

    MCNAPI static ::Vec2 dampenShooterAngle(::Vec2 const& angle, float angleOffset, ::BaseGameVersion const& version);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ProjectileComponent&&);

    MCNAPI void* $ctor(::ProjectileComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
