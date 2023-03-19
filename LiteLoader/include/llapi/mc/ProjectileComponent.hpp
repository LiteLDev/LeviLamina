/**
 * @file  ProjectileComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ProjectileComponent.
 *
 */
class ProjectileComponent {

#define AFTER_EXTRA
// Add Member There
public:
enum class EAxis;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROJECTILECOMPONENT
public:
    class ProjectileComponent& operator=(class ProjectileComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0ProjectileComponent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ProjectileComponent(class ProjectileComponent const &);
    /**
     * @symbol ??0ProjectileComponent\@\@QEAA\@XZ
     */
    MCAPI ProjectileComponent();
    /**
     * @symbol ??0ProjectileComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ProjectileComponent(class ProjectileComponent &&);
    /**
     * @symbol ?addAdditionalSaveData\@ProjectileComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?getAnchor\@ProjectileComponent\@\@QEAA?AW4ProjectileAnchor\@\@XZ
     */
    MCAPI enum class ProjectileAnchor getAnchor();
    /**
     * @symbol ?getCatchFire\@ProjectileComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCatchFire() const;
    /**
     * @symbol ?getEnchantChanneling\@ProjectileComponent\@\@QEBA_NXZ
     */
    MCAPI bool getEnchantChanneling() const;
    /**
     * @symbol ?getGravity\@ProjectileComponent\@\@QEAAMXZ
     */
    MCAPI float getGravity();
    /**
     * @symbol ?getIsDangerous\@ProjectileComponent\@\@QEAA_NXZ
     */
    MCAPI bool getIsDangerous();
    /**
     * @symbol ?getKnockbackForce\@ProjectileComponent\@\@QEBAMXZ
     */
    MCAPI float getKnockbackForce() const;
    /**
     * @symbol ?getNoPhysics\@ProjectileComponent\@\@QEBA_NXZ
     */
    MCAPI bool getNoPhysics() const;
    /**
     * @symbol ?getOffset\@ProjectileComponent\@\@QEAA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getOffset();
    /**
     * @symbol ?getShootSound\@ProjectileComponent\@\@QEAA?AW4LevelSoundEvent\@\@XZ
     */
    MCAPI enum class LevelSoundEvent getShootSound();
    /**
     * @symbol ?getShootTarget\@ProjectileComponent\@\@QEAA_NXZ
     */
    MCAPI bool getShootTarget();
    /**
     * @symbol ?getShooterAngle\@ProjectileComponent\@\@QEBA?AVVec3\@\@AEAVActor\@\@\@Z
     */
    MCAPI class Vec3 getShooterAngle(class Actor &) const;
    /**
     * @symbol ?getThrowPower\@ProjectileComponent\@\@QEBAMXZ
     */
    MCAPI float getThrowPower() const;
    /**
     * @symbol ?getUncertainty\@ProjectileComponent\@\@QEBAMW4Difficulty\@\@\@Z
     */
    MCAPI float getUncertainty(enum class Difficulty) const;
    /**
     * @symbol ?getUncertaintyBase\@ProjectileComponent\@\@QEBAMXZ
     */
    MCAPI float getUncertaintyBase() const;
    /**
     * @symbol ?getUncertaintyMultiplier\@ProjectileComponent\@\@QEBAMXZ
     */
    MCAPI float getUncertaintyMultiplier() const;
    /**
     * @symbol ?handleMovementGravity\@ProjectileComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void handleMovementGravity(class Actor &);
    /**
     * @symbol ?handleMovementHoming\@ProjectileComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void handleMovementHoming(class Actor &);
    /**
     * @symbol ?hurt\@ProjectileComponent\@\@QEAAXAEAVActor\@\@AEBVActorDamageSource\@\@\@Z
     */
    MCAPI void hurt(class Actor &, class ActorDamageSource const &);
    /**
     * @symbol ?incrementFlightTime\@ProjectileComponent\@\@QEAAHXZ
     */
    MCAPI int incrementFlightTime();
    /**
     * @symbol ?incrementLife\@ProjectileComponent\@\@QEAAHXZ
     */
    MCAPI int incrementLife();
    /**
     * @symbol ?incrementOnGroundTime\@ProjectileComponent\@\@QEAAHXZ
     */
    MCAPI int incrementOnGroundTime();
    /**
     * @symbol ?initFromDefinition\@ProjectileComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol ?lerpMotion\@ProjectileComponent\@\@QEAAXAEAVActor\@\@AEBVVec3\@\@\@Z
     */
    MCAPI void lerpMotion(class Actor &, class Vec3 const &);
    /**
     * @symbol ?onHit\@ProjectileComponent\@\@QEAAXAEAVActor\@\@AEBVHitResult\@\@\@Z
     */
    MCAPI void onHit(class Actor &, class HitResult const &);
    /**
     * @symbol ??4ProjectileComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ProjectileComponent & operator=(class ProjectileComponent &&);
    /**
     * @symbol ?readAdditionalSaveData\@ProjectileComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?setActiveTarget\@ProjectileComponent\@\@QEAAXAEAVActor\@\@PEAV2\@\@Z
     */
    MCAPI void setActiveTarget(class Actor &, class Actor *);
    /**
     * @symbol ?setChanneling\@ProjectileComponent\@\@QEAAXXZ
     */
    MCAPI void setChanneling();
    /**
     * @symbol ?setEnchantImpaler\@ProjectileComponent\@\@QEAAXAEBH\@Z
     */
    MCAPI void setEnchantImpaler(int const &);
    /**
     * @symbol ?setKnockbackForce\@ProjectileComponent\@\@QEAAXM\@Z
     */
    MCAPI void setKnockbackForce(float);
    /**
     * @symbol ?setNoPhysics\@ProjectileComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setNoPhysics(bool);
    /**
     * @symbol ?setOwnerId\@ProjectileComponent\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void setOwnerId(struct ActorUniqueID);
    /**
     * @symbol ?setPotionEffect\@ProjectileComponent\@\@QEAAXH\@Z
     */
    MCAPI void setPotionEffect(int);
    /**
     * @symbol ?setSplashRange\@ProjectileComponent\@\@QEAAXM\@Z
     */
    MCAPI void setSplashRange(float);
    /**
     * @symbol ?shoot\@ProjectileComponent\@\@QEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void shoot(class Actor &, class Actor &);
    /**
     * @symbol ?shoot\@ProjectileComponent\@\@QEAAXAEAVActor\@\@AEBVVec3\@\@MM1PEAV2\@\@Z
     */
    MCAPI void shoot(class Actor &, class Vec3 const &, float, float, class Vec3 const &, class Actor *);
    /**
     * @symbol ??1ProjectileComponent\@\@QEAA\@XZ
     */
    MCAPI ~ProjectileComponent();
    /**
     * @symbol ?DELAY_ON_HIT\@ProjectileComponent\@\@2IB
     */
    MCAPI static unsigned int const DELAY_ON_HIT;

//private:
    /**
     * @symbol ?_handleLightningOnHit\@ProjectileComponent\@\@AEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _handleLightningOnHit(class Actor &);
    /**
     * @symbol ?_selectNextMoveDirection\@ProjectileComponent\@\@AEAAXAEAVActor\@\@W4EAxis\@1\@\@Z
     */
    MCAPI void _selectNextMoveDirection(class Actor &, enum class ProjectileComponent::EAxis);

private:

};
