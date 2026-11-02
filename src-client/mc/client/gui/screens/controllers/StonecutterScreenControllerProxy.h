#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/StonecutterScreenControllerProxyCallbacks.h"

class StonecutterScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 640, ::StonecutterScreenControllerProxyCallbacks const> mCallbacks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StonecutterScreenControllerProxy() /*override*/ = default;
    // NOLINTEND
};
