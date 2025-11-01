#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScriptDebuggerWatchdog {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IScriptDebuggerWatchdog() = default;

    // vIndex: 1
    virtual bool requireClose() const = 0;

    // vIndex: 2
    virtual void startListenTimeout(::std::chrono::seconds) = 0;

    // vIndex: 3
    virtual bool listenTimeoutExpired() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
