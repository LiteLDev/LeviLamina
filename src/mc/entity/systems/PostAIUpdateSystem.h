#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/FlagComponent.h"

class PostAIUpdateSystem {
public:
    // prevent constructor by default
    PostAIUpdateSystem& operator=(PostAIUpdateSystem const&);
    PostAIUpdateSystem(PostAIUpdateSystem const&);
    PostAIUpdateSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void doPostAiUpdate(
        class StrictEntityContext&                                        entity,
        class Optional<struct OnGroundFlagComponent const>                onGround,
        struct NoActionTimeComponent&                                     noActionTime,
        class EntityModifier<class FlagComponent<struct WasOnGroundFlag>> mod
    );

    // NOLINTEND
};
