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
public:
    /**
     * @hash   51746960
     * @symbol  ??0ProjectileComponent\@\@QEAA\@XZ
     */
    MCAPI ProjectileComponent();
    /**
     * @hash   493346161
     * @symbol  ??0ProjectileComponent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ProjectileComponent(class ProjectileComponent const &);
    /**
     * @hash   470136376
     * @symbol  ?addAdditionalSaveData\@ProjectileComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   1652432962
     * @symbol  ?getAnchor\@ProjectileComponent\@\@QEAA?AW4ProjectileAnchor\@\@XZ
     */
    MCAPI enum class ProjectileAnchor getAnchor();
    /**
     * @hash   -1196262264
     * @symbol  ?getCatchFire\@ProjectileComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCatchFire() const;
    /**
     * @hash   -1820104904
     * @symbol  ?getEnchantChanneling\@ProjectileComponent\@\@QEBA_NXZ
     */
    MCAPI bool getEnchantChanneling() const;
    /**
     * @hash   -885017898
     * @symbol  ?getGravity\@ProjectileComponent\@\@QEAAMXZ
     */
    MCAPI float getGravity();
    /**
     * @hash   -342444168
     * @symbol  ?getIsDangerous\@ProjectileComponent\@\@QEAA_NXZ
     */
    MCAPI bool getIsDangerous();
    /**
     * @hash   -1762117950
     * @symbol  ?getKnockbackForce\@ProjectileComponent\@\@QEBAMXZ
     */
    MCAPI float getKnockbackForce() const;
    /**
     * @hash   -515532072
     * @symbol  ?getNoPhysics\@ProjectileComponent\@\@QEBA_NXZ
     */
    MCAPI bool getNoPhysics() const;
    /**
     * @hash   -982438650
     * @symbol  ?getOffset\@ProjectileComponent\@\@QEAA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getOffset();
    /**
     * @hash   -1912529286
     * @symbol  ?getShootSound\@ProjectileComponent\@\@QEAA?AW4LevelSoundEvent\@\@XZ
     */
    MCAPI enum class LevelSoundEvent getShootSound();
    /**
     * @hash   539013832
     * @symbol  ?getShootTarget\@ProjectileComponent\@\@QEAA_NXZ
     */
    MCAPI bool getShootTarget();
    /**
     * @hash   856439761
     * @symbol  ?getShooterAngle\@ProjectileComponent\@\@QEBA?AVVec3\@\@AEAVActor\@\@\@Z
     */
    MCAPI class Vec3 getShooterAngle(class Actor &) const;
    /**
     * @hash   -1633914032
     * @symbol  ?getThrowPower\@ProjectileComponent\@\@QEBAMXZ
     */
    MCAPI float getThrowPower() const;
    /**
     * @hash   -642077703
     * @symbol  ?getUncertainty\@ProjectileComponent\@\@QEBAMW4Difficulty\@\@\@Z
     */
    MCAPI float getUncertainty(enum class Difficulty) const;
    /**
     * @hash   1257985750
     * @symbol  ?getUncertaintyBase\@ProjectileComponent\@\@QEBAMXZ
     */
    MCAPI float getUncertaintyBase() const;
    /**
     * @hash   786167174
     * @symbol  ?getUncertaintyMultiplier\@ProjectileComponent\@\@QEBAMXZ
     */
    MCAPI float getUncertaintyMultiplier() const;
    /**
     * @hash   1351155532
     * @symbol  ?handleMovementGravity\@ProjectileComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void handleMovementGravity(class Actor &);
    /**
     * @hash   1335833094
     * @symbol  ?handleMovementHoming\@ProjectileComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void handleMovementHoming(class Actor &);
    /**
     * @hash   137730289
     * @symbol  ?hurt\@ProjectileComponent\@\@QEAAXAEAVActor\@\@AEBVActorDamageSource\@\@\@Z
     */
    MCAPI void hurt(class Actor &, class ActorDamageSource const &);
    /**
     * @hash   -1671952734
     * @symbol  ?incrementFlightTime\@ProjectileComponent\@\@QEAAHXZ
     */
    MCAPI int incrementFlightTime();
    /**
     * @hash   -2091254416
     * @symbol  ?incrementLife\@ProjectileComponent\@\@QEAAHXZ
     */
    MCAPI int incrementLife();
    /**
     * @hash   -1517271250
     * @symbol  ?incrementOnGroundTime\@ProjectileComponent\@\@QEAAHXZ
     */
    MCAPI int incrementOnGroundTime();
    /**
     * @hash   178303426
     * @symbol  ?initFromDefinition\@ProjectileComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   -1936383779
     * @symbol  ?lerpMotion\@ProjectileComponent\@\@QEAAXAEAVActor\@\@AEBVVec3\@\@\@Z
     */
    MCAPI void lerpMotion(class Actor &, class Vec3 const &);
    /**
     * @hash   1943427019
     * @symbol  ?onHit\@ProjectileComponent\@\@QEAAXAEAVActor\@\@AEBVHitResult\@\@\@Z
     */
    MCAPI void onHit(class Actor &, class HitResult const &);
    /**
     * @hash   -2079163380
     * @symbol  ??4ProjectileComponent\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ProjectileComponent & operator=(class ProjectileComponent const &);
    /**
     * @hash   1267618232
     * @symbol  ?readAdditionalSaveData\@ProjectileComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1215329987
     * @symbol  ?setActiveTarget\@ProjectileComponent\@\@QEAAXAEAVActor\@\@PEAV2\@\@Z
     */
    MCAPI void setActiveTarget(class Actor &, class Actor *);
    /**
     * @hash   -940613641
     * @symbol  ?setChanneling\@ProjectileComponent\@\@QEAAXXZ
     */
    MCAPI void setChanneling();
    /**
     * @hash   157561225
     * @symbol  ?setEnchantImpaler\@ProjectileComponent\@\@QEAAXAEBH\@Z
     */
    MCAPI void setEnchantImpaler(int const &);
    /**
     * @hash   881899872
     * @symbol  ?setKnockbackForce\@ProjectileComponent\@\@QEAAXM\@Z
     */
    MCAPI void setKnockbackForce(float);
    /**
     * @hash   -239443404
     * @symbol  ?setNoPhysics\@ProjectileComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setNoPhysics(bool);
    /**
     * @hash   118540808
     * @symbol  ?setOwnerId\@ProjectileComponent\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void setOwnerId(struct ActorUniqueID);
    /**
     * @hash   -1943108470
     * @symbol  ?setPotionEffect\@ProjectileComponent\@\@QEAAXH\@Z
     */
    MCAPI void setPotionEffect(int);
    /**
     * @hash   -99540562
     * @symbol  ?setSplashRange\@ProjectileComponent\@\@QEAAXM\@Z
     */
    MCAPI void setSplashRange(float);
    /**
     * @hash   -1841080185
     * @symbol  ?shoot\@ProjectileComponent\@\@QEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void shoot(class Actor &, class Actor &);
    /**
     * @hash   996299425
     * @symbol  ?shoot\@ProjectileComponent\@\@QEAAXAEAVActor\@\@AEBVVec3\@\@MM1PEAV2\@\@Z
     */
    MCAPI void shoot(class Actor &, class Vec3 const &, float, float, class Vec3 const &, class Actor *);
    /**
     * @hash   -10019904
     * @symbol  ??1ProjectileComponent\@\@QEAA\@XZ
     */
    MCAPI ~ProjectileComponent();
    /**
     * @hash   -966365979
     * @symbol  ?DELAY_ON_HIT\@ProjectileComponent\@\@2IB
     */
    MCAPI static unsigned int const DELAY_ON_HIT;

//private:
    /**
     * @hash   -1112388066
     * @symbol  ?_handleLightningOnHit\@ProjectileComponent\@\@AEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _handleLightningOnHit(class Actor &);
    /**
     * @hash   -1085494133
     * @symbol  ?_selectNextMoveDirection\@ProjectileComponent\@\@AEAAXAEAVActor\@\@W4EAxis\@1\@\@Z
     */
    MCAPI void _selectNextMoveDirection(class Actor &, enum class ProjectileComponent::EAxis);

private:

};