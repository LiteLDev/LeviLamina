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
#include "mc/world/actor/item/Boat.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ChestBoat : public ::Boat {
public:
    // prevent constructor by default
    ChestBoat& operator=(ChestBoat const&);
    ChestBoat(ChestBoat const&);
    ChestBoat();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1ChestBoat@@UEAA@XZ
    virtual ~ChestBoat() = default;

    // vIndex: 32, symbol:
    // ?getEntityLocNameString@ChestBoat@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getEntityLocNameString() const;

    // vIndex: 132, symbol: ?kill@ChestBoat@@UEAAXXZ
    virtual void kill();

    // vIndex: 153, symbol: ?destroy@ChestBoat@@UEAAXPEAVActor@@@Z
    virtual void destroy(class Actor* sourceActor);

    // symbol: ??0ChestBoat@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI ChestBoat(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_dropChestContents@ChestBoat@@AEAAXAEBVVec3@@@Z
    MCAPI void _dropChestContents(class Vec3 const& pos);

    // NOLINTEND
};
