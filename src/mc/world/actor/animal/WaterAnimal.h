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
    // vIndex: 10
    virtual ~WaterAnimal();

    // vIndex: 160
    virtual bool checkSpawnRules(bool fromSpawner);

    // vIndex: 190
    virtual float getFlopVerticalVelocityFactor() const;

    // vIndex: 191
    virtual float getFlopHorizontalVelocityFactor() const;

    MCAPI WaterAnimal(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void preAiStep();

    // NOLINTEND
};
