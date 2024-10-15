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

class IronGolem : public ::Mob {
public:
    // prevent constructor by default
    IronGolem& operator=(IronGolem const&);
    IronGolem(IronGolem const&);
    IronGolem();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~IronGolem() = default;

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 74
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // vIndex: 131
    virtual void die(class ActorDamageSource const& source);

    // vIndex: 144
    virtual void updateEntitySpecificMolangVariables(class RenderParams& renderParams);

    // vIndex: 149
    virtual void _playStepSound(class BlockPos const& pos, class Block const& onBlock);

    // vIndex: 157
    virtual void hurtEffects(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 158
    virtual void aiStep();

    // vIndex: 167
    virtual bool doHurtTarget(class Actor* target, ::ActorDamageCause const& cause);

    MCAPI IronGolem(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void _playStepSound$(class BlockPos const& pos, class Block const& onBlock);

    MCAPI void aiStep$();

    MCAPI void die$(class ActorDamageSource const& source);

    MCAPI bool doHurtTarget$(class Actor* target, ::ActorDamageCause const& cause);

    MCAPI float getShadowRadius$() const;

    MCAPI void handleEntityEvent$(::ActorEvent id, int data);

    MCAPI void hurtEffects$(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI void updateEntitySpecificMolangVariables$(class RenderParams& renderParams);

    // NOLINTEND
};
