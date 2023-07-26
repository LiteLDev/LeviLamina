#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/NavigationDescription.h"

class NavigationFlyDescription : public ::NavigationDescription {

public:
    // prevent constructor by default
    NavigationFlyDescription& operator=(NavigationFlyDescription const&) = delete;
    NavigationFlyDescription(NavigationFlyDescription const&)            = delete;
    NavigationFlyDescription()                                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@NavigationFlyDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NAVIGATIONFLYDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NavigationFlyDescription(); // NOLINT
#endif
};
