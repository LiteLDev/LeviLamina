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
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Spider : public ::Monster {
public:
    // prevent constructor by default
    Spider& operator=(Spider const&);
    Spider(Spider const&);
    Spider();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~Spider() = default;

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 66
    virtual bool shouldRender() const;

    // vIndex: 111
    virtual bool canBeAffected(uint effectId) const;

    // vIndex: 149
    virtual void _playStepSound(class BlockPos const& pos, class Block const& onBlock);

    // vIndex: 191
    virtual float getModelScale() const;

    MCAPI Spider(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void _playStepSound$(class BlockPos const& pos, class Block const& onBlock);

    MCAPI bool canBeAffected$(uint effectId) const;

    MCAPI float getModelScale$() const;

    MCAPI float getShadowRadius$() const;

    MCAPI bool shouldRender$() const;

    // NOLINTEND
};
