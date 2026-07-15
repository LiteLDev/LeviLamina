#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/entity/components/WitherBossPreAIStepResult.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class Block;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class MobEffectInstance;
struct ActorDefinitionIdentifier;
struct HurtEffectsSettings;
struct HurtParameters;
struct VariantParameterList;
// clang-format on

class WitherBoss : public ::Monster {
public:
    // WitherBoss inner types define
    enum class WitherAttackType : int {
        Charge        = 0,
        HurtExplosion = 1,
        Projectile    = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    MAX_SHIELD_HEALTH;
    ::ll::TypedStorage<4, 4, int>                                    mShieldHealth;
    ::ll::TypedStorage<4, 24, ::Vec2[3]>                             mHeadRots;
    ::ll::TypedStorage<4, 24, ::Vec2[3]>                             mOldHeadRots;
    ::ll::TypedStorage<4, 12, int[3]>                                mNextHeadUpdate;
    ::ll::TypedStorage<4, 12, int[3]>                                mIdleHeadUpdates;
    ::ll::TypedStorage<4, 4, int>                                    mDestroyBlocksTick;
    ::ll::TypedStorage<4, 4, int>                                    mHealthThreshold;
    ::ll::TypedStorage<4, 4, int>                                    mPhase;
    ::ll::TypedStorage<1, 1, bool>                                   mWantsToExplode;
    ::ll::TypedStorage<1, 1, bool>                                   mCharging;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mChargeDirection;
    ::ll::TypedStorage<4, 4, int>                                    mChargeFrames;
    ::ll::TypedStorage<4, 4, int>                                    mPreparingCharge;
    ::ll::TypedStorage<4, 4, int>                                    mProjectileCounter;
    ::ll::TypedStorage<4, 4, int>                                    mSpawningFrames;
    ::ll::TypedStorage<4, 4, int>                                    mTimeTillNextShot;
    ::ll::TypedStorage<4, 4, int>                                    mFireRate;
    ::ll::TypedStorage<4, 4, float>                                  mSpinSpeed;
    ::ll::TypedStorage<4, 4, int>                                    mStunTimer;
    ::ll::TypedStorage<4, 4, int>                                    mFramesTillMove;
    ::ll::TypedStorage<1, 1, bool>                                   mWantsMove;
    ::ll::TypedStorage<1, 1, bool>                                   mIsPathing;
    ::ll::TypedStorage<4, 4, int>                                    mMaxHealth;
    ::ll::TypedStorage<4, 4, int>                                    mNumSkeletons;
    ::ll::TypedStorage<4, 4, int>                                    mMaxSkeletons;
    ::ll::TypedStorage<4, 4, int>                                    mMovementTime;
    ::ll::TypedStorage<4, 4, int>                                    mHealthIntervals;
    ::ll::TypedStorage<4, 4, int>                                    mLastHealthValue;
    ::ll::TypedStorage<4, 4, int>                                    mDelayShot;
    ::ll::TypedStorage<4, 4, int>                                    mTimeSinceLastShot;
    ::ll::TypedStorage<4, 4, float>                                  mAttackRange;
    ::ll::TypedStorage<1, 1, bool>                                   mSecondVolley;
    ::ll::TypedStorage<4, 4, int>                                    mMainHeadAttackCountdown;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorDamageSource>> mDeathSource;
    ::ll::TypedStorage<4, 4, int>                                    mlastFiredHead;
    // NOLINTEND

public:
    // prevent constructor by default
    WitherBoss();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    virtual void aiStep() /*override*/;

    virtual void newServerAiStep() /*override*/;

    virtual bool canFreeze() const /*override*/;

    virtual bool canBeAffected(uint id) const /*override*/;

    virtual bool canBeAffectedByArrow(::MobEffectInstance const& effect) const /*override*/;

    virtual void
    hurtEffects(::ActorDamageSource const& source, float damage, ::HurtEffectsSettings const& settings) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual float causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source) /*override*/;

    virtual int getArmorValue() const /*override*/;

    virtual void die(::ActorDamageSource const& source) /*override*/;

    virtual void remove() /*override*/;

    virtual bool startRiding(::Actor& vehicle, bool forceRiding) /*override*/;

    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;

    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    virtual ::Vec3 getFiringPos() const /*override*/;

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WitherBoss(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void awardSpawnWitherAchievement() const;

    MCAPI void postAiStep();

    MCAPI ::WitherBossPreAIStepResult preAiStep();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool canDestroy(::Block const& block, ::WitherBoss::WitherAttackType attackType);
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
