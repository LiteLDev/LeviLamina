#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ProfilerLiteTelemetry;
// clang-format on

struct DiagnosticsEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 44, ::ProfilerLiteTelemetry> mTelemetry;
    ::ll::TypedStorage<8, 32, ::std::string>           mPlayerName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DiagnosticsEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
