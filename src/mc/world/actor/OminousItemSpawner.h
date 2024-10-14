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
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class OminousItemSpawner : public ::Actor {
public:
    // prevent constructor by default
    OminousItemSpawner& operator=(OminousItemSpawner const&);
    OminousItemSpawner(OminousItemSpawner const&);
    OminousItemSpawner();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~OminousItemSpawner() = default;

    // vIndex: 13
    virtual void remove();

    // vIndex: 27
    virtual void baseTick();

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper&);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI OminousItemSpawner(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void init(class ItemStack const& itemToSpawn, int ticksBeforeRemoval);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _clientTick();

    MCAPI class ItemStack const& _getItem();

    MCAPI void _onTimePassed();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void addAdditionalSaveData$(class CompoundTag& tag) const;

    MCAPI void baseTick$();

    MCAPI void readAdditionalSaveData$(class CompoundTag const& tag, class DataLoadHelper&);

    MCAPI void remove$();

    // NOLINTEND
};
