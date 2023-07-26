#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptDebuggerWatchdog {

public:
    // prevent constructor by default
    ScriptDebuggerWatchdog& operator=(ScriptDebuggerWatchdog const&) = delete;
    ScriptDebuggerWatchdog(ScriptDebuggerWatchdog const&)            = delete;
    ScriptDebuggerWatchdog()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?requireClose\@ScriptDebuggerWatchdog\@\@UEBA_NXZ
     */
    virtual bool requireClose() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?startListenTimeout\@ScriptDebuggerWatchdog\@\@UEAAXXZ
     */
    virtual void startListenTimeout(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?listenTimeoutExpired\@ScriptDebuggerWatchdog\@\@UEBA_NXZ
     */
    virtual bool listenTimeoutExpired() const; // NOLINT
};
