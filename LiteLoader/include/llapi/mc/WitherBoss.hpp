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
     * @hash   1075879069
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@WitherBoss\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   -579726824
     * @vftbl  11
     * @symbol  ?reloadHardcodedClient\@WitherBoss\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~WitherBoss();
    /**
     * @hash   1132128971
     * @vftbl  19
     * @symbol  ?remove\@WitherBoss\@\@UEAAXXZ
     */
    virtual void remove();
    /**
     * @hash   -1542021653
     * @vftbl  27
     * @symbol  ?getFiringPos\@WitherBoss\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getFiringPos() const;
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   -2030898681
     * @vftbl  53
     * @symbol  ?startRiding\@WitherBoss\@\@UEAA_NAEAVActor\@\@\@Z
     */
    virtual bool startRiding(class Actor &);
    /**
     * @vftbl  62
     * @symbol  __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl  69
     * @symbol  __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @hash   1972064820
     * @vftbl  77
     * @symbol  ?setBlockMovementSlowdownMultiplier\@WitherBoss\@\@UEAAXAEBVBlockLegacy\@\@AEBVVec3\@\@\@Z
     */
    virtual void setBlockMovementSlowdownMultiplier(class BlockLegacy const &, class Vec3 const &);
    /**
     * @vftbl  83
     * @symbol  __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl  86
     * @symbol  __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl  89
     * @symbol  __unk_vfn_89
     */
    virtual void __unk_vfn_89();
    /**
     * @vftbl  97
     * @symbol  __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl  100
     * @symbol  __unk_vfn_100
     */
    virtual void __unk_vfn_100();
    /**
     * @vftbl  107
     * @symbol  __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  109
     * @symbol  __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  110
     * @symbol  __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  112
     * @symbol  __unk_vfn_112
     */
    virtual void __unk_vfn_112();
    /**
     * @hash   -1953907922
     * @vftbl  135
     * @symbol  ?isInvulnerableTo\@WitherBoss\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @hash   -439005930
     * @vftbl  142
     * @symbol  ?handleEntityEvent\@WitherBoss\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @hash   2134070079
     * @vftbl  172
     * @symbol  ?canFreeze\@WitherBoss\@\@UEBA_NXZ
     */
    virtual bool canFreeze() const;
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @hash   -1419335662
     * @vftbl  183
     * @symbol  ?causeFallDamage\@WitherBoss\@\@UEAAXMMVActorDamageSource\@\@\@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @hash   -140325719
     * @vftbl  208
     * @symbol  ?canBeAffected\@WitherBoss\@\@UEBA_NI\@Z
     */
    virtual bool canBeAffected(unsigned int) const;
    /**
     * @hash   -1701804306
     * @vftbl  209
     * @symbol  ?canBeAffectedByArrow\@WitherBoss\@\@UEBA_NAEBVMobEffectInstance\@\@\@Z
     */
    virtual bool canBeAffectedByArrow(class MobEffectInstance const &) const;
    /**
     * @vftbl  218
     * @symbol  __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl  219
     * @symbol  __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl  241
     * @symbol  __unk_vfn_241
     */
    virtual void __unk_vfn_241();
    /**
     * @vftbl  244
     * @symbol  __unk_vfn_244
     */
    virtual void __unk_vfn_244();
    /**
     * @hash   97370643
     * @vftbl  246
     * @symbol  ?die\@WitherBoss\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @hash   -1042319696
     * @vftbl  263
     * @symbol  ?_hurt\@WitherBoss\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   2094945959
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@WitherBoss\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1096117862
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@WitherBoss\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl  277
     * @symbol  __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @vftbl  285
     * @symbol  __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   -707788822
     * @vftbl  286
     * @symbol  ?hurtEffects\@WitherBoss\@\@UEAAXAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual void hurtEffects(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   -1266707477
     * @vftbl  291
     * @symbol  ?aiStep\@WitherBoss\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl  304
     * @symbol  __unk_vfn_304
     */
    virtual void __unk_vfn_304();
    /**
     * @vftbl  308
     * @symbol  __unk_vfn_308
     */
    virtual void __unk_vfn_308();
    /**
     * @hash   -2055984717
     * @vftbl  313
     * @symbol  ?getArmorValue\@WitherBoss\@\@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @hash   1851765838
     * @vftbl  349
     * @symbol  ?newServerAiStep\@WitherBoss\@\@UEAAXXZ
     */
    virtual void newServerAiStep();
    /**
     * @vftbl  354
     * @symbol  __unk_vfn_354
     */
    virtual void __unk_vfn_354();
    /**
     * @hash   1821735036
     * @symbol  ??0WitherBoss\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI WitherBoss(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   376762689
     * @symbol  ?awardSpawnWitherAchievement\@WitherBoss\@\@QEBAXXZ
     */
    MCAPI void awardSpawnWitherAchievement() const;
    /**
     * @hash   26804135
     * @symbol  ?getHeadPos\@WitherBoss\@\@QEBA?AVVec3\@\@H\@Z
     */
    MCAPI class Vec3 getHeadPos(int) const;
    /**
     * @hash   -1062900139
     * @symbol  ?getHeadRot\@WitherBoss\@\@QEAA?AVVec2\@\@H\@Z
     */
    MCAPI class Vec2 getHeadRot(int);
    /**
     * @hash   114413160
     * @symbol  ?getInvulnerableTicks\@WitherBoss\@\@QEBAHXZ
     */
    MCAPI int getInvulnerableTicks() const;
    /**
     * @hash   1270527638
     * @symbol  ?getOverlayAlpha\@WitherBoss\@\@QEAAMXZ
     */
    MCAPI float getOverlayAlpha();
    /**
     * @hash   617383825
     * @symbol  ?getSwellAmount\@WitherBoss\@\@QEBAMM\@Z
     */
    MCAPI float getSwellAmount(float) const;
    /**
     * @hash   -1809199216
     * @symbol  ?hasAerialAttack\@WitherBoss\@\@QEBA_NXZ
     */
    MCAPI bool hasAerialAttack() const;
    /**
     * @hash   -1783908027
     * @symbol  ?postAiStep\@WitherBoss\@\@QEAAXXZ
     */
    MCAPI void postAiStep();
    /**
     * @hash   1389551410
     * @symbol  ?preAiStep\@WitherBoss\@\@QEAA?AW4WitherBossPreAIStepResult\@\@XZ
     */
    MCAPI enum class WitherBossPreAIStepResult preAiStep();
    /**
     * @hash   -483787499
     * @symbol  ?removeSkeleton\@WitherBoss\@\@QEAAXXZ
     */
    MCAPI void removeSkeleton();
    /**
     * @hash   -1340494404
     * @symbol  ?setAerialAttack\@WitherBoss\@\@QEAAX_N\@Z
     */
    MCAPI void setAerialAttack(bool);
    /**
     * @hash   1729705709
     * @symbol  ?setAlternativeTarget\@WitherBoss\@\@QEAAXHUActorUniqueID\@\@\@Z
     */
    MCAPI void setAlternativeTarget(int, struct ActorUniqueID);
    /**
     * @hash   1902240764
     * @symbol  ?setIsPathing\@WitherBoss\@\@QEAAX_N\@Z
     */
    MCAPI void setIsPathing(bool);
    /**
     * @hash   -294654602
     * @symbol  ?setShotDelay\@WitherBoss\@\@QEAAXH\@Z
     */
    MCAPI void setShotDelay(int);
    /**
     * @hash   1713341604
     * @symbol  ?setWantsToMove\@WitherBoss\@\@QEAAX_N\@Z
     */
    MCAPI void setWantsToMove(bool);
    /**
     * @hash   1193939742
     * @symbol  ?wantsToMove\@WitherBoss\@\@QEAA_NXZ
     */
    MCAPI bool wantsToMove();
    /**
     * @hash   415183473
     * @symbol  ?MAX_HEALTH_CAP_UUID\@WitherBoss\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const MAX_HEALTH_CAP_UUID;
    /**
     * @hash   1136203943
     * @symbol  ?canDestroy\@WitherBoss\@\@SA_NAEBVBlock\@\@W4WitherAttackType\@1\@\@Z
     */
    MCAPI static bool canDestroy(class Block const &, enum class WitherBoss::WitherAttackType);

//private:
    /**
     * @hash   1742327358
     * @symbol  ?_destroyBlocks\@WitherBoss\@\@AEAAXAEAVLevel\@\@AEBVAABB\@\@AEAVBlockSource\@\@HW4WitherAttackType\@1\@\@Z
     */
    MCAPI void _destroyBlocks(class Level &, class AABB const &, class BlockSource &, int, enum class WitherBoss::WitherAttackType);
    /**
     * @hash   18168853
     * @symbol  ?_performRangedAttack\@WitherBoss\@\@AEAAXHAEAVActor\@\@\@Z
     */
    MCAPI void _performRangedAttack(int, class Actor &);
    /**
     * @hash   1325165644
     * @symbol  ?_performRangedAttack\@WitherBoss\@\@AEAAXHAEBVVec3\@\@_N\@Z
     */
    MCAPI void _performRangedAttack(int, class Vec3 const &, bool);
    /**
     * @hash   1085974629
     * @symbol  ?canShoot\@WitherBoss\@\@AEAA_NXZ
     */
    MCAPI bool canShoot();

private:
    /**
     * @hash   1651618148
     * @symbol  ?TIME_BEFORE_MOVING\@WitherBoss\@\@0HB
     */
    MCAPI static int const TIME_BEFORE_MOVING;

};