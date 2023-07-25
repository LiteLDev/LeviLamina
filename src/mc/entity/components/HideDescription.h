#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Description.h"

class HideDescription : public ::Description {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HIDEDESCRIPTION
public:
    HideDescription& operator=(HideDescription const&) = delete;
    HideDescription(HideDescription const&)            = delete;
    HideDescription()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@HideDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HIDEDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~HideDescription();
#endif
};
