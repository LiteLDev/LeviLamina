#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
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

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?doPostAiUpdate@PostAIUpdateSystem@@CAXAEAVStrictEntityContext@@AEBUAttributesComponent@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@AEAUNoActionTimeComponent@@V?$EntityModifier@V?$FlagComponent@UWasOnGroundFlag@@@@@@@Z
    MCAPI static void doPostAiUpdate(
        class StrictEntityContext&                                     entity,
        struct AttributesComponent const&                              attributes,
        class Optional<class FlagComponent<struct OnGroundFlag> const> onGround,
        struct NoActionTimeComponent&,
        class EntityModifier<class FlagComponent<struct WasOnGroundFlag>> mod
    );

    // NOLINTEND
};
