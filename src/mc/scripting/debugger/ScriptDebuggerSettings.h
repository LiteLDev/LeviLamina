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
    // prevent constructor by default
    ScriptDebuggerSettings& operator=(ScriptDebuggerSettings const&);
    ScriptDebuggerSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDebuggerSettings(::ScriptDebuggerSettings const&);

    MCNAPI ~ScriptDebuggerSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDebuggerSettings const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
