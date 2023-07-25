#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class PostAIUpdateSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POSTAIUPDATESYSTEM
public:
    PostAIUpdateSystem& operator=(PostAIUpdateSystem const&) = delete;
    PostAIUpdateSystem(PostAIUpdateSystem const&)            = delete;
    PostAIUpdateSystem()                                     = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@PostAIUpdateSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?doPostAiUpdate\@PostAIUpdateSystem\@\@CAXAEAVStrictEntityContext\@\@AEBUAttributesComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@AEAUNoActionTimeComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UWasOnGroundFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
    doPostAiUpdate(class StrictEntityContext&, struct AttributesComponent const&, class Optional<class FlagComponent<struct OnGroundFlag> const>, struct NoActionTimeComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct WasOnGroundFlag>>);

private:
};
