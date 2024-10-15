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

class Creeper : public ::Monster {
public:
    // prevent constructor by default
    Creeper& operator=(Creeper const&);
    Creeper(Creeper const&);
    Creeper();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~Creeper() = default;

    // vIndex: 26
    virtual void normalTick();

    // vIndex: 131
    virtual void die(class ActorDamageSource const& source);

    MCAPI Creeper(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI int getSwellDir();

    MCAPI float getSwelling(float a) const;

    MCAPI static class Creeper* tryGetFromEntity(class EntityContext& entity, bool includeRemoved);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _setSwellDir(int dir);

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

    MCAPI void die$(class ActorDamageSource const& source);

    MCAPI void normalTick$();

    // NOLINTEND
};
