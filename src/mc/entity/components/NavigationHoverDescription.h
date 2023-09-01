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
    // vIndex: 0, symbol: ?getJsonName@NavigationHoverDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // symbol: ??1NavigationHoverDescription@@UEAA@XZ
    MCVAPI ~NavigationHoverDescription();

    // NOLINTEND
};
