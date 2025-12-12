#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScriptDebuggerWatchdog {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptDebuggerWatchdog() = default;

    virtual bool requireClose() const = 0;

    virtual void startListenTimeout(::std::chrono::seconds) = 0;

    virtual bool listenTimeoutExpired() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
