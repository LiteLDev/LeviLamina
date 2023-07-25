#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class WitherBoss : public ::Monster {
public:
    // WitherBoss inner types declare
    // clang-format off

    // clang-format on

    // WitherBoss inner types define
    enum class WitherAttackType {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WITHERBOSS
public:
    WitherBoss& operator=(WitherBoss const&) = delete;
    WitherBoss(WitherBoss const&)            = delete;
    WitherBoss()                             = delete;
#endif

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@WitherBoss\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&);
    /**
     * @vftbl 11
     * @symbol
     * ?reloadHardcodedClient\@WitherBoss\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const&);
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
     * @vftbl 25
     * @symbol ?getFiringPos\@WitherBoss\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getFiringPos() const;
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 47
     * @symbol ?startRiding\@WitherBoss\@\@UEAA_NAEAVActor\@\@\@Z
     */
    virtual bool startRiding(class Actor&);
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77();
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl 120
     * @symbol ?isInvulnerableTo\@WitherBoss\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;
    /**
     * @vftbl 127
     * @symbol ?handleEntityEvent\@WitherBoss\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 157
     * @symbol ?canFreeze\@WitherBoss\@\@UEBA_NXZ
     */
    virtual bool canFreeze() const;
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 168
     * @symbol ?causeFallDamage\@WitherBoss\@\@UEAAXMMVActorDamageSource\@\@\@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 192
     * @symbol ?canBeAffected\@WitherBoss\@\@UEBA_NI\@Z
     */
    virtual bool canBeAffected(unsigned int) const;
    /**
     * @vftbl 193
     * @symbol ?canBeAffectedByArrow\@WitherBoss\@\@UEBA_NAEBVMobEffectInstance\@\@\@Z
     */
    virtual bool canBeAffectedByArrow(class MobEffectInstance const&) const;
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202();
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203();
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl 224
     * @symbol ?die\@WitherBoss\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const&);
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239();
    /**
     * @vftbl 240
     * @symbol ?_hurt\@WitherBoss\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@WitherBoss\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@WitherBoss\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247();
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253();
    /**
     * @vftbl 261
     * @symbol ?hurtEffects\@WitherBoss\@\@UEAAXAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual void hurtEffects(class ActorDamageSource const&, float, bool, bool);
    /**
     * @vftbl 264
     * @symbol ?aiStep\@WitherBoss\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl 276
     * @symbol __unk_vfn_276
     */
    virtual void __unk_vfn_276();
    /**
     * @vftbl 280
     * @symbol __unk_vfn_280
     */
    virtual void __unk_vfn_280();
    /**
     * @vftbl 285
     * @symbol ?getArmorValue\@WitherBoss\@\@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl 318
     * @symbol ?newServerAiStep\@WitherBoss\@\@UEAAXXZ
     */
    virtual void newServerAiStep();
    /**
     * @vftbl 323
     * @symbol __unk_vfn_323
     */
    virtual void __unk_vfn_323();
    /**
     * @symbol
     * ??0WitherBoss\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI WitherBoss(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
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
    MCAPI static bool canDestroy(class Block const&, enum class WitherBoss::WitherAttackType);

    // private:
    /**
     * @symbol
     * ?_destroyBlocks\@WitherBoss\@\@AEAAXAEAVLevel\@\@AEBVAABB\@\@AEAVBlockSource\@\@HW4WitherAttackType\@1\@\@Z
     */
    MCAPI void
    _destroyBlocks(class Level&, class AABB const&, class BlockSource&, int, enum class WitherBoss::WitherAttackType);
    /**
     * @symbol ?_performRangedAttack\@WitherBoss\@\@AEAAXHAEAVActor\@\@\@Z
     */
    MCAPI void _performRangedAttack(int, class Actor&);
    /**
     * @symbol ?_performRangedAttack\@WitherBoss\@\@AEAAXHAEBVVec3\@\@_N\@Z
     */
    MCAPI void _performRangedAttack(int, class Vec3 const&, bool);
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
