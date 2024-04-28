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
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Phantom : public ::Monster {
public:
    // prevent constructor by default
    Phantom& operator=(Phantom const&);
    Phantom(Phantom const&);
    Phantom();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1Phantom@@UEAA@XZ
    virtual ~Phantom() = default;

    // vIndex: 26, symbol: ?normalTick@Phantom@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 67, symbol: ?shouldRender@Phantom@@UEBA_NXZ
    virtual bool shouldRender() const;

    // vIndex: 162, symbol: ?checkSpawnRules@Phantom@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool fromSpawner);

    // symbol: ??0Phantom@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Phantom(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND
};
