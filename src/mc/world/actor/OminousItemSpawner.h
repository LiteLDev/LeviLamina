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
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/item/components/ItemUseMethod.h"

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
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    MCAPI
    OminousItemSpawner(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    MCAPI void init(class ItemStack const&, int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _clientTick();

    MCAPI class ItemStack const& _getItem();

    MCAPI void _onTimePassed();

    // NOLINTEND
};
