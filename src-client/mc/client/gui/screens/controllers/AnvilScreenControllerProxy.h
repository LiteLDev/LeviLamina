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
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnvilScreenControllerProxy() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
