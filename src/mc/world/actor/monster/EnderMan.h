#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

class EnderMan : public ::Monster {
public:
    // prevent constructor by default
    EnderMan& operator=(EnderMan const&);
    EnderMan(EnderMan const&);
    EnderMan();

public:
    // NOLINTBEGIN
    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 43, symbol: ?normalTick@EnderMan@@UEAAXXZ
    virtual void normalTick();

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

    // vIndex: 116, symbol: ?shouldRender@EnderMan@@UEBA_NXZ
    virtual bool shouldRender() const;

    // vIndex: 118, symbol: ?getAmbientSound@EnderMan@@UEBA?AW4LevelSoundEvent@@XZ
    virtual ::LevelSoundEvent getAmbientSound() const;

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 189, symbol: ?canBeAffectedByArrow@EnderMan@@UEBA_NAEBVMobEffectInstance@@@Z
    virtual bool canBeAffectedByArrow(class MobEffectInstance const&) const;

    // vIndex: 198, symbol: __unk_vfn_198
    virtual void __unk_vfn_198();

    // vIndex: 199, symbol: __unk_vfn_199
    virtual void __unk_vfn_199();

    // vIndex: 215, symbol: __unk_vfn_215
    virtual void __unk_vfn_215();

    // vIndex: 218, symbol: __unk_vfn_218
    virtual void __unk_vfn_218();

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 236, symbol: ?_hurt@EnderMan@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 239, symbol: ?readAdditionalSaveData@EnderMan@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 240, symbol: ?addAdditionalSaveData@EnderMan@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 256, symbol: ?hurtEffects@EnderMan@@UEAAXAEBVActorDamageSource@@M_N1@Z
    virtual void hurtEffects(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 270, symbol: __unk_vfn_270
    virtual void __unk_vfn_270();

    // vIndex: 274, symbol: __unk_vfn_274
    virtual void __unk_vfn_274();

    // vIndex: 312, symbol: ?newServerAiStep@EnderMan@@UEAAXXZ
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
    auto& $mMayTakeIsSetup() { return mMayTakeIsSetup; }

    // NOLINTEND
};
