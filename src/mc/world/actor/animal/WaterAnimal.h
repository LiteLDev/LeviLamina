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
#include "mc/world/actor/Mob.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

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
    virtual bool checkSpawnRules(bool);

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI bool checkSpawnRules$(bool);

    MCAPI float getFlopHorizontalVelocityFactor$() const;

    MCAPI float getFlopVerticalVelocityFactor$() const;

    // NOLINTEND
};
