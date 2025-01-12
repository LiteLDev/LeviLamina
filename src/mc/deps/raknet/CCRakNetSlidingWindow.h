#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct uint24_t; }
// clang-format on

namespace RakNet {

class CCRakNetSlidingWindow {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2e0f9a;
    ::ll::UntypedStorage<8, 8> mUnk846891;
    ::ll::UntypedStorage<8, 8> mUnkb39eb2;
    ::ll::UntypedStorage<8, 8> mUnk8c72c9;
    ::ll::UntypedStorage<4, 4> mUnkcf834e;
    ::ll::UntypedStorage<4, 4> mUnkd6b664;
    ::ll::UntypedStorage<1, 1> mUnk67a9a0;
    ::ll::UntypedStorage<1, 1> mUnk98f1e3;
    ::ll::UntypedStorage<4, 4> mUnk6f8553;
    ::ll::UntypedStorage<1, 1> mUnkc93317;
    ::ll::UntypedStorage<8, 8> mUnk702c03;
    ::ll::UntypedStorage<8, 8> mUnkdc0a92;
    ::ll::UntypedStorage<8, 8> mUnk40bbbc;
    // NOLINTEND

public:
    // prevent constructor by default
    CCRakNetSlidingWindow& operator=(CCRakNetSlidingWindow const&);
    CCRakNetSlidingWindow(CCRakNetSlidingWindow const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CCRakNetSlidingWindow();

    MCAPI ::RakNet::uint24_t GetAndIncrementNextDatagramSequenceNumber();

    MCFOLD uint64 GetBytesPerSecondLimitByCongestionControl() const;

    MCFOLD uint GetMTU() const;

    MCAPI ::RakNet::uint24_t GetNextDatagramSequenceNumber();

    MCAPI uint64 GetRTOForRetransmission(uchar timesSent) const;

    MCAPI int GetRetransmissionBandwidth(
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
