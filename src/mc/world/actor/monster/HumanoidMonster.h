#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/packet/types/world/actor/ActorEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

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
    // vIndex: 10
    virtual ~HumanoidMonster();

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 162
    virtual int getItemUseDuration() const;

    MCAPI HumanoidMonster(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void dtor$();

    MCAPI void addAdditionalSaveData$(class CompoundTag& tag) const;

    MCAPI int getItemUseDuration$() const;

    MCAPI void readAdditionalSaveData$(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI static float const& MAX_ENCHANTED_ARMOR_CHANCE();

    MCAPI static float const& MAX_ENCHANTED_WEAPON_CHANCE();

    MCAPI static float const& MAX_PICKUP_LOOT_CHANCE();

    MCAPI static float const& MAX_WEARING_ARMOR_CHANCE();

    // NOLINTEND
};
