#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtpPacketMediaType.h"
#include "mc/deps/webrtc/RtpPacketSender.h"
#include "mc/deps/webrtc/RtpRtcpInterface.h"
#include "mc/deps/webrtc/RtpSequenceNumberMap.h"
#include "mc/deps/webrtc/detail/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class PacketSequencer; }
namespace webrtc { class RtpPacketHistory; }
namespace webrtc { class RtpPacketSender; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class RtpSendRates; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct FecProtectionParams; }
namespace webrtc { struct PacedPacketInfo; }
namespace webrtc { struct PacketOptions; }
namespace webrtc { struct RtpPacketCounter; }
namespace webrtc { struct StreamDataCounters; }
// clang-format on

namespace webrtc {

class RtpSenderEgress {
public:
    // RtpSenderEgress inner types declare
    // clang-format off
    class NonPacedPacketSender;
    // clang-format on

    // RtpSenderEgress inner types define
    class NonPacedPacketSender : public ::webrtc::RtpPacketSender {
    public:
        // prevent constructor by default
        NonPacedPacketSender& operator=(NonPacedPacketSender const&);
        NonPacedPacketSender(NonPacedPacketSender const&);
        NonPacedPacketSender();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1NonPacedPacketSender@RtpSenderEgress@webrtc@@UEAA@XZ
        virtual ~NonPacedPacketSender();

        // vIndex: 1, symbol:
        // ?EnqueuePackets@NonPacedPacketSender@RtpSenderEgress@webrtc@@UEAAXV?$vector@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@V?$allocator@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@@2@@std@@@Z
        virtual void EnqueuePackets(std::vector<std::unique_ptr<class webrtc::RtpPacketToSend>>);

        // vIndex: 2, symbol: ?RemovePacketsForSsrc@NonPacedPacketSender@RtpSenderEgress@webrtc@@UEAAXI@Z
        virtual void RemovePacketsForSsrc(uint);

        // symbol: ??0NonPacedPacketSender@RtpSenderEgress@webrtc@@QEAA@PEAV12@PEAVPacketSequencer@2@@Z
        MCAPI NonPacedPacketSender(class webrtc::RtpSenderEgress*, class webrtc::PacketSequencer*);

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol: ?PrepareForSend@NonPacedPacketSender@RtpSenderEgress@webrtc@@AEAAXPEAVRtpPacketToSend@3@@Z
        MCAPI void PrepareForSend(class webrtc::RtpPacketToSend*);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RtpSenderEgress& operator=(RtpSenderEgress const&);
    RtpSenderEgress(RtpSenderEgress const&);
    RtpSenderEgress();

public:
    // NOLINTBEGIN
    // symbol:
    // ?FetchFecPackets@RtpSenderEgress@webrtc@@QEAA?AV?$vector@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@V?$allocator@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::unique_ptr<class webrtc::RtpPacketToSend>> FetchFecPackets();

    // symbol: ?ForceIncludeSendPacketsInAllocation@RtpSenderEgress@webrtc@@QEAAX_N@Z
    MCAPI void ForceIncludeSendPacketsInAllocation(bool);

    // symbol: ?GetDataCounters@RtpSenderEgress@webrtc@@QEBAXPEAUStreamDataCounters@2@0@Z
    MCAPI void GetDataCounters(struct webrtc::StreamDataCounters*, struct webrtc::StreamDataCounters*) const;

    // symbol: ?GetSendRates@RtpSenderEgress@webrtc@@QEBA?AVRtpSendRates@2@XZ
    MCAPI class webrtc::RtpSendRates GetSendRates() const;

    // symbol:
    // ?GetSentRtpPacketInfos@RtpSenderEgress@webrtc@@QEBA?AV?$vector@UInfo@RtpSequenceNumberMap@webrtc@@V?$allocator@UInfo@RtpSequenceNumberMap@webrtc@@@std@@@std@@V?$ArrayView@$$CBG$0?BCGH@@rtc@@@Z
    MCAPI std::vector<struct webrtc::RtpSequenceNumberMap::Info>
          GetSentRtpPacketInfos(class rtc::ArrayView<ushort const, -4711>) const;

    // symbol: ?MediaHasBeenSent@RtpSenderEgress@webrtc@@QEBA_NXZ
    MCAPI bool MediaHasBeenSent() const;

    // symbol: ?OnAbortedRetransmissions@RtpSenderEgress@webrtc@@QEAAXV?$ArrayView@$$CBG$0?BCGH@@rtc@@@Z
    MCAPI void OnAbortedRetransmissions(class rtc::ArrayView<ushort const, -4711>);

    // symbol: ??0RtpSenderEgress@webrtc@@QEAA@AEBUConfiguration@RtpRtcpInterface@1@PEAVRtpPacketHistory@1@@Z
    MCAPI RtpSenderEgress(struct webrtc::RtpRtcpInterface::Configuration const&, class webrtc::RtpPacketHistory*);

    // symbol: ?SendPacket@RtpSenderEgress@webrtc@@QEAAXPEAVRtpPacketToSend@2@AEBUPacedPacketInfo@2@@Z
    MCAPI void SendPacket(class webrtc::RtpPacketToSend*, struct webrtc::PacedPacketInfo const&);

    // symbol: ?SetFecProtectionParameters@RtpSenderEgress@webrtc@@QEAAXAEBUFecProtectionParams@2@0@Z
    MCAPI void
    SetFecProtectionParameters(struct webrtc::FecProtectionParams const&, struct webrtc::FecProtectionParams const&);

    // symbol: ?SetTimestampOffset@RtpSenderEgress@webrtc@@QEAAXI@Z
    MCAPI void SetTimestampOffset(uint);

    // symbol: ??1RtpSenderEgress@webrtc@@QEAA@XZ
    MCAPI ~RtpSenderEgress();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?AddPacketToTransportFeedback@RtpSenderEgress@webrtc@@AEAAXGAEBVRtpPacketToSend@2@AEBUPacedPacketInfo@2@@Z
    MCAPI void
    AddPacketToTransportFeedback(ushort, class webrtc::RtpPacketToSend const&, struct webrtc::PacedPacketInfo const&);

    // symbol: ?GetSendRatesLocked@RtpSenderEgress@webrtc@@AEBA?AVRtpSendRates@2@VTimestamp@2@@Z
    MCAPI class webrtc::RtpSendRates GetSendRatesLocked(class webrtc::Timestamp) const;

    // symbol: ?PeriodicUpdate@RtpSenderEgress@webrtc@@AEAAXXZ
    MCAPI void PeriodicUpdate();

    // symbol: ?RecomputeMaxSendDelay@RtpSenderEgress@webrtc@@AEAAXXZ
    MCAPI void RecomputeMaxSendDelay();

    // symbol:
    // ?SendPacketToNetwork@RtpSenderEgress@webrtc@@AEAA_NAEBVRtpPacketToSend@2@AEBUPacketOptions@2@AEBUPacedPacketInfo@2@@Z
    MCAPI bool
    SendPacketToNetwork(class webrtc::RtpPacketToSend const&, struct webrtc::PacketOptions const&, struct webrtc::PacedPacketInfo const&);

    // symbol: ?UpdateDelayStatistics@RtpSenderEgress@webrtc@@AEAAXVTimestamp@2@0I@Z
    MCAPI void UpdateDelayStatistics(class webrtc::Timestamp, class webrtc::Timestamp, uint);

    // symbol: ?UpdateOnSendPacket@RtpSenderEgress@webrtc@@AEAAXHVTimestamp@2@I@Z
    MCAPI void UpdateOnSendPacket(int, class webrtc::Timestamp, uint);

    // symbol:
    // ?UpdateRtpStats@RtpSenderEgress@webrtc@@AEAAXVTimestamp@2@IW4RtpPacketMediaType@2@URtpPacketCounter@2@_K@Z
    MCAPI void UpdateRtpStats(
        class webrtc::Timestamp,
        uint,
        ::webrtc::RtpPacketMediaType,
        struct webrtc::RtpPacketCounter,
        uint64
    );

    // NOLINTEND
};

}; // namespace webrtc
