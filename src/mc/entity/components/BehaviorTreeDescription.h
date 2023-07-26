#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Description.h"

class BehaviorTreeDescription : public ::Description {

public:
    // prevent constructor by default
    BehaviorTreeDescription& operator=(BehaviorTreeDescription const&) = delete;
    BehaviorTreeDescription(BehaviorTreeDescription const&)            = delete;
    BehaviorTreeDescription()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@BehaviorTreeDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEHAVIORTREEDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BehaviorTreeDescription(); // NOLINT
#endif
};
