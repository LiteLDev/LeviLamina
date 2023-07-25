#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IsSummonableDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISSUMMONABLEDESCRIPTION
public:
    IsSummonableDescription& operator=(IsSummonableDescription const&) = delete;
    IsSummonableDescription(IsSummonableDescription const&)            = delete;
    IsSummonableDescription()                                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getJsonName\@IsSummonableDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
};
