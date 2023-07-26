#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ProjectileComponent {
public:
    // ProjectileComponent inner types declare
    // clang-format off

    // clang-format on

    // ProjectileComponent inner types define
    enum class EAxis {};

public:
    // prevent constructor by default
    ProjectileComponent& operator=(ProjectileComponent const&) = delete;

public:
    /**
     * @symbol ??0ProjectileComponent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ProjectileComponent(class ProjectileComponent const&); // NOLINT
    /**
     * @symbol ??0ProjectileComponent\@\@QEAA\@XZ
     */
    MCAPI ProjectileComponent(); // NOLINT
    /**
     * @symbol ??0ProjectileComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ProjectileComponent(class ProjectileComponent&&); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@ProjectileComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?getAnchor\@ProjectileComponent\@\@QEAA?AW4ProjectileAnchor\@\@XZ
     */
    MCAPI enum class ProjectileAnchor getAnchor(); // NOLINT
    /**
     * @symbol ?getCatchFire\@ProjectileComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCatchFire() const; // NOLINT
    /**
     * @symbol ?getEnchantChanneling\@ProjectileComponent\@\@QEBA_NXZ
     */
    MCAPI bool getEnchantChanneling() const; // NOLINT
    /**
     * @symbol ?getGravity\@ProjectileComponent\@\@QEAAMXZ
     */
    MCAPI float getGravity(); // NOLINT
    /**
     * @symbol ?getIsDangerous\@ProjectileComponent\@\@QEAA_NXZ
     */
    MCAPI bool getIsDangerous(); // NOLINT
    /**
     * @symbol ?getKnockbackForce\@ProjectileComponent\@\@QEBAMXZ
     */
    MCAPI float getKnockbackForce() const; // NOLINT
    /**
     * @symbol ?getNoPhysics\@ProjectileComponent\@\@QEBA_NXZ
     */
    MCAPI bool getNoPhysics() const; // NOLINT
    /**
     * @symbol ?getOffset\@ProjectileComponent\@\@QEAA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getOffset(); // NOLINT
    /**
     * @symbol ?getShootSound\@ProjectileComponent\@\@QEAA?AW4LevelSoundEvent\@\@XZ
     */
    MCAPI enum class LevelSoundEvent getShootSound(); // NOLINT
    /**
     * @symbol ?getShootTarget\@ProjectileComponent\@\@QEAA_NXZ
     */
    MCAPI bool getShootTarget(); // NOLINT
    /**
     * @symbol ?getShooterAngle\@ProjectileComponent\@\@QEBA?AVVec3\@\@AEAVActor\@\@\@Z
     */
    MCAPI class Vec3 getShooterAngle(class Actor&) const; // NOLINT
    /**
     * @symbol ?getThrowPower\@ProjectileComponent\@\@QEBAMXZ
     */
    MCAPI float getThrowPower() const; // NOLINT
    /**
     * @symbol ?getUncertainty\@ProjectileComponent\@\@QEBAMW4Difficulty\@\@\@Z
     */
    MCAPI float getUncertainty(enum class Difficulty) const; // NOLINT
    /**
     * @symbol ?getUncertaintyBase\@ProjectileComponent\@\@QEBAMXZ
     */
    MCAPI float getUncertaintyBase() const; // NOLINT
    /**
     * @symbol ?getUncertaintyMultiplier\@ProjectileComponent\@\@QEBAMXZ
     */
    MCAPI float getUncertaintyMultiplier() const; // NOLINT
    /**
     * @symbol ?handleMovementGravity\@ProjectileComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void handleMovementGravity(class Actor&); // NOLINT
    /**
     * @symbol ?handleMovementHoming\@ProjectileComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void handleMovementHoming(class Actor&); // NOLINT
    /**
     * @symbol ?hurt\@ProjectileComponent\@\@QEAAXAEAVActor\@\@AEBVActorDamageSource\@\@\@Z
     */
    MCAPI void hurt(class Actor&, class ActorDamageSource const&); // NOLINT
    /**
     * @symbol ?incrementFlightTime\@ProjectileComponent\@\@QEAAHXZ
     */
    MCAPI int incrementFlightTime(); // NOLINT
    /**
     * @symbol ?incrementLife\@ProjectileComponent\@\@QEAAHXZ
     */
    MCAPI int incrementLife(); // NOLINT
    /**
     * @symbol ?incrementOnGroundTime\@ProjectileComponent\@\@QEAAHXZ
     */
    MCAPI int incrementOnGroundTime(); // NOLINT
    /**
     * @symbol ?initFromDefinition\@ProjectileComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ?lerpMotion\@ProjectileComponent\@\@QEAAXAEAVActor\@\@AEBVVec3\@\@\@Z
     */
    MCAPI void lerpMotion(class Actor&, class Vec3 const&); // NOLINT
    /**
     * @symbol ?onHit\@ProjectileComponent\@\@QEAAXAEAVActor\@\@AEBVHitResult\@\@\@Z
     */
    MCAPI void onHit(class Actor&, class HitResult const&); // NOLINT
    /**
     * @symbol ??4ProjectileComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ProjectileComponent& operator=(class ProjectileComponent&&); // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@ProjectileComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?setActiveTarget\@ProjectileComponent\@\@QEAAXAEAVActor\@\@PEAV2\@\@Z
     */
    MCAPI void setActiveTarget(class Actor&, class Actor*); // NOLINT
    /**
     * @symbol ?setChanneling\@ProjectileComponent\@\@QEAAXXZ
     */
    MCAPI void setChanneling(); // NOLINT
    /**
     * @symbol ?setEnchantImpaler\@ProjectileComponent\@\@QEAAXAEBH\@Z
     */
    MCAPI void setEnchantImpaler(int const&); // NOLINT
    /**
     * @symbol ?setKnockbackForce\@ProjectileComponent\@\@QEAAXM\@Z
     */
    MCAPI void setKnockbackForce(float); // NOLINT
    /**
     * @symbol ?setNoPhysics\@ProjectileComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setNoPhysics(bool); // NOLINT
    /**
     * @symbol ?setOwnerId\@ProjectileComponent\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void setOwnerId(struct ActorUniqueID); // NOLINT
    /**
     * @symbol ?setPotionEffect\@ProjectileComponent\@\@QEAAXH\@Z
     */
    MCAPI void setPotionEffect(int); // NOLINT
    /**
     * @symbol ?setSplashRange\@ProjectileComponent\@\@QEAAXM\@Z
     */
    MCAPI void setSplashRange(float); // NOLINT
    /**
     * @symbol ?shoot\@ProjectileComponent\@\@QEAAXAEAVActor\@\@AEBVVec3\@\@MM1PEAV2\@\@Z
     */
    MCAPI void shoot(class Actor&, class Vec3 const&, float, float, class Vec3 const&, class Actor*); // NOLINT
    /**
     * @symbol ?shoot\@ProjectileComponent\@\@QEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void shoot(class Actor&, class Actor&); // NOLINT
    /**
     * @symbol ??1ProjectileComponent\@\@QEAA\@XZ
     */
    MCAPI ~ProjectileComponent(); // NOLINT
    /**
     * @symbol ?DELAY_ON_HIT\@ProjectileComponent\@\@2IB
     */
    MCAPI static unsigned int const DELAY_ON_HIT; // NOLINT

    // private:
    /**
     * @symbol ?_handleLightningOnHit\@ProjectileComponent\@\@AEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _handleLightningOnHit(class Actor&); // NOLINT
    /**
     * @symbol ?_selectNextMoveDirection\@ProjectileComponent\@\@AEAAXAEAVActor\@\@W4EAxis\@1\@\@Z
     */
    MCAPI void _selectNextMoveDirection(class Actor&, enum class ProjectileComponent::EAxis); // NOLINT

private:
};
