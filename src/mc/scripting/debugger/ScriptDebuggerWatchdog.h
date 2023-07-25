#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptDebuggerWatchdog {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTDEBUGGERWATCHDOG
public:
    ScriptDebuggerWatchdog& operator=(ScriptDebuggerWatchdog const&) = delete;
    ScriptDebuggerWatchdog(ScriptDebuggerWatchdog const&)            = delete;
    ScriptDebuggerWatchdog()                                         = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?requireClose\@ScriptDebuggerWatchdog\@\@UEBA_NXZ
     */
    virtual bool requireClose() const;
    /**
     * @vftbl 2
     * @symbol ?startListenTimeout\@ScriptDebuggerWatchdog\@\@UEAAXXZ
     */
    virtual void startListenTimeout();
    /**
     * @vftbl 3
     * @symbol ?listenTimeoutExpired\@ScriptDebuggerWatchdog\@\@UEBA_NXZ
     */
    virtual bool listenTimeoutExpired() const;
};
