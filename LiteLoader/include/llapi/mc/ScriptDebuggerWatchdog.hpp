/**
 * @file  ScriptDebuggerWatchdog.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptDebuggerWatchdog.
 *
 */
class ScriptDebuggerWatchdog {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTDEBUGGERWATCHDOG
public:
    class ScriptDebuggerWatchdog& operator=(class ScriptDebuggerWatchdog const &) = delete;
    ScriptDebuggerWatchdog(class ScriptDebuggerWatchdog const &) = delete;
    ScriptDebuggerWatchdog() = delete;
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
