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

class HumanoidMonster : public ::Monster {
public:
    // prevent constructor by default
    HumanoidMonster& operator=(HumanoidMonster const&);
    HumanoidMonster(HumanoidMonster const&);
    HumanoidMonster();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: ??1HumanoidMonster@@UEAA@XZ
    virtual ~HumanoidMonster();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 29, symbol: ?normalTick@HumanoidMonster@@UEAAXXZ
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

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 167, symbol: ?readAdditionalSaveData@HumanoidMonster@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 168, symbol: ?addAdditionalSaveData@HumanoidMonster@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 185, symbol: ?getItemUseDuration@HumanoidMonster@@UEBAHXZ
    virtual int getItemUseDuration() const;

    // vIndex: 190, symbol: ?doHurtTarget@HumanoidMonster@@UEAA_NPEAVActor@@AEBW4ActorDamageCause@@@Z
    virtual bool doHurtTarget(class Actor*, ::ActorDamageCause const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?MAX_ENCHANTED_ARMOR_CHANCE@HumanoidMonster@@0MB
    MCAPI static float const MAX_ENCHANTED_ARMOR_CHANCE;

    // symbol: ?MAX_ENCHANTED_WEAPON_CHANCE@HumanoidMonster@@0MB
    MCAPI static float const MAX_ENCHANTED_WEAPON_CHANCE;

    // symbol: ?MAX_PICKUP_LOOT_CHANCE@HumanoidMonster@@0MB
    MCAPI static float const MAX_PICKUP_LOOT_CHANCE;

    // symbol: ?MAX_WEARING_ARMOR_CHANCE@HumanoidMonster@@0MB
    MCAPI static float const MAX_WEARING_ARMOR_CHANCE;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $MAX_ENCHANTED_ARMOR_CHANCE() { return MAX_ENCHANTED_ARMOR_CHANCE; }

    static auto& $MAX_ENCHANTED_WEAPON_CHANCE() { return MAX_ENCHANTED_WEAPON_CHANCE; }

    static auto& $MAX_PICKUP_LOOT_CHANCE() { return MAX_PICKUP_LOOT_CHANCE; }

    static auto& $MAX_WEARING_ARMOR_CHANCE() { return MAX_WEARING_ARMOR_CHANCE; }

    // NOLINTEND
};
