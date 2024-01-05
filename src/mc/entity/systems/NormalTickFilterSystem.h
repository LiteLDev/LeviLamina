#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class NormalTickFilterSystem {
public:
    // prevent constructor by default
    NormalTickFilterSystem& operator=(NormalTickFilterSystem const&);
    NormalTickFilterSystem(NormalTickFilterSystem const&);
    NormalTickFilterSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createGenericSystem@NormalTickFilterSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createGenericSystem();

    // symbol: ?createLocalPlayerSystem@NormalTickFilterSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createLocalPlayerSystem();

    // symbol:
    // ?tickGenericSystem@NormalTickFilterSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@@@V?$Optional@$$CBVDimensionStateComponent@@@@@@V?$EntityModifier@V?$FlagComponent@USkipNormalTick@@@@@@@Z
    MCAPI static void tickGenericSystem(
        class ViewT<
            class StrictEntityContext,
            struct Include<
                class FlagComponent<struct ActorMovementTickNeededFlag>,
                class FlagComponent<struct PlayerComponentFlag>>,
            class Optional<class DimensionStateComponent const>>         view,
        class EntityModifier<class FlagComponent<struct SkipNormalTick>> mod
    );

    // symbol:
    // ?tickLocalPlayerSystem@NormalTickFilterSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@ULocalPlayerComponentFlag@@@@@@V?$Optional@$$CBVLoadingStateComponent@@@@@@V?$EntityModifier@V?$FlagComponent@USkipNormalTick@@@@@@@Z
    MCAPI static void tickLocalPlayerSystem(
        class ViewT<
            class StrictEntityContext,
            struct Include<
                class FlagComponent<struct ActorMovementTickNeededFlag>,
                class FlagComponent<struct LocalPlayerComponentFlag>>,
            class Optional<class LoadingStateComponent const>>           view,
        class EntityModifier<class FlagComponent<struct SkipNormalTick>> mod
    );

    // NOLINTEND
};
