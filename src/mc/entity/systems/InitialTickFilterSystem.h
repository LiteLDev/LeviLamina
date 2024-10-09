#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/entity/components/FlagComponent.h"

class InitialTickFilterSystem {
public:
    // prevent constructor by default
    InitialTickFilterSystem& operator=(InitialTickFilterSystem const&);
    InitialTickFilterSystem(InitialTickFilterSystem const&);
    InitialTickFilterSystem();

public:
    // NOLINTBEGIN
    MCAPI static void blockFilterTickEntity(
        class StrictEntityContext const&                                               context,
        struct StateVectorComponent const&                                             stateVectorComponent,
        class EntityModifier<class FlagComponent<struct ActorMovementTickNeededFlag>>& modifier,
        class IConstBlockSource const&                                                 region
    );

    MCAPI static struct TickingSystemWithInfo createBlockFilterSystem();

    MCAPI static struct TickingSystemWithInfo createTickingAreaFilterSystem();

    MCAPI static void tickingAreaFilterTickEntity(
        class StrictEntityContext&                                                     context,
        class TickWorldComponent&                                                      tickWorldComponent,
        struct CurrentTickComponent const&                                             currentTickComponent,
        class EntityModifier<class FlagComponent<struct ActorMovementTickNeededFlag>>& modifier
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _blockFilterTickView(
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
            struct StateVectorComponent const,
            struct Exclude<
                class FlagComponent<struct PlayerComponentFlag>,
                class FlagComponent<struct GlobalActorFlag>>>                         view,
        class ViewT<class StrictEntityContext, struct DimensionTypeComponent const>   dimensionView,
        class OptionalGlobal<struct LocalConstBlockSourceFactoryComponent const>      factory,
        class EntityModifier<class FlagComponent<struct ActorMovementTickNeededFlag>> modifier
    );

    MCAPI static void _tickingAreaFilterTickView(
        class OptionalGlobal<struct CurrentTickComponent const> currentTickComponent,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
            class TickWorldComponent>                                                 view,
        class EntityModifier<class FlagComponent<struct ActorMovementTickNeededFlag>> modifier
    );

    // NOLINTEND
};
