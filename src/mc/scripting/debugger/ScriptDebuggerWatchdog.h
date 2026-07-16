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
    virtual ~ScriptDebuggerWatchdog() /*override*/ = default;

    virtual bool requireClose() const /*override*/;

#ifdef LL_PLAT_S
    virtual void startListenTimeout(::std::chrono::seconds duration) /*override*/;
#else // LL_PLAT_C
    virtual void startListenTimeout(::std::chrono::seconds) /*override*/;
#endif

    virtual bool listenTimeoutExpired() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI bool $requireClose() const;

    MCNAPI void $startListenTimeout(::std::chrono::seconds duration);

    MCNAPI bool $listenTimeoutExpired() const;
#endif


    // NOLINTEND
};
