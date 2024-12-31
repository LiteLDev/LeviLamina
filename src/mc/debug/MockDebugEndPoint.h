#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/debug/DebugEndPoint.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"

class MockDebugEndPoint : public ::DebugEndPoint {
public:
    // prevent constructor by default
    MockDebugEndPoint& operator=(MockDebugEndPoint const&);
    MockDebugEndPoint(MockDebugEndPoint const&);
    MockDebugEndPoint();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MockDebugEndPoint() /*override*/ = default;

    // vIndex: 1
    virtual void log(::LogArea const, ::LogLevel const, char const*) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
