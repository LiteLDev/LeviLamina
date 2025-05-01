#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"

class IPacketLimitAlgorithm {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual uint checkPacket(::MinecraftPacketIds) = 0;

    // vIndex: 1
    virtual ~IPacketLimitAlgorithm();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
