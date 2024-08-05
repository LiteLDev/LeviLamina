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
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void
    doPostAiUpdate(class StrictEntityContext&, class Optional<struct OnGroundFlagComponent const>, struct NoActionTimeComponent&, class EntityModifier<class FlagComponent<struct WasOnGroundFlag>>);

    // NOLINTEND
};
