#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ProfilerLiteTelemetry.h"

struct DiagnosticsEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 48, ::ProfilerLiteTelemetry> mTelemetry;
    ::ll::TypedStorage<8, 32, ::std::string>           mPlayerName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DiagnosticsEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
