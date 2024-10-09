#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/Difficulty.h"
#include "mc/world/actor/projectile/ProjectileAnchor.h"

class ProjectileComponent {
public:
    // ProjectileComponent inner types define
    enum class EAxis {};

public:
    // prevent constructor by default
    ProjectileComponent& operator=(ProjectileComponent const&);

public:
    // NOLINTBEGIN
    MCAPI ProjectileComponent();

    MCAPI ProjectileComponent(class ProjectileComponent&&);

    MCAPI ProjectileComponent(class ProjectileComponent const&);

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI ::ProjectileAnchor getAnchor();

    MCAPI bool getCatchFire() const;

    MCAPI bool getEnchantChanneling() const;

    MCAPI float getGravity() const;

    MCAPI bool getIsDangerous();

    MCAPI float getKnockbackForce() const;

    MCAPI bool getNoPhysics() const;

    MCAPI class Vec3 getOffset();

    MCAPI ::Puv::Legacy::LevelSoundEvent getShootSound();

    MCAPI bool getShootTarget();

    MCAPI class Vec3 getShooterAngle(class Actor& shooter) const;

    MCAPI bool getShouldBounce() const;

    MCAPI bool getStopOnHurt() const;

    MCAPI float getThrowPower() const;

    MCAPI float getUncertainty(::Difficulty diff) const;

    MCAPI float getUncertaintyBase() const;

    MCAPI float getUncertaintyMultiplier() const;

    MCAPI void handleMovementGravity(class Actor& owner);

    MCAPI void handleMovementHoming(class Actor& owner);

    MCAPI void hurt(class Actor& owner, class ActorDamageSource const& damageSource);

    MCAPI int incrementFlightTime();

    MCAPI int incrementLife();

    MCAPI int incrementOnGroundTime();

    MCAPI void initFromDefinition(class Actor& owner);

    MCAPI void lerpMotion(class Actor& owner, class Vec3 const& delta);

    MCAPI void onHit(class Actor& owner, class HitResult const& res);

    MCAPI class ProjectileComponent& operator=(class ProjectileComponent&&);

    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void setActiveTarget(class Actor const& owner, class Actor* target);

    MCAPI void setCatchFire(bool catchFire);

    MCAPI void setChanneling(bool channeling);

    MCAPI void setEnchantImpaler(int const& level);

    MCAPI void setGravity(float gravity);

    MCAPI void setHitSound(::Puv::Legacy::LevelSoundEvent hitSound);

    MCAPI void setKnockbackForce(float force);

    MCAPI void setNoPhysics(bool value);

    MCAPI void setOwnerId(struct ActorUniqueID id);

    MCAPI void setPotionEffect(int potionEffect);

    MCAPI void setShouldBounce(bool bounce);

    MCAPI void setSplashRange(float range);

    MCAPI void setStopOnHurt(bool stopOnHurt);

    MCAPI void shoot(class Actor& owner, class Actor& shooter);

    MCAPI void shoot(
        class Actor&      owner,
        class Vec3 const& dir,
        float             pow,
        float             uncertainty,
        class Vec3 const& baseSpeed,
        class Actor*      target
    );

    MCAPI ~ProjectileComponent();

    MCAPI static class Vec2
    dampenShooterAngle(class Vec2 const& angle, float angleOffset, class BaseGameVersion const& currVer);

    MCAPI static uint const DELAY_ON_HIT;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _handleLightningOnHit(class Actor& owner);

    MCAPI void _selectNextMoveDirection(class Actor const& owner, ::ProjectileComponent::EAxis avoidAxis);

    MCAPI bool _tryReflect(class Actor& owner, class Level& level);

    // NOLINTEND
};
