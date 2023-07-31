#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorComponentDescription {

public:
    // prevent constructor by default
    ActorComponentDescription& operator=(ActorComponentDescription const&) = delete;
    ActorComponentDescription(ActorComponentDescription const&)            = delete;
    ActorComponentDescription()                                            = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORCOMPONENTDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorComponentDescription();
#endif
    // NOLINTEND
};
