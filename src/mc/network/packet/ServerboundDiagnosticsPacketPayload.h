#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ProfilerLiteTelemetry.h"

struct ServerboundDiagnosticsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::ProfilerLiteTelemetry> mTelemetry;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ServerboundDiagnosticsPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
