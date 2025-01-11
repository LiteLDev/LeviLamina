#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/LevelSoundEvent.h"
#include "mc/world/Difficulty.h"
#include "mc/world/actor/projectile/ProjectileAnchor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class CompoundTag;
class DataLoadHelper;
class HitResult;
class Level;
class Vec3;
struct ActorUniqueID;
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
    ::ll::UntypedStorage<1, 1>   mUnk1aa13f;
    ::ll::UntypedStorage<1, 1>   mUnka8d1b2;
    ::ll::UntypedStorage<8, 8>   mUnk3b785c;
    ::ll::UntypedStorage<4, 12>  mUnk657cc6;
    ::ll::UntypedStorage<4, 12>  mUnk7c8d4e;
    ::ll::UntypedStorage<1, 1>   mUnk5aecd5;
    ::ll::UntypedStorage<4, 4>   mUnkdd1f46;
    ::ll::UntypedStorage<4, 4>   mUnk2bc10a;
    ::ll::UntypedStorage<4, 4>   mUnkf349f5;
    ::ll::UntypedStorage<4, 4>   mUnk7cd454;
    ::ll::UntypedStorage<4, 12>  mUnkc2eea9;
    ::ll::UntypedStorage<4, 12>  mUnk2263ef;
    ::ll::UntypedStorage<4, 12>  mUnkc7d9cf;
    ::ll::UntypedStorage<4, 4>   mUnk13d33c;
    ::ll::UntypedStorage<4, 4>   mUnk707b20;
    ::ll::UntypedStorage<8, 112> mUnkcd25a0;
    ::ll::UntypedStorage<1, 1>   mUnk2b94ea;
    ::ll::UntypedStorage<1, 1>   mUnk71f9fd;
    ::ll::UntypedStorage<4, 4>   mUnk80d589;
    ::ll::UntypedStorage<4, 4>   mUnk298be6;
    ::ll::UntypedStorage<4, 4>   mUnkc7874d;
    ::ll::UntypedStorage<4, 12>  mUnk4c7f8c;
    ::ll::UntypedStorage<4, 4>   mUnk988780;
    ::ll::UntypedStorage<4, 4>   mUnk2fd125;
    ::ll::UntypedStorage<4, 4>   mUnk9ca64a;
    ::ll::UntypedStorage<8, 24>  mUnkcd3873;
    ::ll::UntypedStorage<8, 104> mUnk707d4c;
    ::ll::UntypedStorage<4, 4>   mUnkf7f5a1;
    ::ll::UntypedStorage<4, 4>   mUnk31ad7f;
    ::ll::UntypedStorage<4, 4>   mUnk879fd3;
    ::ll::UntypedStorage<4, 4>   mUnkc02d3a;
    ::ll::UntypedStorage<4, 4>   mUnkc3e8cb;
    ::ll::UntypedStorage<4, 4>   mUnk982ebf;
    ::ll::UntypedStorage<1, 1>   mUnk859d78;
    ::ll::UntypedStorage<4, 4>   mUnk3e2490;
    ::ll::UntypedStorage<1, 1>   mUnk31aaef;
    ::ll::UntypedStorage<1, 1>   mUnke7d0a1;
    ::ll::UntypedStorage<1, 1>   mUnk21e1d1;
    ::ll::UntypedStorage<4, 4>   mUnka620bc;
    ::ll::UntypedStorage<4, 4>   mUnkbcaa50;
    ::ll::UntypedStorage<1, 1>   mUnk5ecef6;
    ::ll::UntypedStorage<4, 4>   mUnk19991a;
    ::ll::UntypedStorage<4, 4>   mUnkff1095;
    ::ll::UntypedStorage<4, 4>   mUnkceef96;
    ::ll::UntypedStorage<4, 4>   mUnkaf8ccc;
    ::ll::UntypedStorage<1, 1>   mUnk1292de;
    ::ll::UntypedStorage<1, 1>   mUnkbcf82d;
    ::ll::UntypedStorage<1, 1>   mUnkc9a6b0;
    ::ll::UntypedStorage<1, 1>   mUnk94c1af;
    ::ll::UntypedStorage<1, 1>   mUnk86a969;
    ::ll::UntypedStorage<1, 1>   mUnk505c09;
    ::ll::UntypedStorage<1, 1>   mUnk8f3a1a;
    ::ll::UntypedStorage<1, 1>   mUnk6adbd1;
    ::ll::UntypedStorage<1, 1>   mUnke18b2a;
    ::ll::UntypedStorage<1, 1>   mUnk6bd043;
    ::ll::UntypedStorage<4, 4>   mUnkdfb0b3;
    ::ll::UntypedStorage<4, 4>   mUnkd349b9;
    ::ll::UntypedStorage<8, 24>  mUnk967ef0;
    ::ll::UntypedStorage<1, 1>   mUnk6a7fb7;
    ::ll::UntypedStorage<1, 1>   mUnk7033d4;
    ::ll::UntypedStorage<8, 8>   mUnkb4cbcc;
    ::ll::UntypedStorage<8, 40>  mUnkc4e2b7;
    ::ll::UntypedStorage<8, 8>   mUnk72ef3d;
    ::ll::UntypedStorage<4, 12>  mUnk364d68;
    ::ll::UntypedStorage<4, 4>   mUnk4a912f;
    ::ll::UntypedStorage<4, 4>   mUnk883c26;
    ::ll::UntypedStorage<8, 8>   mUnkfa3426;
    ::ll::UntypedStorage<1, 1>   mUnk264555;
    ::ll::UntypedStorage<4, 4>   mUnk915496;
    ::ll::UntypedStorage<1, 1>   mUnk48a1b6;
    ::ll::UntypedStorage<1, 1>   mUnk30160f;
    ::ll::UntypedStorage<8, 112> mUnk20821c;
    ::ll::UntypedStorage<1, 1>   mUnk559450;
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

    MCAPI void _handleLightningOnHit(::Actor& owner);

    MCAPI void _selectNextMoveDirection(::Actor const& owner, ::ProjectileComponent::EAxis avoidAxis);

    MCAPI bool _tryReflect(::Actor& owner, ::Level& level);

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCFOLD ::ProjectileAnchor getAnchor();

    MCAPI ::HitResult getCachedHitResult() const;

    MCAPI bool getCatchFire() const;

    MCAPI bool getEnchantChanneling() const;

    MCAPI float getGravity() const;

    MCAPI ::HitResult getHitResult() const;

    MCFOLD bool getIsDangerous();

    MCFOLD float getKnockbackForce() const;

    MCFOLD bool getNoPhysics() const;

    MCAPI ::Vec3 getOffset();

    MCFOLD ::SharedTypes::Legacy::LevelSoundEvent getShootSound();

    MCAPI bool getShootTarget();

    MCAPI ::Vec3 getShooterAngle(::Actor& shooter) const;

    MCFOLD bool getShouldBounce() const;

    MCFOLD bool getStopOnHurt() const;

    MCAPI float getThrowPower() const;

    MCAPI float getUncertainty(::Difficulty diff) const;

    MCAPI float getUncertaintyBase() const;

    MCAPI float getUncertaintyMultiplier() const;

    MCAPI void handleMovementGravity(::Actor& owner);

    MCAPI void handleMovementHoming(::Actor& owner);

    MCAPI void hurt(::Actor& owner, ::ActorDamageSource const& damageSource);

    MCAPI int incrementFlightTime();

    MCAPI int incrementLife();

    MCAPI int incrementOnGroundTime();

    MCAPI void initFromDefinition(::Actor& owner);

    MCAPI void lerpMotion(::Actor& owner, ::Vec3 const& delta);

    MCAPI void onHit(::Actor& owner, ::HitResult const& res);

    MCAPI ::ProjectileComponent& operator=(::ProjectileComponent&&);

    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void setActiveTarget(::Actor const& owner, ::Actor* target);

    MCAPI void setCatchFire(bool catchFire);

    MCAPI void setChanneling(bool channeling);

    MCAPI void setEnchantImpaler(int const& level);

    MCAPI void setGravity(float gravity);

    MCAPI void setHitSound(::SharedTypes::Legacy::LevelSoundEvent hitSound);

    MCAPI void setKnockbackForce(float force);

    MCFOLD void setNoPhysics(bool value);

    MCFOLD void setOwnerId(::ActorUniqueID id);

    MCAPI void setPotionEffect(int potionEffect);

    MCAPI void setShouldBounce(bool bounce);

    MCAPI void setSplashRange(float range);

    MCAPI void setStopOnHurt(bool stopOnHurt);

    MCAPI void shoot(::Actor& owner, ::Actor& shooter);

    MCAPI void
    shoot(::Actor& owner, ::Vec3 const& dir, float pow, float uncertainty, ::Vec3 const& baseSpeed, ::Actor* target);

    MCAPI ~ProjectileComponent();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint const& DELAY_ON_HIT();
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
