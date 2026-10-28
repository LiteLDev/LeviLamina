#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/copyable_function.h"

class NetworkEnableDisableListener {
public:
    // NetworkEnableDisableListener inner types define
    enum class State : int {
        Enabled       = 0,
        Disabled      = 1,
        Uninitialized = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkaf3b65;
    ::ll::UntypedStorage<8, 64> mUnk9364d1;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkEnableDisableListener& operator=(NetworkEnableDisableListener const&);
    NetworkEnableDisableListener(NetworkEnableDisableListener const&);
    NetworkEnableDisableListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkEnableDisableListener() = default;

    virtual void _onDisable() = 0;

    virtual void _onEnable() = 0;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
