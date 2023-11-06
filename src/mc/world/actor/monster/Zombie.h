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
#include "mc/world/actor/monster/HumanoidMonster.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
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
    // vIndex: 4, symbol: ?reloadHardcoded@Zombie@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

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

    // vIndex: 116, symbol: ?canPickupItem@Zombie@@UEBA_NAEBVItemStack@@@Z
    virtual bool canPickupItem(class ItemStack const&) const;

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 148, symbol: __unk_vfn_148
    virtual void __unk_vfn_148();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 183, symbol: ?checkSpawnRules@Zombie@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool);

    // vIndex: 191, symbol: ?getArmorValue@Zombie@@MEBAHXZ
    virtual int getArmorValue() const;

    // symbol: ??1Zombie@@UEAA@XZ
    MCVAPI ~Zombie();

    // symbol: ??0Zombie@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Zombie(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?setZombieType@Zombie@@QEAAXW4ZombieType@1@@Z
    MCAPI void setZombieType(::Zombie::ZombieType);

    // NOLINTEND

protected:
    // NOLINTBEGIN
    // symbol: ?SPAWN_BONUS_UUID@Zombie@@1VUUID@mce@@B
    MCAPI static class mce::UUID const SPAWN_BONUS_UUID;

    // symbol: ?SPAWN_REINFORCEMENTS_CHANCE@Zombie@@1VAttribute@@B
    MCAPI static class Attribute const SPAWN_REINFORCEMENTS_CHANCE;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $SPAWN_BONUS_UUID() { return SPAWN_BONUS_UUID; }

    static auto& $SPAWN_REINFORCEMENTS_CHANCE() { return SPAWN_REINFORCEMENTS_CHANCE; }

    // NOLINTEND
};
