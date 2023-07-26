#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IsSummonableDescription {

public:
    // prevent constructor by default
    IsSummonableDescription& operator=(IsSummonableDescription const&) = delete;
    IsSummonableDescription(IsSummonableDescription const&)            = delete;
    IsSummonableDescription()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getJsonName\@IsSummonableDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
};
