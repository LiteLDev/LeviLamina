#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/NavigationDescription.h"

class NavigationClimbDescription : public ::NavigationDescription {

public:
    // prevent constructor by default
    NavigationClimbDescription& operator=(NavigationClimbDescription const&) = delete;
    NavigationClimbDescription(NavigationClimbDescription const&)            = delete;
    NavigationClimbDescription()                                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@NavigationClimbDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NAVIGATIONCLIMBDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NavigationClimbDescription(); // NOLINT
#endif
};
