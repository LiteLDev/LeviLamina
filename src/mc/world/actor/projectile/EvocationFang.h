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
#include "mc/world/actor/Actor.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class EvocationFang : public ::Actor {
public:
    // prevent constructor by default
    EvocationFang& operator=(EvocationFang const&);
    EvocationFang(EvocationFang const&);
    EvocationFang();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1EvocationFang@@UEAA@XZ
    virtual ~EvocationFang() = default;

    // vIndex: 26, symbol: ?normalTick@EvocationFang@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 38, symbol: ?getShadowRadius@EvocationFang@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 75, symbol: ?handleEntityEvent@EvocationFang@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // vIndex: 92, symbol: ?getSourceUniqueID@EvocationFang@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // symbol: ??0EvocationFang@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI EvocationFang(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_dealDamageTo@EvocationFang@@AEAAXAEAVMob@@@Z
    MCAPI void _dealDamageTo(class Mob& entity);

    // NOLINTEND
};
