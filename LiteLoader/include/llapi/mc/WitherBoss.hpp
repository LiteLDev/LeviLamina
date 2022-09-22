/**
 * @file  WitherBoss.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   1729405197
     * @vftbl  8
     * @symbol ?reloadHardcoded@WitherBoss@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   73814680
     * @vftbl  9
     * @symbol ?reloadHardcodedClient@WitherBoss@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~WitherBoss();
    /**
     * @hash   1785670475
     * @vftbl  17
     * @symbol ?remove@WitherBoss@@UEAAXXZ
     */
    virtual void remove();
    /**
     * @hash   -887880485
     * @vftbl  25
     * @symbol ?getFiringPos@WitherBoss@@UEBA?AVVec3@@XZ
     */
    virtual class Vec3 getFiringPos() const;
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   -2131519225
     * @vftbl  52
     * @symbol ?startRiding@WitherBoss@@UEAA_NAEAVActor@@@Z
     */
    virtual bool startRiding(class Actor &);
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @hash   1880177844
     * @vftbl  75
     * @symbol ?setBlockMovementSlowdownMultiplier@WitherBoss@@UEAAXAEBVBlockLegacy@@AEBVVec3@@@Z
     */
    virtual void setBlockMovementSlowdownMultiplier(class BlockLegacy const &, class Vec3 const &);
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @symbol __unk_vfn_87
     */
    virtual void __unk_vfn_87();
    /**
     * @vftbl  95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl  98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  105
     * @symbol __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @symbol __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @hash   -1299828258
     * @vftbl  134
     * @symbol ?isInvulnerableTo@WitherBoss@@UEBA_NAEBVActorDamageSource@@@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @hash   215119862
     * @vftbl  141
     * @symbol ?handleEntityEvent@WitherBoss@@UEAAXW4ActorEvent@@H@Z
     */
    virtual void handleEntityEvent(enum ActorEvent, int);
    /**
     * @hash   2033449535
     * @vftbl  173
     * @symbol ?canFreeze@WitherBoss@@UEBA_NXZ
     */
    virtual bool canFreeze() const;
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @hash   -1511222638
     * @vftbl  185
     * @symbol ?causeFallDamage@WitherBoss@@UEAAXMMVActorDamageSource@@@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @vftbl  195
     * @symbol __unk_vfn_195
     */
    virtual void __unk_vfn_195();
    /**
     * @hash   -1574502846
     * @vftbl  211
     * @symbol ?canBeAffected@WitherBoss@@UEBA_NAEBVMobEffectInstance@@@Z
     */
    virtual bool canBeAffected(class MobEffectInstance const &) const;
    /**
     * @hash   -1047878402
     * @vftbl  212
     * @symbol ?canBeAffectedByArrow@WitherBoss@@UEBA_NAEBVMobEffectInstance@@@Z
     */
    virtual bool canBeAffectedByArrow(class MobEffectInstance const &) const;
    /**
     * @vftbl  221
     * @symbol __unk_vfn_221
     */
    virtual void __unk_vfn_221();
    /**
     * @vftbl  222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  251
     * @symbol __unk_vfn_251
     */
    virtual void __unk_vfn_251();
    /**
     * @hash   751542563
     * @vftbl  253
     * @symbol ?die@WitherBoss@@UEAAXAEBVActorDamageSource@@@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   -388040144
     * @vftbl  271
     * @symbol ?_hurt@WitherBoss@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   -1546479833
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@WitherBoss@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1750274406
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@WitherBoss@@UEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @vftbl  285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   -53663030
     * @vftbl  294
     * @symbol ?hurtEffects@WitherBoss@@UEAAXAEBVActorDamageSource@@M_N1@Z
     */
    virtual void hurtEffects(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   -612504805
     * @vftbl  300
     * @symbol ?aiStep@WitherBoss@@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl  313
     * @symbol __unk_vfn_313
     */
    virtual void __unk_vfn_313();
    /**
     * @vftbl  317
     * @symbol __unk_vfn_317
     */
    virtual void __unk_vfn_317();
    /**
     * @hash   -1401843549
     * @vftbl  322
     * @symbol ?getArmorValue@WitherBoss@@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl  351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @hash   -1789121794
     * @vftbl  360
     * @symbol ?newServerAiStep@WitherBoss@@UEAAXXZ
     */
    virtual void newServerAiStep();
    /**
     * @vftbl  365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
    /**
     * @hash   -1818614436
     * @symbol ??0WitherBoss@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI WitherBoss(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   1030673217
     * @symbol ?awardSpawnWitherAchievement@WitherBoss@@QEBAXXZ
     */
    MCAPI void awardSpawnWitherAchievement() const;
    /**
     * @hash   680945303
     * @symbol ?getHeadPos@WitherBoss@@QEBA?AVVec3@@H@Z
     */
    MCAPI class Vec3 getHeadPos(int) const;
    /**
     * @hash   -408774347
     * @symbol ?getHeadRot@WitherBoss@@QEAA?AVVec2@@H@Z
     */
    MCAPI class Vec2 getHeadRot(int);
    /**
     * @hash   768538952
     * @symbol ?getInvulnerableTicks@WitherBoss@@QEBAHXZ
     */
    MCAPI int getInvulnerableTicks() const;
    /**
     * @hash   1924653430
     * @symbol ?getOverlayAlpha@WitherBoss@@QEAAMXZ
     */
    MCAPI float getOverlayAlpha();
    /**
     * @hash   1271509617
     * @symbol ?getSwellAmount@WitherBoss@@QEBAMM@Z
     */
    MCAPI float getSwellAmount(float) const;
    /**
     * @hash   -1155073424
     * @symbol ?hasAerialAttack@WitherBoss@@QEBA_NXZ
     */
    MCAPI bool hasAerialAttack() const;
    /**
     * @hash   -1130043627
     * @symbol ?postAiStep@WitherBoss@@QEAAXXZ
     */
    MCAPI void postAiStep();
    /**
     * @hash   2137326997
     * @symbol ?preAiStep@WitherBoss@@QEAA?AW4PreAiStepResult@1@XZ
     */
    MCAPI enum WitherBoss::PreAiStepResult preAiStep();
    /**
     * @hash   169538741
     * @symbol ?removeSkeleton@WitherBoss@@QEAAXXZ
     */
    MCAPI void removeSkeleton();
    /**
     * @hash   -687168164
     * @symbol ?setAerialAttack@WitherBoss@@QEAAX_N@Z
     */
    MCAPI void setAerialAttack(bool);
    /**
     * @hash   -1911950723
     * @symbol ?setAlternativeTarget@WitherBoss@@QEAAXHUActorUniqueID@@@Z
     */
    MCAPI void setAlternativeTarget(int, struct ActorUniqueID);
    /**
     * @hash   -1739108148
     * @symbol ?setIsPathing@WitherBoss@@QEAAX_N@Z
     */
    MCAPI void setIsPathing(bool);
    /**
     * @hash   358963782
     * @symbol ?setShotDelay@WitherBoss@@QEAAXH@Z
     */
    MCAPI void setShotDelay(int);
    /**
     * @hash   -1928007308
     * @symbol ?setWantsToMove@WitherBoss@@QEAAX_N@Z
     */
    MCAPI void setWantsToMove(bool);
    /**
     * @hash   1847558126
     * @symbol ?wantsToMove@WitherBoss@@QEAA_NXZ
     */
    MCAPI bool wantsToMove();
    /**
     * @hash   -690473935
     * @symbol ?MAX_HEALTH_CAP_UUID@WitherBoss@@2VUUID@mce@@B
     */
    MCAPI static class mce::UUID const MAX_HEALTH_CAP_UUID;
    /**
     * @hash   1790099095
     * @symbol ?canDestroy@WitherBoss@@SA_NAEBVBlock@@W4WitherAttackType@1@@Z
     */
    MCAPI static bool canDestroy(class Block const &, enum WitherBoss::WitherAttackType);

//private:
    /**
     * @hash   -1898298882
     * @symbol ?_destroyBlocks@WitherBoss@@AEAAXAEAVLevel@@AEBVAABB@@AEAVBlockSource@@HW4WitherAttackType@1@@Z
     */
    MCAPI void _destroyBlocks(class Level &, class AABB const &, class BlockSource &, int, enum WitherBoss::WitherAttackType);
    /**
     * @hash   672356149
     * @symbol ?_performRangedAttack@WitherBoss@@AEAAXHAEAVActor@@@Z
     */
    MCAPI void _performRangedAttack(int, class Actor &);
    /**
     * @hash   1979337564
     * @symbol ?_performRangedAttack@WitherBoss@@AEAAXHAEBVVec3@@_N@Z
     */
    MCAPI void _performRangedAttack(int, class Vec3 const &, bool);
    /**
     * @hash   1740146549
     * @symbol ?canShoot@WitherBoss@@AEAA_NXZ
     */
    MCAPI bool canShoot();

private:
    /**
     * @hash   682876332
     * @symbol ?TIME_BEFORE_MOVING@WitherBoss@@0HB
     */
    MCAPI static int const TIME_BEFORE_MOVING;

};