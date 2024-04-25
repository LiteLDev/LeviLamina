#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WitherBossPreAIStepResult.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
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
    // vIndex: 4, symbol: ?reloadHardcoded@WitherBoss@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 5, symbol:
    // ?reloadHardcodedClient@WitherBoss@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1WitherBoss@@UEAA@XZ
    virtual ~WitherBoss() = default;

    // vIndex: 13, symbol: ?remove@WitherBoss@@UEAAXXZ
    virtual void remove();

    // vIndex: 14, symbol: ?getFiringPos@WitherBoss@@UEBA?AVVec3@@XZ
    virtual class Vec3 getFiringPos() const;

    // vIndex: 29, symbol: ?startRiding@WitherBoss@@UEAA_NAEAVActor@@@Z
    virtual bool startRiding(class Actor&);

    // vIndex: 70, symbol: ?isInvulnerableTo@WitherBoss@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 75, symbol: ?handleEntityEvent@WitherBoss@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // vIndex: 93, symbol: ?canFreeze@WitherBoss@@UEBA_NXZ
    virtual bool canFreeze() const;

    // vIndex: 100, symbol: ?causeFallDamageToActor@WitherBoss@@UEAAMMMVActorDamageSource@@@Z
    virtual float causeFallDamageToActor(float, float, class ActorDamageSource);

    // vIndex: 113, symbol: ?canBeAffected@WitherBoss@@UEBA_NI@Z
    virtual bool canBeAffected(uint effectId) const;

    // vIndex: 114, symbol: ?canBeAffectedByArrow@WitherBoss@@UEBA_NAEBVMobEffectInstance@@@Z
    virtual bool canBeAffectedByArrow(class MobEffectInstance const& effect) const;

    // vIndex: 133, symbol: ?die@WitherBoss@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const& source);

    // vIndex: 148, symbol: ?_hurt@WitherBoss@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 149, symbol: ?readAdditionalSaveData@WitherBoss@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@WitherBoss@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 159, symbol: ?hurtEffects@WitherBoss@@UEAAXAEBVActorDamageSource@@M_N1@Z
    virtual void hurtEffects(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 160, symbol: ?aiStep@WitherBoss@@UEAAXXZ
    virtual void aiStep();

    // vIndex: 170, symbol: ?getArmorValue@WitherBoss@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 189, symbol: ?newServerAiStep@WitherBoss@@UEAAXXZ
    virtual void newServerAiStep();

    // symbol: ??0WitherBoss@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI WitherBoss(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?awardSpawnWitherAchievement@WitherBoss@@QEBAXXZ
    MCAPI void awardSpawnWitherAchievement() const;

    // symbol: ?getHeadPos@WitherBoss@@QEBA?AVVec3@@H@Z
    MCAPI class Vec3 getHeadPos(int headID) const;

    // symbol: ?getHeadRot@WitherBoss@@QEBA?AVVec2@@H@Z
    MCAPI class Vec2 getHeadRot(int headID) const;

    // symbol: ?getInvulnerableTicks@WitherBoss@@QEBAHXZ
    MCAPI int getInvulnerableTicks() const;

    // symbol: ?getOverlayAlpha@WitherBoss@@QEAAMXZ
    MCAPI float getOverlayAlpha();

    // symbol: ?getSwellAmount@WitherBoss@@QEBAMM@Z
    MCAPI float getSwellAmount(float a) const;

    // symbol: ?hasAerialAttack@WitherBoss@@QEBA_NXZ
    MCAPI bool hasAerialAttack() const;

    // symbol: ?postAiStep@WitherBoss@@QEAAXXZ
    MCAPI void postAiStep();

    // symbol: ?preAiStep@WitherBoss@@QEAA?AW4WitherBossPreAIStepResult@@XZ
    MCAPI ::WitherBossPreAIStepResult preAiStep();

    // symbol: ?removeSkeleton@WitherBoss@@QEAAXXZ
    MCAPI void removeSkeleton();

    // symbol: ?setAerialAttack@WitherBoss@@QEAAX_N@Z
    MCAPI void setAerialAttack(bool aerialAttack);

    // symbol: ?setAlternativeTarget@WitherBoss@@QEAAXHUActorUniqueID@@@Z
    MCAPI void setAlternativeTarget(int headIndex, struct ActorUniqueID entityId);

    // symbol: ?setInvulnerableTicks@WitherBoss@@QEAAXH@Z
    MCAPI void setInvulnerableTicks(int invulnerableTicks);

    // symbol: ?setIsPathing@WitherBoss@@QEAAX_N@Z
    MCAPI void setIsPathing(bool isPathing);

    // symbol: ?setShotDelay@WitherBoss@@QEAAXH@Z
    MCAPI void setShotDelay(int delay);

    // symbol: ?setWantsToMove@WitherBoss@@QEAAX_N@Z
    MCAPI void setWantsToMove(bool shouldMove);

    // symbol: ?wantsToMove@WitherBoss@@QEAA_NXZ
    MCAPI bool wantsToMove();

    // symbol: ?canDestroy@WitherBoss@@SA_NAEBVBlock@@W4WitherAttackType@1@@Z
    MCAPI static bool canDestroy(class Block const& block, ::WitherBoss::WitherAttackType);

    // symbol: ?MAX_HEALTH_CAP_UUID@WitherBoss@@2VUUID@mce@@B
    MCAPI static class mce::UUID const MAX_HEALTH_CAP_UUID;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_destroyBlocks@WitherBoss@@AEAAXAEAVLevel@@AEBVAABB@@AEAVBlockSource@@HW4WitherAttackType@1@@Z
    MCAPI void _destroyBlocks(
        class Level&       level,
        class AABB const&  bb,
        class BlockSource& region,
        int                range,
        ::WitherBoss::WitherAttackType
    );

    // symbol: ?_performRangedAttack@WitherBoss@@AEAAXHAEAVActor@@@Z
    MCAPI void _performRangedAttack(int headID, class Actor& target);

    // symbol: ?_performRangedAttack@WitherBoss@@AEAAXHAEBVVec3@@_N@Z
    MCAPI void _performRangedAttack(int headID, class Vec3 const& targetPos, bool dangerous);

    // symbol: ?canShoot@WitherBoss@@AEAA_NXZ
    MCAPI bool canShoot();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?TIME_BEFORE_MOVING@WitherBoss@@0HB
    MCAPI static int const TIME_BEFORE_MOVING;

    // NOLINTEND
};
