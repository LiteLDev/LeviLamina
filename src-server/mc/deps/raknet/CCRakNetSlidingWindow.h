#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/uint24_t.h"

namespace RakNet {

class CCRakNetSlidingWindow {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>               MAXIMUM_MTU_INCLUDING_UDP_HEADER;
    ::ll::TypedStorage<8, 8, double>             cwnd;
    ::ll::TypedStorage<8, 8, double>             ssThresh;
    ::ll::TypedStorage<8, 8, uint64>             oldestUnsentAck;
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t> nextDatagramSequenceNumber;
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t> nextCongestionControlBlock;
    ::ll::TypedStorage<1, 1, bool>               backoffThisBlock;
    ::ll::TypedStorage<1, 1, bool>               speedUpThisBlock;
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t> expectedNextSequenceNumber;
    ::ll::TypedStorage<1, 1, bool>               _isContinuousSend;
    ::ll::TypedStorage<8, 8, double>             lastRtt;
    ::ll::TypedStorage<8, 8, double>             estimatedRTT;
    ::ll::TypedStorage<8, 8, double>             deviationRtt;
    // NOLINTEND
};

} // namespace RakNet
