#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct uint24_t; }
// clang-format on

namespace RakNet {

class CCRakNetSlidingWindow {
public:
    // prevent constructor by default
    CCRakNetSlidingWindow& operator=(CCRakNetSlidingWindow const&);
    CCRakNetSlidingWindow(CCRakNetSlidingWindow const&);

public:
    // NOLINTBEGIN
    MCAPI CCRakNetSlidingWindow();

    MCAPI struct RakNet::uint24_t GetAndIncrementNextDatagramSequenceNumber();

    MCAPI uint64 GetBytesPerSecondLimitByCongestionControl() const;

    MCAPI uint GetMTU() const;

    MCAPI struct RakNet::uint24_t GetNextDatagramSequenceNumber();

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

    MCAPI void OnAck(
        uint64                  curTime,
        uint64                  rtt,
        bool                    hasBAndAS,
        double                  _B,
        double                  _AS,
        double                  totalUserDataBytesAcked,
        bool                    isContinuousSend,
        struct RakNet::uint24_t sequenceNumber
    );

    MCAPI bool OnGotPacket(
        struct RakNet::uint24_t datagramSequenceNumber,
        bool                    isContinuousSend,
        uint64                  curTime,
        uint                    sizeInBytes,
        uint*                   skippedMessageCount
    );

    MCAPI void OnGotPacketPair(struct RakNet::uint24_t datagramSequenceNumber, uint sizeInBytes, uint64 curTime);

    MCAPI void OnNAK(uint64 curTime, struct RakNet::uint24_t nakSequenceNumber);

    MCAPI void OnResend(uint64 curTime, uint64 nextActionTime);

    MCAPI void OnSendAck(uint64 curTime, uint numBytes);

    MCAPI void OnSendAckGetBAndAS(uint64 curTime, bool* hasBAndAS, double* _B, double* _AS);

    MCAPI void OnSendBytes(uint64 curTime, uint numBytes);

    MCAPI bool ShouldSendACKs(uint64 curTime, uint64 estimatedTimeToNextTick);

    MCAPI void Update(uint64 curTime, bool hasDataToSendOrResend);

    MCAPI ~CCRakNetSlidingWindow();

    MCAPI static bool LessThan(struct RakNet::uint24_t a, struct RakNet::uint24_t b);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool IsInSlowStart() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace RakNet
