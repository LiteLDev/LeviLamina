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
    CCRakNetSlidingWindow& operator=(CCRakNetSlidingWindow const&) = delete;
    CCRakNetSlidingWindow(CCRakNetSlidingWindow const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0CCRakNetSlidingWindow\@RakNet\@\@QEAA\@XZ
     */
    MCAPI CCRakNetSlidingWindow();
    /**
     * @symbol ?GetAndIncrementNextDatagramSequenceNumber\@CCRakNetSlidingWindow\@RakNet\@\@QEAA?AUuint24_t\@2\@XZ
     */
    MCAPI struct RakNet::uint24_t GetAndIncrementNextDatagramSequenceNumber();
    /**
     * @symbol ?GetBytesPerSecondLimitByCongestionControl\@CCRakNetSlidingWindow\@RakNet\@\@QEBA_KXZ
     */
    MCAPI uint64_t GetBytesPerSecondLimitByCongestionControl() const;
    /**
     * @symbol ?GetMTU\@CCRakNetSlidingWindow\@RakNet\@\@QEBAIXZ
     */
    MCAPI unsigned int GetMTU() const;
    /**
     * @symbol ?GetNextDatagramSequenceNumber\@CCRakNetSlidingWindow\@RakNet\@\@QEAA?AUuint24_t\@2\@XZ
     */
    MCAPI struct RakNet::uint24_t GetNextDatagramSequenceNumber();
    /**
     * @symbol ?GetRTOForRetransmission\@CCRakNetSlidingWindow\@RakNet\@\@QEBA_KE\@Z
     */
    MCAPI uint64_t GetRTOForRetransmission(unsigned char) const;
    /**
     * @symbol ?GetRetransmissionBandwidth\@CCRakNetSlidingWindow\@RakNet\@\@QEAAH_K0I_N\@Z
     */
    MCAPI int GetRetransmissionBandwidth(uint64_t, uint64_t, unsigned int, bool);
    /**
     * @symbol ?GetTransmissionBandwidth\@CCRakNetSlidingWindow\@RakNet\@\@QEAAH_K0I_N\@Z
     */
    MCAPI int GetTransmissionBandwidth(uint64_t, uint64_t, unsigned int, bool);
    /**
     * @symbol ?Init\@CCRakNetSlidingWindow\@RakNet\@\@QEAAX_KI\@Z
     */
    MCAPI void Init(uint64_t, unsigned int);
    /**
     * @symbol ?LessThan\@CCRakNetSlidingWindow\@RakNet\@\@SA_NUuint24_t\@2\@0\@Z
     */
    MCAPI static bool LessThan(struct RakNet::uint24_t, struct RakNet::uint24_t);
    /**
     * @symbol ?OnAck\@CCRakNetSlidingWindow\@RakNet\@\@QEAAX_K0_NNNN1Uuint24_t\@2\@\@Z
     */
    MCAPI void OnAck(uint64_t, uint64_t, bool, double, double, double, bool, struct RakNet::uint24_t);
    /**
     * @symbol ?OnGotPacket\@CCRakNetSlidingWindow\@RakNet\@\@QEAA_NUuint24_t\@2\@_N_KIPEAI\@Z
     */
    MCAPI bool OnGotPacket(struct RakNet::uint24_t, bool, uint64_t, unsigned int, unsigned int*);
    /**
     * @symbol ?OnGotPacketPair\@CCRakNetSlidingWindow\@RakNet\@\@QEAAXUuint24_t\@2\@I_K\@Z
     */
    MCAPI void OnGotPacketPair(struct RakNet::uint24_t, unsigned int, uint64_t);
    /**
     * @symbol ?OnNAK\@CCRakNetSlidingWindow\@RakNet\@\@QEAAX_KUuint24_t\@2\@\@Z
     */
    MCAPI void OnNAK(uint64_t, struct RakNet::uint24_t);
    /**
     * @symbol ?OnResend\@CCRakNetSlidingWindow\@RakNet\@\@QEAAX_K0\@Z
     */
    MCAPI void OnResend(uint64_t, uint64_t);
    /**
     * @symbol ?OnSendAck\@CCRakNetSlidingWindow\@RakNet\@\@QEAAX_KI\@Z
     */
    MCAPI void OnSendAck(uint64_t, unsigned int);
    /**
     * @symbol ?OnSendAckGetBAndAS\@CCRakNetSlidingWindow\@RakNet\@\@QEAAX_KPEA_NPEAN2\@Z
     */
    MCAPI void OnSendAckGetBAndAS(uint64_t, bool*, double*, double*);
    /**
     * @symbol ?OnSendBytes\@CCRakNetSlidingWindow\@RakNet\@\@QEAAX_KI\@Z
     */
    MCAPI void OnSendBytes(uint64_t, unsigned int);
    /**
     * @symbol ?ShouldSendACKs\@CCRakNetSlidingWindow\@RakNet\@\@QEAA_N_K0\@Z
     */
    MCAPI bool ShouldSendACKs(uint64_t, uint64_t);
    /**
     * @symbol ?Update\@CCRakNetSlidingWindow\@RakNet\@\@QEAAX_K_N\@Z
     */
    MCAPI void Update(uint64_t, bool);
    /**
     * @symbol ??1CCRakNetSlidingWindow\@RakNet\@\@QEAA\@XZ
     */
    MCAPI ~CCRakNetSlidingWindow();
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?IsInSlowStart\@CCRakNetSlidingWindow\@RakNet\@\@IEBA_NXZ
     */
    MCAPI bool IsInSlowStart() const;
    // NOLINTEND
};

}; // namespace RakNet
