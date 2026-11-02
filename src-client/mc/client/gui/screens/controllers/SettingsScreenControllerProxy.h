#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerProxyCallbacks.h"

class SettingsScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 320, ::SettingsScreenControllerProxyCallbacks const> mCallbacks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsScreenControllerProxy() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
