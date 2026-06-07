#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/AbstractSceneProxyCallbacks.h"

class AbstractSceneProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 320, ::AbstractSceneProxyCallbacks const> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    AbstractSceneProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AbstractSceneProxy(::AbstractSceneProxyCallbacks const& callbacks);

    MCAPI ~AbstractSceneProxy();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AbstractSceneProxyCallbacks const& callbacks);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
