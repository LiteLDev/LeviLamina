#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/IScriptDebuggerWatchdog.h"

class ScriptDebuggerWatchdog : public ::IScriptDebuggerWatchdog {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk636604;
    ::ll::UntypedStorage<8, 8> mUnkf9b3b7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebuggerWatchdog& operator=(ScriptDebuggerWatchdog const&);
    ScriptDebuggerWatchdog(ScriptDebuggerWatchdog const&);
    ScriptDebuggerWatchdog();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptDebuggerWatchdog() /*override*/ = default;

    // vIndex: 1
    virtual bool requireClose() const /*override*/;

    // vIndex: 2
    virtual void startListenTimeout(::std::chrono::seconds duration) /*override*/;

    // vIndex: 3
    virtual bool listenTimeoutExpired() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $requireClose() const;

    MCNAPI void $startListenTimeout(::std::chrono::seconds duration);

    MCNAPI bool $listenTimeoutExpired() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
