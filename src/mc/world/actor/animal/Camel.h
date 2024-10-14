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

class Camel : public ::Animal {
public:
    // prevent constructor by default
    Camel& operator=(Camel const&);
    Camel(Camel const&);
    Camel();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~Camel() = default;

    // vIndex: 19
    virtual class Vec3 getInterpolatedRidingOffset(float, int) const;

    // vIndex: 26
    virtual void normalTick();

    // vIndex: 149
    virtual void _playStepSound(class BlockPos const&, class Block const& onBlock);

    // vIndex: 158
    virtual void aiStep();

    MCAPI Camel(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI std::optional<class ExpiringTick> getDashCooldown() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _monitorSitting();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void _playStepSound$(class BlockPos const&, class Block const& onBlock);

    MCAPI void aiStep$();

    MCAPI class Vec3 getInterpolatedRidingOffset$(float, int) const;

    MCAPI void normalTick$();

    // NOLINTEND
};
