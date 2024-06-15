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
    // vIndex: 10, symbol: __gen_??1OminousItemSpawner@@UEAA@XZ
    virtual ~OminousItemSpawner() = default;

    // vIndex: 13, symbol: ?remove@OminousItemSpawner@@UEAAXXZ
    virtual void remove();

    // vIndex: 27, symbol: ?baseTick@OminousItemSpawner@@UEAAXXZ
    virtual void baseTick();

    // vIndex: 147, symbol: ?readAdditionalSaveData@OminousItemSpawner@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 148, symbol: ?addAdditionalSaveData@OminousItemSpawner@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // symbol:
    // ??0OminousItemSpawner@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI
    OminousItemSpawner(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?init@OminousItemSpawner@@QEAAXAEBVItemStack@@H@Z
    MCAPI void init(class ItemStack const&, int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_clientTick@OminousItemSpawner@@AEAAXXZ
    MCAPI void _clientTick();

    // symbol: ?_getItem@OminousItemSpawner@@AEAAAEBVItemStack@@XZ
    MCAPI class ItemStack const& _getItem();

    // symbol: ?_onTimePassed@OminousItemSpawner@@AEAAXXZ
    MCAPI void _onTimePassed();

    // NOLINTEND
};
