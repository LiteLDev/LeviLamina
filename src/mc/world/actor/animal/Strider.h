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

class Strider : public ::Animal {
public:
    // Strider inner types declare
    // clang-format off
    class PlayerRideInLavaInOverworldAchievementTracker;
    // clang-format on

    // Strider inner types define
    class PlayerRideInLavaInOverworldAchievementTracker {
    public:
        // prevent constructor by default
        PlayerRideInLavaInOverworldAchievementTracker& operator=(PlayerRideInLavaInOverworldAchievementTracker const&);
        PlayerRideInLavaInOverworldAchievementTracker(PlayerRideInLavaInOverworldAchievementTracker const&);
        PlayerRideInLavaInOverworldAchievementTracker();

    public:
        // NOLINTBEGIN
        MCAPI void tick(class Strider& strider);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    Strider& operator=(Strider const&);
    Strider(Strider const&);
    Strider();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~Strider() = default;

    // vIndex: 26
    virtual void normalTick();

    // vIndex: 134
    virtual float getNextStep(float moveDist);

    // vIndex: 145
    virtual bool shouldTryMakeStepSound();

    // vIndex: 149
    virtual void _playStepSound(class BlockPos const&, class Block const& onBlock);

    // vIndex: 184
    virtual float _getWalkTargetValue(class BlockPos const& pos);

    MCAPI Strider(
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

    MCAPI float _getWalkTargetValue$(class BlockPos const& pos);

    MCAPI void _playStepSound$(class BlockPos const&, class Block const& onBlock);

    MCAPI float getNextStep$(float moveDist);

    MCAPI void normalTick$();

    MCAPI bool shouldTryMakeStepSound$();

    // NOLINTEND
};
