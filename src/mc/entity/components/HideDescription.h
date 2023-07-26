#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Description.h"

class HideDescription : public ::Description {

public:
    // prevent constructor by default
    HideDescription& operator=(HideDescription const&) = delete;
    HideDescription(HideDescription const&)            = delete;
    HideDescription()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@HideDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HIDEDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~HideDescription(); // NOLINT
#endif
};
