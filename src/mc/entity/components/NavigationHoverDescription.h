#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/NavigationDescription.h"

class NavigationHoverDescription : public ::NavigationDescription {

public:
    // prevent constructor by default
    NavigationHoverDescription& operator=(NavigationHoverDescription const&) = delete;
    NavigationHoverDescription(NavigationHoverDescription const&)            = delete;
    NavigationHoverDescription()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@NavigationHoverDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NAVIGATIONHOVERDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NavigationHoverDescription();
#endif
    // NOLINTEND
};
