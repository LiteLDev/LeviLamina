#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Difficulty.h"
#include "mc/enums/ProjectileAnchor.h"
#include "mc/events/LevelSoundEvent.h"

class ProjectileComponent {
public:
    // ProjectileComponent inner types define
    enum class EAxis {};

public:
    // prevent constructor by default
    ProjectileComponent& operator=(ProjectileComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ProjectileComponent@@QEAA@XZ
    MCAPI ProjectileComponent();

    // symbol: ??0ProjectileComponent@@QEAA@$$QEAV0@@Z
    MCAPI ProjectileComponent(class ProjectileComponent&&);

    // symbol: ??0ProjectileComponent@@QEAA@AEBV0@@Z
    MCAPI ProjectileComponent(class ProjectileComponent const&);

    // symbol: ?addAdditionalSaveData@ProjectileComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ?getAnchor@ProjectileComponent@@QEAA?AW4ProjectileAnchor@@XZ
    MCAPI ::ProjectileAnchor getAnchor();

    // symbol: ?getCatchFire@ProjectileComponent@@QEBA_NXZ
    MCAPI bool getCatchFire() const;

    // symbol: ?getEnchantChanneling@ProjectileComponent@@QEBA_NXZ
    MCAPI bool getEnchantChanneling() const;

    // symbol: ?getGravity@ProjectileComponent@@QEBAMXZ
    MCAPI float getGravity() const;

    // symbol: ?getIsDangerous@ProjectileComponent@@QEAA_NXZ
    MCAPI bool getIsDangerous();

    // symbol: ?getKnockbackForce@ProjectileComponent@@QEBAMXZ
    MCAPI float getKnockbackForce() const;

    // symbol: ?getNoPhysics@ProjectileComponent@@QEBA_NXZ
    MCAPI bool getNoPhysics() const;

    // symbol: ?getOffset@ProjectileComponent@@QEAA?AVVec3@@XZ
    MCAPI class Vec3 getOffset();

    // symbol: ?getShootSound@ProjectileComponent@@QEAA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    MCAPI ::Puv::Legacy::LevelSoundEvent getShootSound();

    // symbol: ?getShootTarget@ProjectileComponent@@QEAA_NXZ
    MCAPI bool getShootTarget();

    // symbol: ?getShooterAngle@ProjectileComponent@@QEBA?AVVec3@@AEAVActor@@@Z
    MCAPI class Vec3 getShooterAngle(class Actor& shooter) const;

    // symbol: ?getShouldBounce@ProjectileComponent@@QEBA_NXZ
    MCAPI bool getShouldBounce() const;

    // symbol: ?getStopOnHurt@ProjectileComponent@@QEBA_NXZ
    MCAPI bool getStopOnHurt() const;

    // symbol: ?getThrowPower@ProjectileComponent@@QEBAMXZ
    MCAPI float getThrowPower() const;

    // symbol: ?getUncertainty@ProjectileComponent@@QEBAMW4Difficulty@@@Z
    MCAPI float getUncertainty(::Difficulty diff) const;

    // symbol: ?getUncertaintyBase@ProjectileComponent@@QEBAMXZ
    MCAPI float getUncertaintyBase() const;

    // symbol: ?getUncertaintyMultiplier@ProjectileComponent@@QEBAMXZ
    MCAPI float getUncertaintyMultiplier() const;

    // symbol: ?handleMovementGravity@ProjectileComponent@@QEAAXAEAVActor@@@Z
    MCAPI void handleMovementGravity(class Actor& owner);

    // symbol: ?handleMovementHoming@ProjectileComponent@@QEAAXAEAVActor@@@Z
    MCAPI void handleMovementHoming(class Actor& owner);

    // symbol: ?hurt@ProjectileComponent@@QEAAXAEAVActor@@AEBVActorDamageSource@@@Z
    MCAPI void hurt(class Actor& owner, class ActorDamageSource const& damageSource);

    // symbol: ?incrementFlightTime@ProjectileComponent@@QEAAHXZ
    MCAPI int incrementFlightTime();

    // symbol: ?incrementLife@ProjectileComponent@@QEAAHXZ
    MCAPI int incrementLife();

    // symbol: ?incrementOnGroundTime@ProjectileComponent@@QEAAHXZ
    MCAPI int incrementOnGroundTime();

    // symbol: ?initFromDefinition@ProjectileComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initFromDefinition(class Actor& owner);

    // symbol: ?lerpMotion@ProjectileComponent@@QEAAXAEAVActor@@AEBVVec3@@@Z
    MCAPI void lerpMotion(class Actor& owner, class Vec3 const& delta);

    // symbol: ?onHit@ProjectileComponent@@QEAAXAEAVActor@@AEBVHitResult@@@Z
    MCAPI void onHit(class Actor& owner, class HitResult const& res);

    // symbol: ??4ProjectileComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class ProjectileComponent& operator=(class ProjectileComponent&&);

    // symbol: ?readAdditionalSaveData@ProjectileComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?setActiveTarget@ProjectileComponent@@QEAAXAEBVActor@@PEAV2@@Z
    MCAPI void setActiveTarget(class Actor const& owner, class Actor* target);

    // symbol: ?setCatchFire@ProjectileComponent@@QEAAX_N@Z
    MCAPI void setCatchFire(bool);

    // symbol: ?setChanneling@ProjectileComponent@@QEAAX_N@Z
    MCAPI void setChanneling(bool);

    // symbol: ?setEnchantImpaler@ProjectileComponent@@QEAAXAEBH@Z
    MCAPI void setEnchantImpaler(int const& level);

    // symbol: ?setGravity@ProjectileComponent@@QEAAXM@Z
    MCAPI void setGravity(float);

    // symbol: ?setHitSound@ProjectileComponent@@QEAAXW4LevelSoundEvent@Legacy@Puv@@@Z
    MCAPI void setHitSound(::Puv::Legacy::LevelSoundEvent);

    // symbol: ?setKnockbackForce@ProjectileComponent@@QEAAXM@Z
    MCAPI void setKnockbackForce(float force);

    // symbol: ?setNoPhysics@ProjectileComponent@@QEAAX_N@Z
    MCAPI void setNoPhysics(bool value);

    // symbol: ?setOwnerId@ProjectileComponent@@QEAAXUActorUniqueID@@@Z
    MCAPI void setOwnerId(struct ActorUniqueID id);

    // symbol: ?setPotionEffect@ProjectileComponent@@QEAAXH@Z
    MCAPI void setPotionEffect(int potionEffect);

    // symbol: ?setShouldBounce@ProjectileComponent@@QEAAX_N@Z
    MCAPI void setShouldBounce(bool bounce);

    // symbol: ?setSplashRange@ProjectileComponent@@QEAAXM@Z
    MCAPI void setSplashRange(float range);

    // symbol: ?setStopOnHurt@ProjectileComponent@@QEAAX_N@Z
    MCAPI void setStopOnHurt(bool);

    // symbol: ?shoot@ProjectileComponent@@QEAAXAEAVActor@@0@Z
    MCAPI void shoot(class Actor& owner, class Actor& shooter);

    // symbol: ?shoot@ProjectileComponent@@QEAAXAEAVActor@@AEBVVec3@@MM1PEAV2@@Z
    MCAPI void shoot(
        class Actor&      owner,
        class Vec3 const& dir,
        float             pow,
        float             uncertainty,
        class Vec3 const& baseSpeed,
        class Actor*      target
    );

    // symbol: ??1ProjectileComponent@@QEAA@XZ
    MCAPI ~ProjectileComponent();

    // symbol: ?dampenShooterAngle@ProjectileComponent@@SA?AVVec2@@AEBV2@MAEBVBaseGameVersion@@@Z
    MCAPI static class Vec2 dampenShooterAngle(class Vec2 const&, float, class BaseGameVersion const&);

    // symbol: ?DELAY_ON_HIT@ProjectileComponent@@2IB
    MCAPI static uint const DELAY_ON_HIT;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_handleLightningOnHit@ProjectileComponent@@AEAAXAEAVActor@@@Z
    MCAPI void _handleLightningOnHit(class Actor& owner);

    // symbol: ?_selectNextMoveDirection@ProjectileComponent@@AEAAXAEBVActor@@W4EAxis@1@@Z
    MCAPI void _selectNextMoveDirection(class Actor const& owner, ::ProjectileComponent::EAxis avoidAxis);

    // NOLINTEND
};
