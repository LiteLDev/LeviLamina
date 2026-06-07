#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/PlayScreenControllerProxyCallbacks.h"

class PlayScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::PlayScreenControllerProxyCallbacks const> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayScreenControllerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayScreenControllerProxy() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlayScreenControllerProxy(::PlayScreenControllerProxyCallbacks const& callbacks);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PlayScreenControllerProxyCallbacks const& callbacks);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
