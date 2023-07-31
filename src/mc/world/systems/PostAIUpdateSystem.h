#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class PostAIUpdateSystem {

public:
    // prevent constructor by default
    PostAIUpdateSystem& operator=(PostAIUpdateSystem const&) = delete;
    PostAIUpdateSystem(PostAIUpdateSystem const&)            = delete;
    PostAIUpdateSystem()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@PostAIUpdateSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?doPostAiUpdate\@PostAIUpdateSystem\@\@CAXAEAVStrictEntityContext\@\@AEBUAttributesComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@AEAUNoActionTimeComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UWasOnGroundFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
    doPostAiUpdate(class StrictEntityContext&, struct AttributesComponent const&, class Optional<class FlagComponent<struct OnGroundFlag> const>, struct NoActionTimeComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct WasOnGroundFlag>>);
    // NOLINTEND
};
