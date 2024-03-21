#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class PostAIUpdateSystem {
public:
    // prevent constructor by default
    PostAIUpdateSystem& operator=(PostAIUpdateSystem const&);
    PostAIUpdateSystem(PostAIUpdateSystem const&);
    PostAIUpdateSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@PostAIUpdateSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // symbol:
    // ?tick@PostAIUpdateSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UMobFlag@@@@@@U?$Exclude@V?$FlagComponent@UMobIsImmobileFlag@@@@V?$FlagComponent@UIsDeadFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@UNoActionTimeComponent@@@@V?$EntityModifier@V?$FlagComponent@UWasOnGroundFlag@@@@@@@Z
    MCAPI static void tick(
        class ViewT<
            class StrictEntityContext,
            struct Include<
                class FlagComponent<struct ActorMovementTickNeededFlag>,
                class FlagComponent<struct MobFlag>>,
            struct Exclude<class FlagComponent<struct MobIsImmobileFlag>, class FlagComponent<struct IsDeadFlag>>,
            class Optional<class FlagComponent<struct OnGroundFlag> const>,
            struct NoActionTimeComponent>                                 view,
        class EntityModifier<class FlagComponent<struct WasOnGroundFlag>> mod
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?doPostAiUpdate@PostAIUpdateSystem@@CAXAEAVStrictEntityContext@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@AEAUNoActionTimeComponent@@V?$EntityModifier@V?$FlagComponent@UWasOnGroundFlag@@@@@@@Z
    MCAPI static void
    doPostAiUpdate(class StrictEntityContext&, class Optional<class FlagComponent<struct OnGroundFlag> const>, struct NoActionTimeComponent&, class EntityModifier<class FlagComponent<struct WasOnGroundFlag>>);

    // NOLINTEND
};
