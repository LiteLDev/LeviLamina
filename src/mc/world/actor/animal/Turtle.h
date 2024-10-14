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
#include "mc/world/actor/animal/Animal.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Turtle : public ::Animal {
public:
    // prevent constructor by default
    Turtle& operator=(Turtle const&);
    Turtle(Turtle const&);
    Turtle();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~Turtle() = default;

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 131
    virtual void die(class ActorDamageSource const& source);

    // vIndex: 184
    virtual float _getWalkTargetValue(class BlockPos const& pos);

    MCAPI Turtle(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI float _getWalkTargetValue$(class BlockPos const& pos);

    MCAPI void die$(class ActorDamageSource const& source);

    MCAPI float getShadowRadius$() const;

    // NOLINTEND
};
