/**
 * @file  WitherBoss.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WitherBoss.
 *
 */
class WitherBoss : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WITHERBOSS
public:
    class WitherBoss& operator=(class WitherBoss const &) = delete;
    WitherBoss(class WitherBoss const &) = delete;
    WitherBoss() = delete;
#endif

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@WitherBoss\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 11
     * @symbol ?reloadHardcodedClient\@WitherBoss\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 19
     * @symbol ?remove\@WitherBoss\@\@UEAAXXZ
     */
    virtual void remove();
    /**
     * @vftbl 27
     * @symbol ?getFiringPos\@WitherBoss\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getFiringPos() const;
    /**
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl 53
     * @symbol ?startRiding\@WitherBoss\@\@UEAA_NAEAVActor\@\@\@Z
     */
    virtual bool startRiding(class Actor &);
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 69
     * @symbol __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @vftbl 76
     * @symbol ?setBlockMovementSlowdownMultiplier\@WitherBoss\@\@UEAAXAEBVBlockLegacy\@\@AEBVVec3\@\@\@Z
     */
    virtual void setBlockMovementSlowdownMultiplier(class BlockLegacy const &, class Vec3 const &);
    /**
     * @vftbl 82
     * @symbol __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl 85
     * @symbol __unk_vfn_85
     */
    virtual void __unk_vfn_85();
    /**
     * @vftbl 88
     * @symbol __unk_vfn_88
     */
    virtual void __unk_vfn_88();
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl 99
     * @symbol __unk_vfn_99
     */
    virtual void __unk_vfn_99();
    /**
     * @vftbl 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl 108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl 109
     * @symbol __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl 111
     * @symbol __unk_vfn_111
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl 134
     * @symbol ?isInvulnerableTo\@WitherBoss\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl 141
     * @symbol ?handleEntityEvent\@WitherBoss\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 171
     * @symbol ?canFreeze\@WitherBoss\@\@UEBA_NXZ
     */
    virtual bool canFreeze() const;
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 182
     * @symbol ?causeFallDamage\@WitherBoss\@\@UEAAXMMVActorDamageSource\@\@\@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @vftbl 192
     * @symbol __unk_vfn_192
     */
    virtual void __unk_vfn_192();
    /**
     * @vftbl 207
     * @symbol ?canBeAffected\@WitherBoss\@\@UEBA_NI\@Z
     */
    virtual bool canBeAffected(unsigned int) const;
    /**
     * @vftbl 208
     * @symbol ?canBeAffectedByArrow\@WitherBoss\@\@UEBA_NAEBVMobEffectInstance\@\@\@Z
     */
    virtual bool canBeAffectedByArrow(class MobEffectInstance const &) const;
    /**
     * @vftbl 217
     * @symbol __unk_vfn_217
     */
    virtual void __unk_vfn_217();
    /**
     * @vftbl 218
     * @symbol __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl 240
     * @symbol __unk_vfn_240
     */
    virtual void __unk_vfn_240();
    /**
     * @vftbl 243
     * @symbol __unk_vfn_243
     */
    virtual void __unk_vfn_243();
    /**
     * @vftbl 245
     * @symbol ?die\@WitherBoss\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 261
     * @symbol ?_hurt\@WitherBoss\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 264
     * @symbol ?readAdditionalSaveData\@WitherBoss\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 265
     * @symbol ?addAdditionalSaveData\@WitherBoss\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 268
     * @symbol __unk_vfn_268
     */
    virtual void __unk_vfn_268();
    /**
     * @vftbl 275
     * @symbol __unk_vfn_275
     */
    virtual void __unk_vfn_275();
    /**
     * @vftbl 283
     * @symbol ?hurtEffects\@WitherBoss\@\@UEAAXAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual void hurtEffects(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 288
     * @symbol ?aiStep\@WitherBoss\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl 301
     * @symbol __unk_vfn_301
     */
    virtual void __unk_vfn_301();
    /**
     * @vftbl 305
     * @symbol __unk_vfn_305
     */
    virtual void __unk_vfn_305();
    /**
     * @vftbl 310
     * @symbol ?getArmorValue\@WitherBoss\@\@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl 346
     * @symbol ?newServerAiStep\@WitherBoss\@\@UEAAXXZ
     */
    virtual void newServerAiStep();
    /**
     * @vftbl 351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @symbol ??0WitherBoss\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI WitherBoss(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?awardSpawnWitherAchievement\@WitherBoss\@\@QEBAXXZ
     */
    MCAPI void awardSpawnWitherAchievement() const;
    /**
     * @symbol ?getHeadPos\@WitherBoss\@\@QEBA?AVVec3\@\@H\@Z
     */
    MCAPI class Vec3 getHeadPos(int) const;
    /**
     * @symbol ?getHeadRot\@WitherBoss\@\@QEAA?AVVec2\@\@H\@Z
     */
    MCAPI class Vec2 getHeadRot(int);
    /**
     * @symbol ?getInvulnerableTicks\@WitherBoss\@\@QEBAHXZ
     */
    MCAPI int getInvulnerableTicks() const;
    /**
     * @symbol ?getOverlayAlpha\@WitherBoss\@\@QEAAMXZ
     */
    MCAPI float getOverlayAlpha();
    /**
     * @symbol ?getSwellAmount\@WitherBoss\@\@QEBAMM\@Z
     */
    MCAPI float getSwellAmount(float) const;
    /**
     * @symbol ?hasAerialAttack\@WitherBoss\@\@QEBA_NXZ
     */
    MCAPI bool hasAerialAttack() const;
    /**
     * @symbol ?postAiStep\@WitherBoss\@\@QEAAXXZ
     */
    MCAPI void postAiStep();
    /**
     * @symbol ?preAiStep\@WitherBoss\@\@QEAA?AW4WitherBossPreAIStepResult\@\@XZ
     */
    MCAPI enum class WitherBossPreAIStepResult preAiStep();
    /**
     * @symbol ?removeSkeleton\@WitherBoss\@\@QEAAXXZ
     */
    MCAPI void removeSkeleton();
    /**
     * @symbol ?setAerialAttack\@WitherBoss\@\@QEAAX_N\@Z
     */
    MCAPI void setAerialAttack(bool);
    /**
     * @symbol ?setAlternativeTarget\@WitherBoss\@\@QEAAXHUActorUniqueID\@\@\@Z
     */
    MCAPI void setAlternativeTarget(int, struct ActorUniqueID);
    /**
     * @symbol ?setIsPathing\@WitherBoss\@\@QEAAX_N\@Z
     */
    MCAPI void setIsPathing(bool);
    /**
     * @symbol ?setShotDelay\@WitherBoss\@\@QEAAXH\@Z
     */
    MCAPI void setShotDelay(int);
    /**
     * @symbol ?setWantsToMove\@WitherBoss\@\@QEAAX_N\@Z
     */
    MCAPI void setWantsToMove(bool);
    /**
     * @symbol ?wantsToMove\@WitherBoss\@\@QEAA_NXZ
     */
    MCAPI bool wantsToMove();
    /**
     * @symbol ?MAX_HEALTH_CAP_UUID\@WitherBoss\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const MAX_HEALTH_CAP_UUID;
    /**
     * @symbol ?canDestroy\@WitherBoss\@\@SA_NAEBVBlock\@\@W4WitherAttackType\@1\@\@Z
     */
    MCAPI static bool canDestroy(class Block const &, enum class WitherBoss::WitherAttackType);

//private:
    /**
     * @symbol ?_destroyBlocks\@WitherBoss\@\@AEAAXAEAVLevel\@\@AEBVAABB\@\@AEAVBlockSource\@\@HW4WitherAttackType\@1\@\@Z
     */
    MCAPI void _destroyBlocks(class Level &, class AABB const &, class BlockSource &, int, enum class WitherBoss::WitherAttackType);
    /**
     * @symbol ?_performRangedAttack\@WitherBoss\@\@AEAAXHAEAVActor\@\@\@Z
     */
    MCAPI void _performRangedAttack(int, class Actor &);
    /**
     * @symbol ?_performRangedAttack\@WitherBoss\@\@AEAAXHAEBVVec3\@\@_N\@Z
     */
    MCAPI void _performRangedAttack(int, class Vec3 const &, bool);
    /**
     * @symbol ?canShoot\@WitherBoss\@\@AEAA_NXZ
     */
    MCAPI bool canShoot();

private:
    /**
     * @symbol ?TIME_BEFORE_MOVING\@WitherBoss\@\@0HB
     */
    MCAPI static int const TIME_BEFORE_MOVING;

};
