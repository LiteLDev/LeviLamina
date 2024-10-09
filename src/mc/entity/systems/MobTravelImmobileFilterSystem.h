#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class MobTravelImmobileFilterSystem {
public:
    // prevent constructor by default
    MobTravelImmobileFilterSystem& operator=(MobTravelImmobileFilterSystem const&);
    MobTravelImmobileFilterSystem(MobTravelImmobileFilterSystem const&);
    MobTravelImmobileFilterSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo create();

    MCAPI static void tick(
        class ViewT<class StrictEntityContext, struct Include<struct MobTravelComponent>> mainView,
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
            class FlagComponent<struct PlayerComponentFlag> const> playerView,
        class EntityModifier<struct MobTravelComponent>            mod
    );

    // NOLINTEND
};
