#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/ScriptDebuggerAttachMode.h"

struct ScriptDebuggerSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                            mAllowOutboundConnect;
    ::ll::TypedStorage<1, 1, bool>                            mAllowInboundListen;
    ::ll::TypedStorage<4, 4, ::ScriptDebuggerAttachMode>      mAutoAttach;
    ::ll::TypedStorage<4, 4, uint>                            mAutoAttachTimeoutSec;
    ::ll::TypedStorage<1, 1, bool>                            mForceInboundDebugPort;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mHost;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>           mPort;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mPasscode;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptDebuggerSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
