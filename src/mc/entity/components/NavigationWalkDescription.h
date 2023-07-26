#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/NavigationDescription.h"

class NavigationWalkDescription : public ::NavigationDescription {

public:
    // prevent constructor by default
    NavigationWalkDescription& operator=(NavigationWalkDescription const&) = delete;
    NavigationWalkDescription(NavigationWalkDescription const&)            = delete;
    NavigationWalkDescription()                                            = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@NavigationWalkDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NAVIGATIONWALKDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NavigationWalkDescription(); // NOLINT
#endif
};
