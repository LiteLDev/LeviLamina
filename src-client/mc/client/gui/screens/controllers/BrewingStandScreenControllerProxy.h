#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/BrewingStandScreenControllerProxyCallbacks.h"

class BrewingStandScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::BrewingStandScreenControllerProxyCallbacks const> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    BrewingStandScreenControllerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BrewingStandScreenControllerProxy() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BrewingStandScreenControllerProxy(::BrewingStandScreenControllerProxyCallbacks callbacks);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BrewingStandScreenControllerProxyCallbacks callbacks);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
