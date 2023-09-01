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
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@NavigationFlyDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // symbol: ??1NavigationFlyDescription@@UEAA@XZ
    MCVAPI ~NavigationFlyDescription();

    // NOLINTEND
};
