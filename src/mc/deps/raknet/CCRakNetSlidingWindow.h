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
    /**
     * @symbol ??0CCRakNetSlidingWindow\@RakNet\@\@QEAA\@XZ
     */
    MCAPI CCRakNetSlidingWindow(); // NOLINT
    /**
     * @symbol ?GetAndIncrementNextDatagramSequenceNumber\@CCRakNetSlidingWindow\@RakNet\@\@QEAA?AUuint24_t\@2\@XZ
     */
    MCAPI struct RakNet::uint24_t GetAndIncrementNextDatagramSequenceNumber(); // NOLINT
    /**
     * @symbol ?GetBytesPerSecondLimitByCongestionControl\@CCRakNetSlidingWindow\@RakNet\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 GetBytesPerSecondLimitByCongestionControl() const; // NOLINT
    /**
     * @symbol ?GetMTU\@CCRakNetSlidingWindow\@RakNet\@\@QEBAIXZ
     */
    MCAPI unsigned int GetMTU() const; // NOLINT
    /**
     * @symbol ?GetNextDatagramSequenceNumber\@CCRakNetSlidingWindow\@RakNet\@\@QEAA?AUuint24_t\@2\@XZ
     */
    MCAPI struct RakNet::uint24_t GetNextDatagramSequenceNumber(); // NOLINT
    /**
     * @symbol ?GetRTOForRetransmission\@CCRakNetSlidingWindow\@RakNet\@\@QEBA_KE\@Z
     */
    MCAPI unsigned __int64 GetRTOForRetransmission(unsigned char) const; // NOLINT
    /**
     * @symbol ?GetRetransmissionBandwidth\@CCRakNetSlidingWindow\@RakNet\@\@QEAAH_K0I_N\@Z
     */
    MCAPI int GetRetransmissionBandwidth(unsigned __int64, unsigned __int64, unsigned int, bool); // NOLINT
    /**
     * @symbol ?GetTransmissionBandwidth\@CCRakNetSlidingWindow\@RakNet\@\@QEAAH_K0I_N\@Z
     */
    MCAPI int GetTransmissionBandwidth(unsigned __int64, unsigned __int64, unsigned int, bool); // NOLINT
    /**
     * @symbol ?Init\@CCRakNetSlidingWindow\@RakNet\@\@QEAAX_KI\@Z
     */
    MCAPI void Init(unsigned __int64, unsigned int); // NOLINT
    /**
     * @symbol ?OnAck\@CCRakNetSlidingWindow\@RakNet\@\@QEAAX_K0_NNNN1Uuint24_t\@2\@\@Z
     */
    MCAPI void
    OnAck(unsigned __int64, unsigned __int64, bool, double, double, double, bool, struct RakNet::uint24_t); // NOLINT
    /**
     * @symbol ?OnGotPacket\@CCRakNetSlidingWindow\@RakNet\@\@QEAA_NUuint24_t\@2\@_N_KIPEAI\@Z
     */
    MCAPI bool OnGotPacket(struct RakNet::uint24_t, bool, unsigned __int64, unsigned int, unsigned int*); // NOLINT
    /**
     * @symbol ?OnGotPacketPair\@CCRakNetSlidingWindow\@RakNet\@\@QEAAXUuint24_t\@2\@I_K\@Z
     */
    MCAPI void OnGotPacketPair(struct RakNet::uint24_t, unsigned int, unsigned __int64); // NOLINT
    /**
     * @symbol ?OnNAK\@CCRakNetSlidingWindow\@RakNet\@\@QEAAX_KUuint24_t\@2\@\@Z
     */
    MCAPI void OnNAK(unsigned __int64, struct RakNet::uint24_t); // NOLINT
    /**
     * @symbol ?OnResend\@CCRakNetSlidingWindow\@RakNet\@\@QEAAX_K0\@Z
     */
    MCAPI void OnResend(unsigned __int64, unsigned __int64); // NOLINT
    /**
     * @symbol ?OnSendAck\@CCRakNetSlidingWindow\@RakNet\@\@QEAAX_KI\@Z
     */
    MCAPI void OnSendAck(unsigned __int64, unsigned int); // NOLINT
    /**
     * @symbol ?OnSendAckGetBAndAS\@CCRakNetSlidingWindow\@RakNet\@\@QEAAX_KPEA_NPEAN2\@Z
     */
    MCAPI void OnSendAckGetBAndAS(unsigned __int64, bool*, double*, double*); // NOLINT
    /**
     * @symbol ?OnSendBytes\@CCRakNetSlidingWindow\@RakNet\@\@QEAAX_KI\@Z
     */
    MCAPI void OnSendBytes(unsigned __int64, unsigned int); // NOLINT
    /**
     * @symbol ?ShouldSendACKs\@CCRakNetSlidingWindow\@RakNet\@\@QEAA_N_K0\@Z
     */
    MCAPI bool ShouldSendACKs(unsigned __int64, unsigned __int64); // NOLINT
    /**
     * @symbol ?Update\@CCRakNetSlidingWindow\@RakNet\@\@QEAAX_K_N\@Z
     */
    MCAPI void Update(unsigned __int64, bool); // NOLINT
    /**
     * @symbol ??1CCRakNetSlidingWindow\@RakNet\@\@QEAA\@XZ
     */
    MCAPI ~CCRakNetSlidingWindow(); // NOLINT
    /**
     * @symbol ?LessThan\@CCRakNetSlidingWindow\@RakNet\@\@SA_NUuint24_t\@2\@0\@Z
     */
    MCAPI static bool LessThan(struct RakNet::uint24_t, struct RakNet::uint24_t); // NOLINT

    // protected:
    /**
     * @symbol ?IsInSlowStart\@CCRakNetSlidingWindow\@RakNet\@\@IEBA_NXZ
     */
    MCAPI bool IsInSlowStart() const; // NOLINT

protected:
};

}; // namespace RakNet
