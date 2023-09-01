#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptDebuggerWatchdog {
public:
    // prevent constructor by default
    ScriptDebuggerWatchdog& operator=(ScriptDebuggerWatchdog const&) = delete;
    ScriptDebuggerWatchdog(ScriptDebuggerWatchdog const&)            = delete;
    ScriptDebuggerWatchdog()                                         = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?requireClose@ScriptDebuggerWatchdog@@UEBA_NXZ
    virtual bool requireClose() const;

    // vIndex: 2, symbol: ?startListenTimeout@ScriptDebuggerWatchdog@@UEAAXXZ
    virtual void startListenTimeout();

    // vIndex: 3, symbol: ?listenTimeoutExpired@ScriptDebuggerWatchdog@@UEBA_NXZ
    virtual bool listenTimeoutExpired() const;

    // NOLINTEND
};
