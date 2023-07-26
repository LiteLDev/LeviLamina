#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorPropertiesDescription {

public:
    // prevent constructor by default
    ActorPropertiesDescription& operator=(ActorPropertiesDescription const&) = delete;
    ActorPropertiesDescription(ActorPropertiesDescription const&)            = delete;
    ActorPropertiesDescription()                                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getJsonName\@ActorPropertiesDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORPROPERTIESDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorPropertiesDescription(); // NOLINT
#endif
};
