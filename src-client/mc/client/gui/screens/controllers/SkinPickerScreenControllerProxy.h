#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/SkinPickerScreenControllerProxyCallbacks.h"

class SkinPickerScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::SkinPickerScreenControllerProxyCallbacks const> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinPickerScreenControllerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SkinPickerScreenControllerProxy() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SkinPickerScreenControllerProxy(::SkinPickerScreenControllerProxyCallbacks const& callbacks);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SkinPickerScreenControllerProxyCallbacks const& callbacks);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
