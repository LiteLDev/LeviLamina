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
#include "mc/world/actor/monster/HumanoidMonster.h"
#include "mc/world/item/components/ItemUseMethod.h"

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
    // vIndex: 4, symbol: ?reloadHardcoded@Zombie@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: ??1Zombie@@UEAA@XZ
    virtual ~Zombie();

    // vIndex: 103, symbol: ?canPickupItem@Zombie@@UEBA_NAEBVItemStack@@@Z
    virtual bool canPickupItem(class ItemStack const& item) const;

    // vIndex: 162, symbol: ?checkSpawnRules@Zombie@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool fromSpawner);

    // vIndex: 170, symbol: ?getArmorValue@Zombie@@MEBAHXZ
    virtual int getArmorValue() const;

    // symbol: ??0Zombie@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Zombie(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?setZombieType@Zombie@@QEAAXW4ZombieType@1@@Z
    MCAPI void setZombieType(::Zombie::ZombieType type);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?SPAWN_BONUS_UUID@Zombie@@1VUUID@mce@@B
    MCAPI static class mce::UUID const SPAWN_BONUS_UUID;

    // symbol: ?SPAWN_REINFORCEMENTS_CHANCE@Zombie@@1VAttribute@@B
    MCAPI static class Attribute const SPAWN_REINFORCEMENTS_CHANCE;

    // NOLINTEND
};
