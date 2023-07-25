#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/NavigationDescription.h"

class NavigationGenericDescription : public ::NavigationDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONGENERICDESCRIPTION
public:
    NavigationGenericDescription& operator=(NavigationGenericDescription const&) = delete;
    NavigationGenericDescription(NavigationGenericDescription const&)            = delete;
    NavigationGenericDescription()                                               = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@NavigationGenericDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NAVIGATIONGENERICDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NavigationGenericDescription();
#endif
};
