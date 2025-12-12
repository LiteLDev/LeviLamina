#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DebugInfoPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke1a4f0;
    ::ll::UntypedStorage<8, 8>  mUnkabf8fb;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugInfoPacketPayload& operator=(DebugInfoPacketPayload const&);
    DebugInfoPacketPayload(DebugInfoPacketPayload const&);
    DebugInfoPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::DebugInfoPacketPayload& operator=(::DebugInfoPacketPayload&&);

    MCNAPI ~DebugInfoPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
