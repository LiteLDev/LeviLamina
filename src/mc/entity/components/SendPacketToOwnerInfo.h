#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SendPacketToOwnerInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk19693c;
    // NOLINTEND

public:
    // prevent constructor by default
    SendPacketToOwnerInfo& operator=(SendPacketToOwnerInfo const&);
    SendPacketToOwnerInfo(SendPacketToOwnerInfo const&);
    SendPacketToOwnerInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SendPacketToOwnerInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
