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
    // symbol: ??0CCRakNetSlidingWindow@RakNet@@QEAA@XZ
    MCAPI CCRakNetSlidingWindow();

    // symbol: ?GetAndIncrementNextDatagramSequenceNumber@CCRakNetSlidingWindow@RakNet@@QEAA?AUuint24_t@2@XZ
    MCAPI struct RakNet::uint24_t GetAndIncrementNextDatagramSequenceNumber();

    // symbol: ?GetBytesPerSecondLimitByCongestionControl@CCRakNetSlidingWindow@RakNet@@QEBA_KXZ
    MCAPI uint64 GetBytesPerSecondLimitByCongestionControl() const;

    // symbol: ?GetMTU@CCRakNetSlidingWindow@RakNet@@QEBAIXZ
    MCAPI uint GetMTU() const;

    // symbol: ?GetNextDatagramSequenceNumber@CCRakNetSlidingWindow@RakNet@@QEAA?AUuint24_t@2@XZ
    MCAPI struct RakNet::uint24_t GetNextDatagramSequenceNumber();

    // symbol: ?GetRTOForRetransmission@CCRakNetSlidingWindow@RakNet@@QEBA_KE@Z
    MCAPI uint64 GetRTOForRetransmission(uchar) const;

    // symbol: ?GetRetransmissionBandwidth@CCRakNetSlidingWindow@RakNet@@QEAAH_K0I_N@Z
    MCAPI int GetRetransmissionBandwidth(uint64, uint64, uint, bool);

    // symbol: ?GetTransmissionBandwidth@CCRakNetSlidingWindow@RakNet@@QEAAH_K0I_N@Z
    MCAPI int GetTransmissionBandwidth(uint64, uint64, uint, bool);

    // symbol: ?Init@CCRakNetSlidingWindow@RakNet@@QEAAX_KI@Z
    MCAPI void Init(uint64, uint);

    // symbol: ?OnAck@CCRakNetSlidingWindow@RakNet@@QEAAX_K0_NNNN1Uuint24_t@2@@Z
    MCAPI void OnAck(uint64, uint64, bool, double, double, double, bool, struct RakNet::uint24_t);

    // symbol: ?OnGotPacket@CCRakNetSlidingWindow@RakNet@@QEAA_NUuint24_t@2@_N_KIPEAI@Z
    MCAPI bool OnGotPacket(struct RakNet::uint24_t, bool, uint64, uint, uint*);

    // symbol: ?OnGotPacketPair@CCRakNetSlidingWindow@RakNet@@QEAAXUuint24_t@2@I_K@Z
    MCAPI void OnGotPacketPair(struct RakNet::uint24_t, uint, uint64);

    // symbol: ?OnNAK@CCRakNetSlidingWindow@RakNet@@QEAAX_KUuint24_t@2@@Z
    MCAPI void OnNAK(uint64, struct RakNet::uint24_t);

    // symbol: ?OnResend@CCRakNetSlidingWindow@RakNet@@QEAAX_K0@Z
    MCAPI void OnResend(uint64, uint64);

    // symbol: ?OnSendAck@CCRakNetSlidingWindow@RakNet@@QEAAX_KI@Z
    MCAPI void OnSendAck(uint64, uint);

    // symbol: ?OnSendAckGetBAndAS@CCRakNetSlidingWindow@RakNet@@QEAAX_KPEA_NPEAN2@Z
    MCAPI void OnSendAckGetBAndAS(uint64, bool*, double*, double*);

    // symbol: ?OnSendBytes@CCRakNetSlidingWindow@RakNet@@QEAAX_KI@Z
    MCAPI void OnSendBytes(uint64, uint);

    // symbol: ?ShouldSendACKs@CCRakNetSlidingWindow@RakNet@@QEAA_N_K0@Z
    MCAPI bool ShouldSendACKs(uint64, uint64);

    // symbol: ?Update@CCRakNetSlidingWindow@RakNet@@QEAAX_K_N@Z
    MCAPI void Update(uint64, bool);

    // symbol: ??1CCRakNetSlidingWindow@RakNet@@QEAA@XZ
    MCAPI ~CCRakNetSlidingWindow();

    // symbol: ?LessThan@CCRakNetSlidingWindow@RakNet@@SA_NUuint24_t@2@0@Z
    MCAPI static bool LessThan(struct RakNet::uint24_t, struct RakNet::uint24_t);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?IsInSlowStart@CCRakNetSlidingWindow@RakNet@@IEBA_NXZ
    MCAPI bool IsInSlowStart() const;

    // NOLINTEND
};

}; // namespace RakNet
