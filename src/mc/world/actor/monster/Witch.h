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
#include "mc/world/actor/monster/HumanoidMonster.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Witch : public ::HumanoidMonster {
public:
    // prevent constructor by default
    Witch& operator=(Witch const&);
    Witch(Witch const&);
    Witch();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~Witch() = default;

    // vIndex: 14
    virtual class Vec3 getFiringPos() const;

    // vIndex: 54
    virtual bool canAttack(class Actor* actor, bool allowInvulnerable) const;

    // vIndex: 74
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // vIndex: 144
    virtual void updateEntitySpecificMolangVariables(class RenderParams& renderParams);

    // vIndex: 179
    virtual float getDamageAfterEnchantReduction(class ActorDamageSource const& source, float damage) const;

    MCAPI Witch(
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

    MCAPI void* ctor$(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI bool canAttack$(class Actor* actor, bool allowInvulnerable) const;

    MCAPI float getDamageAfterEnchantReduction$(class ActorDamageSource const& source, float damage) const;

    MCAPI class Vec3 getFiringPos$() const;

    MCAPI void handleEntityEvent$(::ActorEvent id, int data);

    MCAPI void updateEntitySpecificMolangVariables$(class RenderParams& renderParams);

    // NOLINTEND
};
