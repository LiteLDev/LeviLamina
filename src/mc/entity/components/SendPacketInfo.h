#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SendPacketInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke10c6f;
    // NOLINTEND

public:
    // prevent constructor by default
    SendPacketInfo& operator=(SendPacketInfo const&);
    SendPacketInfo(SendPacketInfo const&);
    SendPacketInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SendPacketInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
