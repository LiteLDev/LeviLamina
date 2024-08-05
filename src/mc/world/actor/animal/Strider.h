#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/animal/Animal.h"
#include "mc/world/item/components/ItemUseMethod.h"

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
        MCAPI void tick(class Strider&);

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
    virtual float getNextStep(float);

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
};
