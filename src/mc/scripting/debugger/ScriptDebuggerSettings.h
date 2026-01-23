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
    ScriptDebuggerSettings(ScriptDebuggerSettings const&);
    ScriptDebuggerSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ScriptDebuggerSettings(
        bool                           allowOutbound,
        bool                           allowInbound,
        ::ScriptDebuggerAttachMode     attachMode,
        uint                           autoAttachTimeoutSec,
        bool                           forcePort,
        ::std::optional<::std::string> host,
        ::std::optional<uint>          port,
        ::std::optional<::std::string> passcode
    );

    MCNAPI_C ::ScriptDebuggerSettings& operator=(::ScriptDebuggerSettings&&);

    MCNAPI ~ScriptDebuggerSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        bool                           allowOutbound,
        bool                           allowInbound,
        ::ScriptDebuggerAttachMode     attachMode,
        uint                           autoAttachTimeoutSec,
        bool                           forcePort,
        ::std::optional<::std::string> host,
        ::std::optional<uint>          port,
        ::std::optional<::std::string> passcode
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
