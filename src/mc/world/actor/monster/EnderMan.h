#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
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

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 29, symbol: ?normalTick@EnderMan@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 76, symbol: ?shouldRender@EnderMan@@UEBA_NXZ
    virtual bool shouldRender() const;

    // vIndex: 78, symbol: ?getAmbientSound@EnderMan@@UEBA?AW4LevelSoundEvent@@XZ
    virtual ::LevelSoundEvent getAmbientSound() const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 127, symbol: ?canBeAffectedByArrow@EnderMan@@UEBA_NAEBVMobEffectInstance@@@Z
    virtual bool canBeAffectedByArrow(class MobEffectInstance const&) const;

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 166, symbol: ?_hurt@EnderMan@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 167, symbol: ?readAdditionalSaveData@EnderMan@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 168, symbol: ?addAdditionalSaveData@EnderMan@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 180, symbol: ?hurtEffects@EnderMan@@UEAAXAEBVActorDamageSource@@M_N1@Z
    virtual void hurtEffects(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 211, symbol: ?newServerAiStep@EnderMan@@UEAAXXZ
    virtual void newServerAiStep();

    // symbol: ??0EnderMan@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI EnderMan(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?getCarryingBlock@EnderMan@@QEBAAEBVBlock@@XZ
    MCAPI class Block const& getCarryingBlock() const;

    // symbol: ?setCarryingBlock@EnderMan@@QEAAXAEBVBlock@@@Z
    MCAPI void setCarryingBlock(class Block const&);

    // symbol: ?shutdown@EnderMan@@SAXXZ
    MCAPI static void shutdown();

    // symbol: ?SPEED_MODIFIER_ATTACKING@EnderMan@@2V?$shared_ptr@VAttributeModifier@@@std@@A
    MCAPI static std::shared_ptr<class AttributeModifier> SPEED_MODIFIER_ATTACKING;

    // symbol: ?SPEED_MODIFIER_ATTACKING_UUID@EnderMan@@2VUUID@mce@@B
    MCAPI static class mce::UUID const SPEED_MODIFIER_ATTACKING_UUID;

    // symbol: ?mMayTake@EnderMan@@2V?$set@PEBVBlock@@U?$less@PEBVBlock@@@std@@V?$allocator@PEBVBlock@@@3@@std@@A
    MCAPI static std::set<class Block const*> mMayTake;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mMayTakeIsSetup@EnderMan@@0_NA
    MCAPI static bool mMayTakeIsSetup;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mMayTakeIsSetup() { return mMayTakeIsSetup; }

    // NOLINTEND
};
