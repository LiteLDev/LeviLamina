#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtpPacketMediaType.h"
#include "mc/deps/webrtc/detail/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class DataRate; }
namespace webrtc { class DataSize; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct PacedPacketInfo; }
namespace webrtc { struct ProbeClusterConfig; }
// clang-format on

namespace webrtc {

class PacingController {
public:
    // PacingController inner types declare
    // clang-format off
    class PacketSender;
    // clang-format on

    // PacingController inner types define
    class PacketSender {
    public:
        // prevent constructor by default
        PacketSender& operator=(PacketSender const&);
        PacketSender(PacketSender const&);
        PacketSender();
    };

public:
    // prevent constructor by default
    PacingController& operator=(PacingController const&);
    PacingController(PacingController const&);
    PacingController();

public:
    // NOLINTBEGIN
    // symbol:
    // ?CreateProbeClusters@PacingController@webrtc@@QEAAXV?$ArrayView@$$CBUProbeClusterConfig@webrtc@@$0?BCGH@@rtc@@@Z
    MCAPI void CreateProbeClusters(class rtc::ArrayView<struct webrtc::ProbeClusterConfig const, -4711>);

    // symbol:
    // ?EnqueuePacket@PacingController@webrtc@@QEAAXV?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@@Z
    MCAPI void EnqueuePacket(std::unique_ptr<class webrtc::RtpPacketToSend>);

    // symbol: ?ExpectedQueueTime@PacingController@webrtc@@QEBA?AVTimeDelta@2@XZ
    MCAPI class webrtc::TimeDelta ExpectedQueueTime() const;

    // symbol: ?FirstSentPacketTime@PacingController@webrtc@@QEBA?AV?$optional@VTimestamp@webrtc@@@std@@XZ
    MCAPI std::optional<class webrtc::Timestamp> FirstSentPacketTime() const;

    // symbol: ?IsProbing@PacingController@webrtc@@QEBA_NXZ
    MCAPI bool IsProbing() const;

    // symbol: ?NextSendTime@PacingController@webrtc@@QEBA?AVTimestamp@2@XZ
    MCAPI class webrtc::Timestamp NextSendTime() const;

    // symbol: ?OldestPacketEnqueueTime@PacingController@webrtc@@QEBA?AVTimestamp@2@XZ
    MCAPI class webrtc::Timestamp OldestPacketEnqueueTime() const;

    // symbol: ??0PacingController@webrtc@@QEAA@PEAVClock@1@PEAVPacketSender@01@AEBVFieldTrialsView@1@@Z
    MCAPI
    PacingController(class webrtc::Clock*, class webrtc::PacingController::PacketSender*, class webrtc::FieldTrialsView const&);

    // symbol: ?Pause@PacingController@webrtc@@QEAAXXZ
    MCAPI void Pause();

    // symbol: ?ProcessPackets@PacingController@webrtc@@QEAAXXZ
    MCAPI void ProcessPackets();

    // symbol: ?QueueSizeData@PacingController@webrtc@@QEBA?AVDataSize@2@XZ
    MCAPI class webrtc::DataSize QueueSizeData() const;

    // symbol: ?RemovePacketsForSsrc@PacingController@webrtc@@QEAAXI@Z
    MCAPI void RemovePacketsForSsrc(uint);

    // symbol: ?Resume@PacingController@webrtc@@QEAAXXZ
    MCAPI void Resume();

    // symbol: ?SetAccountForAudioPackets@PacingController@webrtc@@QEAAX_N@Z
    MCAPI void SetAccountForAudioPackets(bool);

    // symbol: ?SetCongested@PacingController@webrtc@@QEAAX_N@Z
    MCAPI void SetCongested(bool);

    // symbol: ?SetIncludeOverhead@PacingController@webrtc@@QEAAXXZ
    MCAPI void SetIncludeOverhead();

    // symbol: ?SetPacingRates@PacingController@webrtc@@QEAAXVDataRate@2@0@Z
    MCAPI void SetPacingRates(class webrtc::DataRate, class webrtc::DataRate);

    // symbol: ?SetQueueTimeLimit@PacingController@webrtc@@QEAAXVTimeDelta@2@@Z
    MCAPI void SetQueueTimeLimit(class webrtc::TimeDelta);

    // symbol: ?SetSendBurstInterval@PacingController@webrtc@@QEAAXVTimeDelta@2@@Z
    MCAPI void SetSendBurstInterval(class webrtc::TimeDelta);

    // symbol: ?SetTransportOverhead@PacingController@webrtc@@QEAAXVDataSize@2@@Z
    MCAPI void SetTransportOverhead(class webrtc::DataSize);

    // symbol: ?SizeInPacketsPerRtpPacketMediaType@PacingController@webrtc@@QEBAAEBV?$array@H$04@std@@XZ
    MCAPI std::array<int, 5> const& SizeInPacketsPerRtpPacketMediaType() const;

    // symbol: ??1PacingController@webrtc@@QEAA@XZ
    MCAPI ~PacingController();

    // symbol: ?kMaxEarlyProbeProcessing@PacingController@webrtc@@2VTimeDelta@2@B
    MCAPI static class webrtc::TimeDelta const kMaxEarlyProbeProcessing;

    // symbol: ?kMaxExpectedQueueLength@PacingController@webrtc@@2VTimeDelta@2@B
    MCAPI static class webrtc::TimeDelta const kMaxExpectedQueueLength;

    // symbol: ?kMaxPaddingReplayDuration@PacingController@webrtc@@2VTimeDelta@2@B
    MCAPI static class webrtc::TimeDelta const kMaxPaddingReplayDuration;

    // symbol: ?kMinSleepTime@PacingController@webrtc@@2VTimeDelta@2@B
    MCAPI static class webrtc::TimeDelta const kMinSleepTime;

    // symbol: ?kPausedProcessInterval@PacingController@webrtc@@2VTimeDelta@2@B
    MCAPI static class webrtc::TimeDelta const kPausedProcessInterval;

    // symbol: ?kTargetPaddingDuration@PacingController@webrtc@@2VTimeDelta@2@B
    MCAPI static class webrtc::TimeDelta const kTargetPaddingDuration;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?CurrentTime@PacingController@webrtc@@AEBA?AVTimestamp@2@XZ
    MCAPI class webrtc::Timestamp CurrentTime() const;

    // symbol:
    // ?GetPendingPacket@PacingController@webrtc@@AEAA?AV?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@AEBUPacedPacketInfo@2@VTimestamp@2@1@Z
    MCAPI std::unique_ptr<class webrtc::RtpPacketToSend>
          GetPendingPacket(struct webrtc::PacedPacketInfo const&, class webrtc::Timestamp, class webrtc::Timestamp);

    // symbol: ?MaybeUpdateMediaRateDueToLongQueue@PacingController@webrtc@@AEAAXVTimestamp@2@@Z
    MCAPI void MaybeUpdateMediaRateDueToLongQueue(class webrtc::Timestamp);

    // symbol: ?NextUnpacedSendTime@PacingController@webrtc@@AEBA?AVTimestamp@2@XZ
    MCAPI class webrtc::Timestamp NextUnpacedSendTime() const;

    // symbol: ?OnPacketSent@PacingController@webrtc@@AEAAXW4RtpPacketMediaType@2@VDataSize@2@VTimestamp@2@@Z
    MCAPI void OnPacketSent(::webrtc::RtpPacketMediaType, class webrtc::DataSize, class webrtc::Timestamp);

    // symbol: ?PaddingToAdd@PacingController@webrtc@@AEBA?AVDataSize@2@V32@0@Z
    MCAPI class webrtc::DataSize PaddingToAdd(class webrtc::DataSize, class webrtc::DataSize) const;

    // symbol: ?ShouldSendKeepalive@PacingController@webrtc@@AEBA_NVTimestamp@2@@Z
    MCAPI bool ShouldSendKeepalive(class webrtc::Timestamp) const;

    // symbol: ?UpdateBudgetWithElapsedTime@PacingController@webrtc@@AEAAXVTimeDelta@2@@Z
    MCAPI void UpdateBudgetWithElapsedTime(class webrtc::TimeDelta);

    // symbol: ?UpdateBudgetWithSentData@PacingController@webrtc@@AEAAXVDataSize@2@@Z
    MCAPI void UpdateBudgetWithSentData(class webrtc::DataSize);

    // symbol: ?UpdatePaddingBudgetWithSentData@PacingController@webrtc@@AEAAXVDataSize@2@@Z
    MCAPI void UpdatePaddingBudgetWithSentData(class webrtc::DataSize);

    // symbol: ?UpdateTimeAndGetElapsed@PacingController@webrtc@@AEAA?AVTimeDelta@2@VTimestamp@2@@Z
    MCAPI class webrtc::TimeDelta UpdateTimeAndGetElapsed(class webrtc::Timestamp);

    // NOLINTEND
};

}; // namespace webrtc
