#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TransferPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mDestination;
    ::ll::TypedStorage<2, 2, ushort>         mDestinationPort;
    ::ll::TypedStorage<1, 1, bool>           mReloadWorld;
    // NOLINTEND
};
