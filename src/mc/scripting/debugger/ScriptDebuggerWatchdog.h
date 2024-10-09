#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/IScriptDebuggerWatchdog.h"

class ScriptDebuggerWatchdog : public ::IScriptDebuggerWatchdog {
public:
    // prevent constructor by default
    ScriptDebuggerWatchdog& operator=(ScriptDebuggerWatchdog const&);
    ScriptDebuggerWatchdog(ScriptDebuggerWatchdog const&);
    ScriptDebuggerWatchdog();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptDebuggerWatchdog() = default;

    // vIndex: 1
    virtual bool requireClose() const;

    // vIndex: 2
    virtual void startListenTimeout(std::chrono::seconds duration);

    // vIndex: 3
    virtual bool listenTimeoutExpired() const;

    // NOLINTEND
};
