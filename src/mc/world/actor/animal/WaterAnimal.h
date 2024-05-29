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
#include "mc/world/actor/Mob.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class WaterAnimal : public ::Mob {
public:
    // prevent constructor by default
    WaterAnimal& operator=(WaterAnimal const&);
    WaterAnimal(WaterAnimal const&);
    WaterAnimal();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: ??1WaterAnimal@@UEAA@XZ
    virtual ~WaterAnimal();

    // vIndex: 162, symbol: ?checkSpawnRules@WaterAnimal@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool fromSpawner);

    // vIndex: 192, symbol: ?getFlopVerticalVelocityFactor@WaterAnimal@@UEBAMXZ
    virtual float getFlopVerticalVelocityFactor() const;

    // vIndex: 193, symbol: ?getFlopHorizontalVelocityFactor@WaterAnimal@@UEBAMXZ
    virtual float getFlopHorizontalVelocityFactor() const;

    // symbol: ??0WaterAnimal@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI WaterAnimal(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?preAiStep@WaterAnimal@@QEAAXXZ
    MCAPI void preAiStep();

    // NOLINTEND
};
