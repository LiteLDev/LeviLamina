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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ScriptDebuggerSettings& operator=(ScriptDebuggerSettings const&);
    ScriptDebuggerSettings(ScriptDebuggerSettings const&);
    ScriptDebuggerSettings();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ScriptDebuggerSettings(
        bool                           allowOutbound,
        bool                           allowInbound,
        ::ScriptDebuggerAttachMode     attachMode,
        uint                           autoAttachTimeoutSec,
        bool                           forcePort,
        ::std::optional<::std::string> host,
        ::std::optional<uint>          port,
        ::std::optional<::std::string> passcode
    );

    MCNAPI ::ScriptDebuggerSettings& operator=(::ScriptDebuggerSettings&&);
#endif

    MCNAPI ~ScriptDebuggerSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        bool                           allowOutbound,
        bool                           allowInbound,
        ::ScriptDebuggerAttachMode     attachMode,
        uint                           autoAttachTimeoutSec,
        bool                           forcePort,
        ::std::optional<::std::string> host,
        ::std::optional<uint>          port,
        ::std::optional<::std::string> passcode
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
