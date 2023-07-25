#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorComponentDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORCOMPONENTDESCRIPTION
public:
    ActorComponentDescription& operator=(ActorComponentDescription const&) = delete;
    ActorComponentDescription(ActorComponentDescription const&)            = delete;
    ActorComponentDescription()                                            = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORCOMPONENTDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorComponentDescription();
#endif
};
