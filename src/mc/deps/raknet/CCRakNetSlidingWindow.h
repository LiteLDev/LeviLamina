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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CCRakNetSlidingWindow();

    MCAPI ::RakNet::uint24_t GetAndIncrementNextDatagramSequenceNumber();

    MCFOLD uint64 GetBytesPerSecondLimitByCongestionControl() const;

    MCFOLD uint GetMTU() const;

    MCAPI ::RakNet::uint24_t GetNextDatagramSequenceNumber();

    MCAPI uint64 GetRTOForRetransmission(uchar timesSent) const;

    MCFOLD int GetRetransmissionBandwidth(
        uint64 curTime,
        uint64 timeSinceLastTick,
        uint   unacknowledgedBytes,
        bool   isContinuousSend
    );

    MCAPI int
    GetTransmissionBandwidth(uint64 curTime, uint64 timeSinceLastTick, uint unacknowledgedBytes, bool isContinuousSend);

    MCAPI void Init(uint64 curTime, uint maxDatagramPayload);

    MCAPI bool IsInSlowStart() const;

    MCAPI void OnAck(
        uint64             curTime,
        uint64             rtt,
        bool               hasBAndAS,
        double             _B,
        double             _AS,
        double             totalUserDataBytesAcked,
        bool               isContinuousSend,
        ::RakNet::uint24_t sequenceNumber
    );

    MCAPI bool OnGotPacket(
        ::RakNet::uint24_t datagramSequenceNumber,
        bool               isContinuousSend,
        uint64             curTime,
        uint               sizeInBytes,
        uint*              skippedMessageCount
    );

    MCFOLD void OnGotPacketPair(::RakNet::uint24_t datagramSequenceNumber, uint sizeInBytes, uint64 curTime);

    MCAPI void OnNAK(uint64 curTime, ::RakNet::uint24_t nakSequenceNumber);

    MCAPI void OnResend(uint64 curTime, uint64 nextActionTime);

    MCAPI void OnSendAck(uint64 curTime, uint numBytes);

    MCAPI void OnSendAckGetBAndAS(uint64 curTime, bool* hasBAndAS, double* _B, double* _AS);

    MCFOLD void OnSendBytes(uint64 curTime, uint numBytes);

    MCAPI bool ShouldSendACKs(uint64 curTime, uint64 estimatedTimeToNextTick);

    MCFOLD void Update(uint64 curTime, bool hasDataToSendOrResend);

    MCAPI ~CCRakNetSlidingWindow();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool LessThan(::RakNet::uint24_t a, ::RakNet::uint24_t b);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace RakNet
