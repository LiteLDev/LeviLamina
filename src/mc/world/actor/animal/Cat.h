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

class Cat : public ::Animal {
public:
    // prevent constructor by default
    Cat& operator=(Cat const&);
    Cat(Cat const&);
    Cat();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~Cat() = default;

    // vIndex: 61
    virtual void onTame();

    // vIndex: 68
    virtual ::Puv::Legacy::LevelSoundEvent getAmbientSound() const;

    // vIndex: 144
    virtual void updateEntitySpecificMolangVariables(class RenderParams& renderParams);

    // vIndex: 158
    virtual void aiStep();

    MCAPI
    Cat(class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext);

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

    MCAPI void aiStep$();

    MCAPI ::Puv::Legacy::LevelSoundEvent getAmbientSound$() const;

    MCAPI void onTame$();

    MCAPI void updateEntitySpecificMolangVariables$(class RenderParams& renderParams);

    MCAPI static float const& SNEAK_SPEED_MOD();

    MCAPI static float const& SPRINT_SPEED_MOD();

    // NOLINTEND
};
