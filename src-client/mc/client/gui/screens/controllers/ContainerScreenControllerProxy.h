#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/ContainerScreenControllerProxyCallbacks.h"

class ContainerScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 320, ::ContainerScreenControllerProxyCallbacks const> mCallbacks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerScreenControllerProxy() /*override*/ = default;
    // NOLINTEND
};
