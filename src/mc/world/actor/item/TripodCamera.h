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

class TripodCamera : public ::Mob {
public:
    // prevent constructor by default
    TripodCamera& operator=(TripodCamera const&);
    TripodCamera(TripodCamera const&);
    TripodCamera();

public:
    // NOLINTBEGIN
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~TripodCamera() = default;

    // vIndex: 13
    virtual void remove();

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 53
    virtual bool isTargetable() const;

    // vIndex: 144
    virtual void updateEntitySpecificMolangVariables(class RenderParams& renderParams);

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 185
    virtual bool canExistWhenDisallowMob() const;

    MCAPI TripodCamera(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI bool interactWithPlayer(class Player& player);

    MCAPI bool isActivated() const;

    MCAPI void startTakingPicture(class Player& player);

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

    MCAPI bool _hurt$(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI bool canExistWhenDisallowMob$() const;

    MCAPI float getShadowRadius$() const;

    MCAPI bool isTargetable$() const;

    MCAPI void reloadHardcoded$(::ActorInitializationMethod method, class VariantParameterList const& params);

    MCAPI void remove$();

    MCAPI void updateEntitySpecificMolangVariables$(class RenderParams& renderParams);

    // NOLINTEND
};
