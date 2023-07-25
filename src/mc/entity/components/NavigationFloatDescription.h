#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/NavigationDescription.h"

class NavigationFloatDescription : public ::NavigationDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONFLOATDESCRIPTION
public:
    NavigationFloatDescription& operator=(NavigationFloatDescription const&) = delete;
    NavigationFloatDescription(NavigationFloatDescription const&)            = delete;
    NavigationFloatDescription()                                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@NavigationFloatDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NAVIGATIONFLOATDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NavigationFloatDescription();
#endif
};
