#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerboundDiagnosticsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnkd6e5c4;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerboundDiagnosticsPacketPayload& operator=(ServerboundDiagnosticsPacketPayload const&);
    ServerboundDiagnosticsPacketPayload(ServerboundDiagnosticsPacketPayload const&);
    ServerboundDiagnosticsPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ServerboundDiagnosticsPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
