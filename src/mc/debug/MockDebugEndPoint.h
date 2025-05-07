#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/debug/DebugEndPoint.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"

class MockDebugEndPoint : public ::DebugEndPoint {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MockDebugEndPoint() /*override*/ = default;

    // vIndex: 1
    virtual void log(::LogArea const, ::LogLevel const, char const*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
