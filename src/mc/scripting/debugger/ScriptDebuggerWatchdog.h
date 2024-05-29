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
    // vIndex: 0, symbol: __gen_??1ScriptDebuggerWatchdog@@UEAA@XZ
    virtual ~ScriptDebuggerWatchdog() = default;

    // vIndex: 1, symbol: ?requireClose@ScriptDebuggerWatchdog@@UEBA_NXZ
    virtual bool requireClose() const;

    // vIndex: 2, symbol:
    // ?startListenTimeout@ScriptDebuggerWatchdog@@UEAAXV?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@Z
    virtual void startListenTimeout(std::chrono::seconds);

    // vIndex: 3, symbol: ?listenTimeoutExpired@ScriptDebuggerWatchdog@@UEBA_NXZ
    virtual bool listenTimeoutExpired() const;

    // NOLINTEND
};
