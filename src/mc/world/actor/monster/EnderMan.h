#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

class EnderMan : public ::Monster {
public:
    // prevent constructor by default
    EnderMan& operator=(EnderMan const&);
    EnderMan(EnderMan const&);
    EnderMan();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1EnderMan@@UEAA@XZ
    virtual ~EnderMan() = default;

    // vIndex: 26, symbol: ?normalTick@EnderMan@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 67, symbol: ?shouldRender@EnderMan@@UEBA_NXZ
    virtual bool shouldRender() const;

    // vIndex: 69, symbol: ?getAmbientSound@EnderMan@@UEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent getAmbientSound() const;

    // vIndex: 114, symbol: ?canBeAffectedByArrow@EnderMan@@UEBA_NAEBVMobEffectInstance@@@Z
    virtual bool canBeAffectedByArrow(class MobEffectInstance const& effect) const;

    // vIndex: 148, symbol: ?_hurt@EnderMan@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 149, symbol: ?readAdditionalSaveData@EnderMan@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@EnderMan@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 159, symbol: ?hurtEffects@EnderMan@@UEAAXAEBVActorDamageSource@@M_N1@Z
    virtual void hurtEffects(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 189, symbol: ?newServerAiStep@EnderMan@@UEAAXXZ
    virtual void newServerAiStep();

    // symbol: ??0EnderMan@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI EnderMan(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?getCarryingBlock@EnderMan@@QEBAAEBVBlock@@XZ
    MCAPI class Block const& getCarryingBlock() const;

    // symbol: ?setCarryingBlock@EnderMan@@QEAAXAEBVBlock@@@Z
    MCAPI void setCarryingBlock(class Block const& block);

    // symbol: ?shutdown@EnderMan@@SAXXZ
    MCAPI static void shutdown();

    // symbol: ?SPEED_MODIFIER_ATTACKING@EnderMan@@2V?$shared_ptr@VAttributeModifier@@@std@@A
    MCAPI static std::shared_ptr<class AttributeModifier> SPEED_MODIFIER_ATTACKING;

    // symbol: ?SPEED_MODIFIER_ATTACKING_UUID@EnderMan@@2VUUID@mce@@B
    MCAPI static class mce::UUID const SPEED_MODIFIER_ATTACKING_UUID;

    // symbol: ?mMayTake@EnderMan@@2V?$set@PEBVBlock@@U?$less@PEBVBlock@@@std@@V?$allocator@PEBVBlock@@@3@@std@@A
    MCAPI static std::set<class Block const*> mMayTake;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?mMayTakeIsSetup@EnderMan@@0_NA
    MCAPI static bool mMayTakeIsSetup;

    // NOLINTEND
};
