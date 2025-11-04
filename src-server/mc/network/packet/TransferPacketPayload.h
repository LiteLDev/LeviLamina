#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TransferPacketPayload {
public:
    ::std::string mDestination;
    ushort        mDestinationPort;
    bool          mReloadWorld;
};
