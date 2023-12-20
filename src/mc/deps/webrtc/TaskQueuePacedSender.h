#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/PacingController.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class DataRate; }
namespace webrtc { class DataSize; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class TaskQueueFactory; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct ProbeClusterConfig; }
// clang-format on

namespace webrtc {

class TaskQueuePacedSender {
public:
    // TaskQueuePacedSender inner types declare
    // clang-format off
    class BurstyPacerFlags;
    class SlackedPacerFlags;
    struct Stats;
    // clang-format on

    // TaskQueuePacedSender inner types define
    class BurstyPacerFlags {
    public:
        // prevent constructor by default
        BurstyPacerFlags& operator=(BurstyPacerFlags const&);
        BurstyPacerFlags(BurstyPacerFlags const&);
        BurstyPacerFlags();

    public:
        // NOLINTBEGIN
        // symbol: ??0BurstyPacerFlags@TaskQueuePacedSender@webrtc@@QEAA@AEBVFieldTrialsView@2@@Z
        MCAPI explicit BurstyPacerFlags(class webrtc::FieldTrialsView const&);

        // symbol: ??1BurstyPacerFlags@TaskQueuePacedSender@webrtc@@QEAA@XZ
        MCAPI ~BurstyPacerFlags();

        // NOLINTEND
    };

    class SlackedPacerFlags {
    public:
        // prevent constructor by default
        SlackedPacerFlags& operator=(SlackedPacerFlags const&);
        SlackedPacerFlags(SlackedPacerFlags const&);
        SlackedPacerFlags();

    public:
        // NOLINTBEGIN
        // symbol: ??0SlackedPacerFlags@TaskQueuePacedSender@webrtc@@QEAA@AEBVFieldTrialsView@2@@Z
        MCAPI explicit SlackedPacerFlags(class webrtc::FieldTrialsView const&);

        // symbol: ??1SlackedPacerFlags@TaskQueuePacedSender@webrtc@@QEAA@XZ
        MCAPI ~SlackedPacerFlags();

        // NOLINTEND
    };

    struct Stats {
    public:
        // prevent constructor by default
        Stats& operator=(Stats const&);
        Stats(Stats const&);
        Stats();
    };

public:
    // prevent constructor by default
    TaskQueuePacedSender& operator=(TaskQueuePacedSender const&);
    TaskQueuePacedSender(TaskQueuePacedSender const&);
    TaskQueuePacedSender();

public:
    // NOLINTBEGIN
    // symbol:
    // ?CreateProbeClusters@TaskQueuePacedSender@webrtc@@UEAAXV?$vector@UProbeClusterConfig@webrtc@@V?$allocator@UProbeClusterConfig@webrtc@@@std@@@std@@@Z
    MCVAPI void CreateProbeClusters(std::vector<struct webrtc::ProbeClusterConfig>);

    // symbol:
    // ?EnqueuePackets@TaskQueuePacedSender@webrtc@@UEAAXV?$vector@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@V?$allocator@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@@2@@std@@@Z
    MCVAPI void EnqueuePackets(std::vector<std::unique_ptr<class webrtc::RtpPacketToSend>>);

    // symbol: ?ExpectedQueueTime@TaskQueuePacedSender@webrtc@@UEBA?AVTimeDelta@2@XZ
    MCVAPI class webrtc::TimeDelta ExpectedQueueTime() const;

    // symbol: ?FirstSentPacketTime@TaskQueuePacedSender@webrtc@@UEBA?AV?$optional@VTimestamp@webrtc@@@std@@XZ
    MCVAPI std::optional<class webrtc::Timestamp> FirstSentPacketTime() const;

    // symbol: ?OldestPacketWaitTime@TaskQueuePacedSender@webrtc@@UEBA?AVTimeDelta@2@XZ
    MCVAPI class webrtc::TimeDelta OldestPacketWaitTime() const;

    // symbol: ?Pause@TaskQueuePacedSender@webrtc@@UEAAXXZ
    MCVAPI void Pause();

    // symbol: ?QueueSizeData@TaskQueuePacedSender@webrtc@@UEBA?AVDataSize@2@XZ
    MCVAPI class webrtc::DataSize QueueSizeData() const;

    // symbol: ?RemovePacketsForSsrc@TaskQueuePacedSender@webrtc@@UEAAXI@Z
    MCVAPI void RemovePacketsForSsrc(uint);

    // symbol: ?Resume@TaskQueuePacedSender@webrtc@@UEAAXXZ
    MCVAPI void Resume();

    // symbol: ?SetAccountForAudioPackets@TaskQueuePacedSender@webrtc@@UEAAX_N@Z
    MCVAPI void SetAccountForAudioPackets(bool);

    // symbol: ?SetCongested@TaskQueuePacedSender@webrtc@@UEAAX_N@Z
    MCVAPI void SetCongested(bool);

    // symbol: ?SetIncludeOverhead@TaskQueuePacedSender@webrtc@@UEAAXXZ
    MCVAPI void SetIncludeOverhead();

    // symbol: ?SetPacingRates@TaskQueuePacedSender@webrtc@@UEAAXVDataRate@2@0@Z
    MCVAPI void SetPacingRates(class webrtc::DataRate, class webrtc::DataRate);

    // symbol: ?SetQueueTimeLimit@TaskQueuePacedSender@webrtc@@UEAAXVTimeDelta@2@@Z
    MCVAPI void SetQueueTimeLimit(class webrtc::TimeDelta);

    // symbol: ?SetTransportOverhead@TaskQueuePacedSender@webrtc@@UEAAXVDataSize@2@@Z
    MCVAPI void SetTransportOverhead(class webrtc::DataSize);

    // symbol: ??1TaskQueuePacedSender@webrtc@@UEAA@XZ
    MCVAPI ~TaskQueuePacedSender();

    // symbol: ?EnsureStarted@TaskQueuePacedSender@webrtc@@QEAAXXZ
    MCAPI void EnsureStarted();

    // symbol:
    // ??0TaskQueuePacedSender@webrtc@@QEAA@PEAVClock@1@PEAVPacketSender@PacingController@1@AEBVFieldTrialsView@1@PEAVTaskQueueFactory@1@VTimeDelta@1@HV?$optional@VTimeDelta@webrtc@@@std@@@Z
    MCAPI
    TaskQueuePacedSender(class webrtc::Clock*, class webrtc::PacingController::PacketSender*, class webrtc::FieldTrialsView const&, class webrtc::TaskQueueFactory*, class webrtc::TimeDelta, int, std::optional<class webrtc::TimeDelta>);

    // symbol: ?kNoPacketHoldback@TaskQueuePacedSender@webrtc@@2HB
    MCAPI static int const kNoPacketHoldback;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?OnStatsUpdated@TaskQueuePacedSender@webrtc@@IEAAXAEBUStats@12@@Z
    MCAPI void OnStatsUpdated(struct webrtc::TaskQueuePacedSender::Stats const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?GetStats@TaskQueuePacedSender@webrtc@@AEBA?AUStats@12@XZ
    MCAPI struct webrtc::TaskQueuePacedSender::Stats GetStats() const;

    // symbol: ?MaybeProcessPackets@TaskQueuePacedSender@webrtc@@AEAAXVTimestamp@2@@Z
    MCAPI void MaybeProcessPackets(class webrtc::Timestamp);

    // symbol: ?UpdateStats@TaskQueuePacedSender@webrtc@@AEAAXXZ
    MCAPI void UpdateStats();

    // NOLINTEND
};

}; // namespace webrtc
