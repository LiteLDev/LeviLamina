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
class AABB;
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Level;
class MobEffectInstance;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct VariantParameterList;
namespace mce { class UUID; }
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
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 3
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    // vIndex: 145
    virtual void aiStep() /*override*/;

    // vIndex: 175
    virtual void newServerAiStep() /*override*/;

    // vIndex: 85
    virtual bool canFreeze() const /*override*/;

    // vIndex: 105
    virtual bool canBeAffected(uint id) const /*override*/;

    // vIndex: 106
    virtual bool canBeAffectedByArrow(::MobEffectInstance const& effect) const /*override*/;

    // vIndex: 144
    virtual void hurtEffects(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 136
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 92
    virtual float causeFallDamageToActor(float, float, ::ActorDamageSource) /*override*/;

    // vIndex: 155
    virtual int getArmorValue() const /*override*/;

    // vIndex: 123
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 11
    virtual void remove() /*override*/;

    // vIndex: 27
    virtual bool startRiding(::Actor& vehicle, bool forceRiding) /*override*/;

    // vIndex: 69
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 64
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    // vIndex: 12
    virtual ::Vec3 getFiringPos() const /*override*/;

    // vIndex: 173
    virtual void tickDeath() /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 8
    virtual ~WitherBoss() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WitherBoss(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _destroyBlocks(
        ::Level&                       level,
        ::AABB const&                  bb,
        ::BlockSource&                 region,
        int                            range,
        ::WitherBoss::WitherAttackType attackType
    );

    MCAPI void _performRangedAttack(int headID, ::Actor& target);

    MCAPI void _performRangedAttack(int headID, ::Vec3 const& targetPos, bool dangerous);

    MCAPI bool canShoot();

    MCAPI bool getAerialAttack() const;

    MCAPI ::ActorUniqueID getAlternativeTarget(int headIndex);

    MCAPI ::Vec3 getHeadPos(int headID) const;

    MCAPI bool hasAerialAttack() const;

    MCAPI void postAiStep();

    MCAPI ::WitherBossPreAIStepResult preAiStep();

    MCAPI void setAerialAttack(bool aerialAttack);

    MCAPI void setAlternativeTarget(int headIndex, ::ActorUniqueID entityId);

    MCAPI void setInvulnerableTicks(int invulnerableTicks);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID const& MAX_HEALTH_CAP_UUID();
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
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCAPI void $aiStep();

    MCAPI void $newServerAiStep();

    MCFOLD bool $canFreeze() const;

    MCAPI bool $canBeAffected(uint id) const;

    MCAPI bool $canBeAffectedByArrow(::MobEffectInstance const& effect) const;

    MCAPI void $hurtEffects(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCFOLD float $causeFallDamageToActor(float, float, ::ActorDamageSource);

    MCAPI int $getArmorValue() const;

    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI void $remove();

    MCFOLD bool $startRiding(::Actor& vehicle, bool forceRiding);

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCAPI ::Vec3 $getFiringPos() const;

    MCFOLD void $tickDeath();

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
