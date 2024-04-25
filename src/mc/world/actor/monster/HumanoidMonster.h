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
// clang-format on

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

    // vIndex: 26, symbol: ?normalTick@HumanoidMonster@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 149, symbol: ?readAdditionalSaveData@HumanoidMonster@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@HumanoidMonster@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 164, symbol: ?getItemUseDuration@HumanoidMonster@@UEBAHXZ
    virtual int getItemUseDuration() const;

    // vIndex: 169, symbol: ?doHurtTarget@HumanoidMonster@@UEAA_NPEAVActor@@AEBW4ActorDamageCause@@@Z
    virtual bool doHurtTarget(class Actor* target, ::ActorDamageCause const& cause);

    // symbol: ??0HumanoidMonster@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI HumanoidMonster(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND

    // private:
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
};
