#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientInputHandlerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<uint(::std::string const&)>> mGetNameId;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string()>>            mGetCurrentInputMapping;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ClientInputHandlerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
