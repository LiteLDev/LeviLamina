#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class MobIsImmobileFilterSystem {
public:
    // prevent constructor by default
    MobIsImmobileFilterSystem& operator=(MobIsImmobileFilterSystem const&);
    MobIsImmobileFilterSystem(MobIsImmobileFilterSystem const&);
    MobIsImmobileFilterSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void tickImmobileFilter(
        entt::type_list<struct Include<
            class FlagComponent<struct ActorMovementTickNeededFlag> const,
            class FlagComponent<struct MobFlag> const>>,
        class StrictEntityContext const& entity,
        class ViewT<
            class StrictEntityContext,
            struct ActorDataFlagComponent const,
            class Optional<class FlagComponent<struct ActorIsImmobileFlag> const>> actorView,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct MobFlag>>,
            struct MovementAttributesComponent const,
            class Optional<class FlagComponent<struct ActorIsKnockedBackOnDeathFlag> const>> mobView,
        class ViewT<
            class StrictEntityContext,
            struct ActorDataFlagComponent const,
            struct Include<struct OnGroundFlagComponent, class FlagComponent<struct HorseFlag>>,
            struct Exclude<
                class FlagComponent<struct MobAllowStandSlidingFlag>,
                class FlagComponent<struct MobIsJumpingFlag>>>                                        horseView,
        class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct HorseFlag>>> onlyHorseView,
        class ViewT<
            class StrictEntityContext,
            class FlagComponent<struct PlayerIsSleepingFlag> const,
            class FlagComponent<struct PlayerComponentFlag> const>          playerView,
        class EntityModifier<class FlagComponent<struct MobIsImmobileFlag>> mod
    );

    // NOLINTEND
};
