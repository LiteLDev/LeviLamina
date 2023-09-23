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
    WitherBoss& operator=(WitherBoss const&);
    WitherBoss(WitherBoss const&);
    WitherBoss();

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

    // vIndex: 46, symbol: ?startRiding@WitherBoss@@UEAA_NAEAVActor@@@Z
    virtual bool startRiding(class Actor&);

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 82, symbol: __unk_vfn_82
    virtual void __unk_vfn_82();

    // vIndex: 85, symbol: __unk_vfn_85
    virtual void __unk_vfn_85();

    // vIndex: 92, symbol: __unk_vfn_92
    virtual void __unk_vfn_92();

    // vIndex: 94, symbol: __unk_vfn_94
    virtual void __unk_vfn_94();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 97, symbol: __unk_vfn_97
    virtual void __unk_vfn_97();

    // vIndex: 119, symbol: ?isInvulnerableTo@WitherBoss@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 125, symbol: ?handleEntityEvent@WitherBoss@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 155, symbol: ?canFreeze@WitherBoss@@UEBA_NXZ
    virtual bool canFreeze() const;

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 166, symbol: ?causeFallDamage@WitherBoss@@UEAAXMMVActorDamageSource@@@Z
    virtual void causeFallDamage(float, float, class ActorDamageSource);

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 188, symbol: ?canBeAffected@WitherBoss@@UEBA_NI@Z
    virtual bool canBeAffected(uint) const;

    // vIndex: 189, symbol: ?canBeAffectedByArrow@WitherBoss@@UEBA_NAEBVMobEffectInstance@@@Z
    virtual bool canBeAffectedByArrow(class MobEffectInstance const&) const;

    // vIndex: 198, symbol: __unk_vfn_198
    virtual void __unk_vfn_198();

    // vIndex: 199, symbol: __unk_vfn_199
    virtual void __unk_vfn_199();

    // vIndex: 215, symbol: __unk_vfn_215
    virtual void __unk_vfn_215();

    // vIndex: 218, symbol: __unk_vfn_218
    virtual void __unk_vfn_218();

    // vIndex: 220, symbol: ?die@WitherBoss@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const&);

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 236, symbol: ?_hurt@WitherBoss@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 239, symbol: ?readAdditionalSaveData@WitherBoss@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 240, symbol: ?addAdditionalSaveData@WitherBoss@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 256, symbol: ?hurtEffects@WitherBoss@@UEAAXAEBVActorDamageSource@@M_N1@Z
    virtual void hurtEffects(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 259, symbol: ?aiStep@WitherBoss@@UEAAXXZ
    virtual void aiStep();

    // vIndex: 270, symbol: __unk_vfn_270
    virtual void __unk_vfn_270();

    // vIndex: 274, symbol: __unk_vfn_274
    virtual void __unk_vfn_274();

    // vIndex: 279, symbol: ?getArmorValue@WitherBoss@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 312, symbol: ?newServerAiStep@WitherBoss@@UEAAXXZ
    virtual void newServerAiStep();

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
    auto& $TIME_BEFORE_MOVING() { return TIME_BEFORE_MOVING; }

    // NOLINTEND
};
