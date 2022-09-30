/**
 * @file  ProjectileComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
public:
    /**
     * @hash   984424368
     * @symbol ??0ProjectileComponent@@QEAA@XZ
     */
    MCAPI ProjectileComponent();
    /**
     * @hash   73812001
     * @symbol ??0ProjectileComponent@@QEAA@AEBV0@@Z
     */
    MCAPI ProjectileComponent(class ProjectileComponent const &);
    /**
     * @hash   1402475512
     * @symbol ?addAdditionalSaveData@ProjectileComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   1780104482
     * @symbol ?getAnchor@ProjectileComponent@@QEAA?AW4ProjectileAnchor@@XZ
     */
    MCAPI enum class ProjectileAnchor getAnchor();
    /**
     * @hash   -265153208
     * @symbol ?getCatchFire@ProjectileComponent@@QEBA_NXZ
     */
    MCAPI bool getCatchFire() const;
    /**
     * @hash   -888995848
     * @symbol ?getEnchantChanneling@ProjectileComponent@@QEBA_NXZ
     */
    MCAPI bool getEnchantChanneling() const;
    /**
     * @hash   46091158
     * @symbol ?getGravity@ProjectileComponent@@QEAAMXZ
     */
    MCAPI float getGravity();
    /**
     * @hash   588664888
     * @symbol ?getIsDangerous@ProjectileComponent@@QEAA_NXZ
     */
    MCAPI bool getIsDangerous();
    /**
     * @hash   -831008894
     * @symbol ?getKnockbackForce@ProjectileComponent@@QEBAMXZ
     */
    MCAPI float getKnockbackForce() const;
    /**
     * @hash   -647473528
     * @symbol ?getNoPhysics@ProjectileComponent@@QEBA_NXZ
     */
    MCAPI bool getNoPhysics() const;
    /**
     * @hash   -51329594
     * @symbol ?getOffset@ProjectileComponent@@QEAA?AVVec3@@XZ
     */
    MCAPI class Vec3 getOffset();
    /**
     * @hash   -981420230
     * @symbol ?getShootSound@ProjectileComponent@@QEAA?AW4LevelSoundEvent@@XZ
     */
    MCAPI enum class LevelSoundEvent getShootSound();
    /**
     * @hash   1470122888
     * @symbol ?getShootTarget@ProjectileComponent@@QEAA_NXZ
     */
    MCAPI bool getShootTarget();
    /**
     * @hash   1787548817
     * @symbol ?getShooterAngle@ProjectileComponent@@QEBA?AVVec3@@AEAVActor@@@Z
     */
    MCAPI class Vec3 getShooterAngle(class Actor &) const;
    /**
     * @hash   -702820352
     * @symbol ?getThrowPower@ProjectileComponent@@QEBAMXZ
     */
    MCAPI float getThrowPower() const;
    /**
     * @hash   289015977
     * @symbol ?getUncertainty@ProjectileComponent@@QEBAMW4Difficulty@@@Z
     */
    MCAPI float getUncertainty(enum class Difficulty) const;
    /**
     * @hash   -2105887866
     * @symbol ?getUncertaintyBase@ProjectileComponent@@QEBAMXZ
     */
    MCAPI float getUncertaintyBase() const;
    /**
     * @hash   1717260854
     * @symbol ?getUncertaintyMultiplier@ProjectileComponent@@QEBAMXZ
     */
    MCAPI float getUncertaintyMultiplier() const;
    /**
     * @hash   -2012718084
     * @symbol ?handleMovementGravity@ProjectileComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void handleMovementGravity(class Actor &);
    /**
     * @hash   -2028086650
     * @symbol ?handleMovementHoming@ProjectileComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void handleMovementHoming(class Actor &);
    /**
     * @hash   1068716337
     * @symbol ?hurt@ProjectileComponent@@QEAAXAEAVActor@@AEBVActorDamageSource@@@Z
     */
    MCAPI void hurt(class Actor &, class ActorDamageSource const &);
    /**
     * @hash   -741043566
     * @symbol ?incrementFlightTime@ProjectileComponent@@QEAAHXZ
     */
    MCAPI int incrementFlightTime();
    /**
     * @hash   -1160345248
     * @symbol ?incrementLife@ProjectileComponent@@QEAAHXZ
     */
    MCAPI int incrementLife();
    /**
     * @hash   -586362082
     * @symbol ?incrementOnGroundTime@ProjectileComponent@@QEAAHXZ
     */
    MCAPI int incrementOnGroundTime();
    /**
     * @hash   1109212594
     * @symbol ?initFromDefinition@ProjectileComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   -1005505363
     * @symbol ?lerpMotion@ProjectileComponent@@QEAAXAEAVActor@@AEBVVec3@@@Z
     */
    MCAPI void lerpMotion(class Actor &, class Vec3 const &);
    /**
     * @hash   -1420723365
     * @symbol ?onHit@ProjectileComponent@@QEAAXAEAVActor@@AEBVHitResult@@@Z
     */
    MCAPI void onHit(class Actor &, class HitResult const &);
    /**
     * @hash   1796823292
     * @symbol ??4ProjectileComponent@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class ProjectileComponent & operator=(class ProjectileComponent const &);
    /**
     * @hash   -2096655160
     * @symbol ?readAdditionalSaveData@ProjectileComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   2146008515
     * @symbol ?setActiveTarget@ProjectileComponent@@QEAAXAEAVActor@@PEAV2@@Z
     */
    MCAPI void setActiveTarget(class Actor &, class Actor *);
    /**
     * @hash   -9935113
     * @symbol ?setChanneling@ProjectileComponent@@QEAAXXZ
     */
    MCAPI void setChanneling();
    /**
     * @hash   1088239753
     * @symbol ?setEnchantImpaler@ProjectileComponent@@QEAAXAEBH@Z
     */
    MCAPI void setEnchantImpaler(int const &);
    /**
     * @hash   1812578400
     * @symbol ?setKnockbackForce@ProjectileComponent@@QEAAXM@Z
     */
    MCAPI void setKnockbackForce(float);
    /**
     * @hash   -371338732
     * @symbol ?setNoPhysics@ProjectileComponent@@QEAAX_N@Z
     */
    MCAPI void setNoPhysics(bool);
    /**
     * @hash   1049219336
     * @symbol ?setOwnerId@ProjectileComponent@@QEAAXUActorUniqueID@@@Z
     */
    MCAPI void setOwnerId(struct ActorUniqueID);
    /**
     * @hash   -1012429942
     * @symbol ?setPotionEffect@ProjectileComponent@@QEAAXH@Z
     */
    MCAPI void setPotionEffect(int);
    /**
     * @hash   831137966
     * @symbol ?setSplashRange@ProjectileComponent@@QEAAXM@Z
     */
    MCAPI void setSplashRange(float);
    /**
     * @hash   -910401657
     * @symbol ?shoot@ProjectileComponent@@QEAAXAEAVActor@@0@Z
     */
    MCAPI void shoot(class Actor &, class Actor &);
    /**
     * @hash   1926931825
     * @symbol ?shoot@ProjectileComponent@@QEAAXAEAVActor@@AEBVVec3@@MM1PEAV2@@Z
     */
    MCAPI void shoot(class Actor &, class Vec3 const &, float, float, class Vec3 const &, class Actor *);
    /**
     * @hash   -429246544
     * @symbol ??1ProjectileComponent@@QEAA@XZ
     */
    MCAPI ~ProjectileComponent();
    /**
     * @hash   -1932678387
     * @symbol ?DELAY_ON_HIT@ProjectileComponent@@2IB
     */
    MCAPI static unsigned int const DELAY_ON_HIT;

//private:
    /**
     * @hash   -179695282
     * @symbol ?_handleLightningOnHit@ProjectileComponent@@AEAAXAEAVActor@@@Z
     */
    MCAPI void _handleLightningOnHit(class Actor &);
    /**
     * @hash   -153016613
     * @symbol ?_selectNextMoveDirection@ProjectileComponent@@AEAAXAEAVActor@@W4EAxis@1@@Z
     */
    MCAPI void _selectNextMoveDirection(class Actor &, enum class ProjectileComponent::EAxis);

private:

};