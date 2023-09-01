#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WitherBossPreAIStepResult.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AnimationComponentGroupType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/EquipmentSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class WitherBoss : public ::Monster {
public:
    // WitherBoss inner types define
    enum class WitherAttackType {};

public:
    // prevent constructor by default
    WitherBoss& operator=(WitherBoss const&) = delete;
    WitherBoss(WitherBoss const&)            = delete;
    WitherBoss()                             = delete;

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: ?reloadHardcoded@WitherBoss@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 11, symbol:
    // ?reloadHardcodedClient@WitherBoss@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 19, symbol: ?remove@WitherBoss@@UEAAXXZ
    virtual void remove();

    // vIndex: 25, symbol: ?getFiringPos@WitherBoss@@UEBA?AVVec3@@XZ
    virtual class Vec3 getFiringPos() const;

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 47, symbol: ?startRiding@WitherBoss@@UEAA_NAEAVActor@@@Z
    virtual bool startRiding(class Actor&);

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 86, symbol: __unk_vfn_86
    virtual void __unk_vfn_86();

    // vIndex: 93, symbol: __unk_vfn_93
    virtual void __unk_vfn_93();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 96, symbol: __unk_vfn_96
    virtual void __unk_vfn_96();

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 120, symbol: ?isInvulnerableTo@WitherBoss@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 127, symbol: ?handleEntityEvent@WitherBoss@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 157, symbol: ?canFreeze@WitherBoss@@UEBA_NXZ
    virtual bool canFreeze() const;

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 168, symbol: ?causeFallDamage@WitherBoss@@UEAAXMMVActorDamageSource@@@Z
    virtual void causeFallDamage(float, float, class ActorDamageSource);

    // vIndex: 178, symbol: __unk_vfn_178
    virtual void __unk_vfn_178();

    // vIndex: 192, symbol: ?canBeAffected@WitherBoss@@UEBA_NI@Z
    virtual bool canBeAffected(uint) const;

    // vIndex: 193, symbol: ?canBeAffectedByArrow@WitherBoss@@UEBA_NAEBVMobEffectInstance@@@Z
    virtual bool canBeAffectedByArrow(class MobEffectInstance const&) const;

    // vIndex: 202, symbol: __unk_vfn_202
    virtual void __unk_vfn_202();

    // vIndex: 203, symbol: __unk_vfn_203
    virtual void __unk_vfn_203();

    // vIndex: 219, symbol: __unk_vfn_219
    virtual void __unk_vfn_219();

    // vIndex: 222, symbol: __unk_vfn_222
    virtual void __unk_vfn_222();

    // vIndex: 224, symbol: ?die@WitherBoss@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const&);

    // vIndex: 239, symbol: __unk_vfn_239
    virtual void __unk_vfn_239();

    // vIndex: 240, symbol: ?_hurt@WitherBoss@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 243, symbol: ?readAdditionalSaveData@WitherBoss@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 244, symbol: ?addAdditionalSaveData@WitherBoss@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 247, symbol: __unk_vfn_247
    virtual void __unk_vfn_247();

    // vIndex: 253, symbol: __unk_vfn_253
    virtual void __unk_vfn_253();

    // vIndex: 261, symbol: ?hurtEffects@WitherBoss@@UEAAXAEBVActorDamageSource@@M_N1@Z
    virtual void hurtEffects(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 264, symbol: ?aiStep@WitherBoss@@UEAAXXZ
    virtual void aiStep();

    // vIndex: 276, symbol: __unk_vfn_276
    virtual void __unk_vfn_276();

    // vIndex: 280, symbol: __unk_vfn_280
    virtual void __unk_vfn_280();

    // vIndex: 285, symbol: ?getArmorValue@WitherBoss@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 318, symbol: ?newServerAiStep@WitherBoss@@UEAAXXZ
    virtual void newServerAiStep();

    // vIndex: 323, symbol: __unk_vfn_323
    virtual void __unk_vfn_323();

    // symbol: ??0WitherBoss@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI WitherBoss(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?awardSpawnWitherAchievement@WitherBoss@@QEBAXXZ
    MCAPI void awardSpawnWitherAchievement() const;

    // symbol: ?getHeadPos@WitherBoss@@QEBA?AVVec3@@H@Z
    MCAPI class Vec3 getHeadPos(int) const;

    // symbol: ?getHeadRot@WitherBoss@@QEAA?AVVec2@@H@Z
    MCAPI class Vec2 getHeadRot(int);

    // symbol: ?getInvulnerableTicks@WitherBoss@@QEBAHXZ
    MCAPI int getInvulnerableTicks() const;

    // symbol: ?getOverlayAlpha@WitherBoss@@QEAAMXZ
    MCAPI float getOverlayAlpha();

    // symbol: ?getSwellAmount@WitherBoss@@QEBAMM@Z
    MCAPI float getSwellAmount(float) const;

    // symbol: ?hasAerialAttack@WitherBoss@@QEBA_NXZ
    MCAPI bool hasAerialAttack() const;

    // symbol: ?postAiStep@WitherBoss@@QEAAXXZ
    MCAPI void postAiStep();

    // symbol: ?preAiStep@WitherBoss@@QEAA?AW4WitherBossPreAIStepResult@@XZ
    MCAPI ::WitherBossPreAIStepResult preAiStep();

    // symbol: ?removeSkeleton@WitherBoss@@QEAAXXZ
    MCAPI void removeSkeleton();

    // symbol: ?setAerialAttack@WitherBoss@@QEAAX_N@Z
    MCAPI void setAerialAttack(bool);

    // symbol: ?setAlternativeTarget@WitherBoss@@QEAAXHUActorUniqueID@@@Z
    MCAPI void setAlternativeTarget(int, struct ActorUniqueID);

    // symbol: ?setIsPathing@WitherBoss@@QEAAX_N@Z
    MCAPI void setIsPathing(bool);

    // symbol: ?setShotDelay@WitherBoss@@QEAAXH@Z
    MCAPI void setShotDelay(int);

    // symbol: ?setWantsToMove@WitherBoss@@QEAAX_N@Z
    MCAPI void setWantsToMove(bool);

    // symbol: ?wantsToMove@WitherBoss@@QEAA_NXZ
    MCAPI bool wantsToMove();

    // symbol: ?canDestroy@WitherBoss@@SA_NAEBVBlock@@W4WitherAttackType@1@@Z
    MCAPI static bool canDestroy(class Block const&, ::WitherBoss::WitherAttackType);

    // symbol: ?MAX_HEALTH_CAP_UUID@WitherBoss@@2VUUID@mce@@B
    MCAPI static class mce::UUID const MAX_HEALTH_CAP_UUID;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_destroyBlocks@WitherBoss@@AEAAXAEAVLevel@@AEBVAABB@@AEAVBlockSource@@HW4WitherAttackType@1@@Z
    MCAPI void _destroyBlocks(class Level&, class AABB const&, class BlockSource&, int, ::WitherBoss::WitherAttackType);

    // symbol: ?_performRangedAttack@WitherBoss@@AEAAXHAEAVActor@@@Z
    MCAPI void _performRangedAttack(int, class Actor&);

    // symbol: ?_performRangedAttack@WitherBoss@@AEAAXHAEBVVec3@@_N@Z
    MCAPI void _performRangedAttack(int, class Vec3 const&, bool);

    // symbol: ?canShoot@WitherBoss@@AEAA_NXZ
    MCAPI bool canShoot();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?TIME_BEFORE_MOVING@WitherBoss@@0HB
    MCAPI static int const TIME_BEFORE_MOVING;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    inline auto& $TIME_BEFORE_MOVING() { return TIME_BEFORE_MOVING; }

    // NOLINTEND
};
