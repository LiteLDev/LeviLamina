#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/FurnaceScreenControllerProxyCallbacks.h"

class FurnaceScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 256, ::FurnaceScreenControllerProxyCallbacks const> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    FurnaceScreenControllerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FurnaceScreenControllerProxy() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FurnaceScreenControllerProxy(::FurnaceScreenControllerProxyCallbacks callbacks);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::FurnaceScreenControllerProxyCallbacks callbacks);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
