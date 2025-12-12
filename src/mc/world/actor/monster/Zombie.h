#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/monster/HumanoidMonster.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class Attribute;
class EntityContext;
class ItemStack;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
namespace mce { class UUID; }
// clang-format on

class Zombie : public ::HumanoidMonster {
public:
    // Zombie inner types define
    enum class ZombieType : int {
        Default   = 0,
        Villager  = 1,
        Husk      = 2,
        Pigzombie = 3,
        Drowned   = 4,
    };

public:
    // prevent constructor by default
    Zombie();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canPickupItem(::ItemStack const& item) const /*override*/;

    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;

    virtual int getArmorValue() const /*override*/;

    virtual ~Zombie() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Zombie(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCFOLD void setZombieType(::Zombie::ZombieType type);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID const& SPAWN_BONUS_UUID();

    MCAPI static ::Attribute const& SPAWN_REINFORCEMENTS_CHANCE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canPickupItem(::ItemStack const& item) const;

    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI bool $checkSpawnRules(bool fromSpawner);

    MCFOLD int $getArmorValue() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
