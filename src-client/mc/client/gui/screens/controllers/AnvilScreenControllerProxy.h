#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/AnvilScreenControllerProxyCallbacks.h"

class AnvilScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 512, ::AnvilScreenControllerProxyCallbacks const> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    AnvilScreenControllerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnvilScreenControllerProxy() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AnvilScreenControllerProxy(::AnvilScreenControllerProxyCallbacks callbacks);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AnvilScreenControllerProxyCallbacks callbacks);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
