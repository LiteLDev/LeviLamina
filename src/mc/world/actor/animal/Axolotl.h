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

class Axolotl : public ::Animal {
public:
    // prevent constructor by default
    Axolotl& operator=(Axolotl const&);
    Axolotl(Axolotl const&);
    Axolotl();

public:
    // NOLINTBEGIN
    // vIndex: 6
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~Axolotl() = default;

    // vIndex: 184
    virtual float _getWalkTargetValue(class BlockPos const& pos);

    // vIndex: 189
    virtual class AABB _getAdjustedAABBForSpawnCheck(class AABB const& aabb, class Vec3 const& mobPos) const;

    MCAPI Axolotl(
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

    MCAPI class AABB _getAdjustedAABBForSpawnCheck$(class AABB const& aabb, class Vec3 const& mobPos) const;

    MCAPI float _getWalkTargetValue$(class BlockPos const& pos);

    MCAPI void initializeComponents$(::ActorInitializationMethod method, class VariantParameterList const& params);

    // NOLINTEND
};
