#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptDebuggerWatchdog {
public:
    // prevent constructor by default
    ScriptDebuggerWatchdog& operator=(ScriptDebuggerWatchdog const&);
    ScriptDebuggerWatchdog(ScriptDebuggerWatchdog const&);
    ScriptDebuggerWatchdog();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ScriptDebuggerWatchdog() = default;

    // vIndex: 1, symbol: ?requireClose@ScriptDebuggerWatchdog@@UEBA_NXZ
    virtual bool requireClose() const;

    // vIndex: 2, symbol: ?startListenTimeout@ScriptDebuggerWatchdog@@UEAAXXZ
    virtual void startListenTimeout();

    // vIndex: 3, symbol: ?listenTimeoutExpired@ScriptDebuggerWatchdog@@UEBA_NXZ
    virtual bool listenTimeoutExpired() const;

    // NOLINTEND
};
