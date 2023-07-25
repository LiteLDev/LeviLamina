#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/NavigationDescription.h"

class NavigationSwimDescription : public ::NavigationDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONSWIMDESCRIPTION
public:
    NavigationSwimDescription& operator=(NavigationSwimDescription const&) = delete;
    NavigationSwimDescription(NavigationSwimDescription const&)            = delete;
    NavigationSwimDescription()                                            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@NavigationSwimDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NAVIGATIONSWIMDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NavigationSwimDescription();
#endif
};
