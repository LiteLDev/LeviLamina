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
#include "mc/world/actor/animal/Animal.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Ocelot : public ::Animal {
public:
    // prevent constructor by default
    Ocelot& operator=(Ocelot const&);
    Ocelot(Ocelot const&);
    Ocelot();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1Ocelot@@UEAA@XZ
    virtual ~Ocelot() = default;

    // vIndex: 146, symbol: ?updateEntitySpecificMolangVariables@Ocelot@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // symbol: ??0Ocelot@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Ocelot(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?SNEAK_SPEED_MOD@Ocelot@@2MB
    MCAPI static float const SNEAK_SPEED_MOD;

    // symbol: ?SPRINT_SPEED_MOD@Ocelot@@2MB
    MCAPI static float const SPRINT_SPEED_MOD;

    // NOLINTEND
};
