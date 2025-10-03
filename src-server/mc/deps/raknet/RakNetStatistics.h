#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RakNetStatistics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, uint64[7]> valueOverLastSecond;
    ::ll::TypedStorage<8, 56, uint64[7]> runningTotal;
    ::ll::TypedStorage<8, 8, uint64>     connectionStartTime;
    ::ll::TypedStorage<1, 1, bool>       isLimitedByCongestionControl;
    ::ll::TypedStorage<8, 8, uint64>     BPSLimitByCongestionControl;
    ::ll::TypedStorage<1, 1, bool>       isLimitedByOutgoingBandwidthLimit;
    ::ll::TypedStorage<8, 8, uint64>     BPSLimitByOutgoingBandwidthLimit;
    ::ll::TypedStorage<4, 16, uint[4]>   messageInSendBuffer;
    ::ll::TypedStorage<8, 32, double[4]> bytesInSendBuffer;
    ::ll::TypedStorage<4, 4, uint>       messagesInResendBuffer;
    ::ll::TypedStorage<8, 8, uint64>     bytesInResendBuffer;
    ::ll::TypedStorage<4, 4, float>      packetlossLastSecond;
    ::ll::TypedStorage<4, 4, float>      packetlossTotal;
    // NOLINTEND
};

} // namespace RakNet
