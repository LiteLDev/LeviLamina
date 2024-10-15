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
#include "mc/world/actor/monster/HumanoidMonster.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class Zombie : public ::HumanoidMonster {
public:
    // Zombie inner types define
    enum class ZombieType {};

public:
    // prevent constructor by default
    Zombie& operator=(Zombie const&);
    Zombie(Zombie const&);
    Zombie();

public:
    // NOLINTBEGIN
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~Zombie();

    // vIndex: 101
    virtual bool canPickupItem(class ItemStack const& item) const;

    // vIndex: 160
    virtual bool checkSpawnRules(bool fromSpawner);

    // vIndex: 168
    virtual int getArmorValue() const;

    MCAPI Zombie(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void setZombieType(::Zombie::ZombieType type);

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

    MCAPI bool canPickupItem$(class ItemStack const& item) const;

    MCAPI bool checkSpawnRules$(bool fromSpawner);

    MCAPI int getArmorValue$() const;

    MCAPI void reloadHardcoded$(::ActorInitializationMethod method, class VariantParameterList const& params);

    MCAPI static class mce::UUID const& SPAWN_BONUS_UUID();

    MCAPI static class Attribute const& SPAWN_REINFORCEMENTS_CHANCE();

    // NOLINTEND
};
