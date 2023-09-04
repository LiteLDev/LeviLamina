#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/NavigationDescription.h"

class NavigationGenericDescription : public ::NavigationDescription {
public:
    // prevent constructor by default
    NavigationGenericDescription& operator=(NavigationGenericDescription const&) = delete;
    NavigationGenericDescription(NavigationGenericDescription const&)            = delete;
    NavigationGenericDescription()                                               = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@NavigationGenericDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // symbol: ??1NavigationGenericDescription@@UEAA@XZ
    MCVAPI ~NavigationGenericDescription();

    // NOLINTEND
};
