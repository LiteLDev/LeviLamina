#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/PacingController.h"
#include "mc/external/webrtc/RtpPacketPacer.h"
#include "mc/external/webrtc/RtpPacketSender.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class DataRate; }
namespace webrtc { class DataSize; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct ProbeClusterConfig; }
// clang-format on

namespace webrtc {

class TaskQueuePacedSender : public ::webrtc::RtpPacketPacer, public ::webrtc::RtpPacketSender {
public:
    // TaskQueuePacedSender inner types declare
    // clang-format off
    struct Stats;
    // clang-format on

    // TaskQueuePacedSender inner types define
    struct Stats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkf4e8aa;
        ::ll::UntypedStorage<8, 8>  mUnk544df4;
        ::ll::UntypedStorage<8, 8>  mUnkdcd43d;
        ::ll::UntypedStorage<8, 16> mUnk374f8b;
        // NOLINTEND

    public:
        // prevent constructor by default
        Stats& operator=(Stats const&);
        Stats(Stats const&);
        Stats();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnka3b2d9;
    ::ll::UntypedStorage<8, 8>   mUnkad9e35;
    ::ll::UntypedStorage<4, 4>   mUnka0bc4e;
    ::ll::UntypedStorage<8, 904> mUnk3a4ad2;
    ::ll::UntypedStorage<8, 8>   mUnka95a72;
    ::ll::UntypedStorage<1, 1>   mUnk5d7aa4;
    ::ll::UntypedStorage<1, 1>   mUnka92525;
    ::ll::UntypedStorage<4, 12>  mUnk215241;
    ::ll::UntypedStorage<1, 1>   mUnke2a810;
    ::ll::UntypedStorage<8, 40>  mUnk432df5;
    ::ll::UntypedStorage<1, 1>   mUnk9930b7;
    ::ll::UntypedStorage<8, 8>   mUnkfc2346;
    ::ll::UntypedStorage<8, 8>   mUnkdf4e98;
    // NOLINTEND

public:
    // prevent constructor by default
    TaskQueuePacedSender& operator=(TaskQueuePacedSender const&);
    TaskQueuePacedSender(TaskQueuePacedSender const&);
    TaskQueuePacedSender();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TaskQueuePacedSender() /*override*/;

    virtual void EnqueuePackets(::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> packets) /*override*/;

    virtual void RemovePacketsForSsrc(uint ssrc) /*override*/;

    virtual void CreateProbeClusters(::std::vector<::webrtc::ProbeClusterConfig> probe_cluster_configs) /*override*/;

    virtual void Pause() /*override*/;

    virtual void Resume() /*override*/;

    virtual void SetCongested(bool congested) /*override*/;

    virtual void SetPacingRates(::webrtc::DataRate pacing_rate, ::webrtc::DataRate padding_rate) /*override*/;

    virtual void SetAccountForAudioPackets(bool account_for_audio) /*override*/;

    virtual void SetIncludeOverhead() /*override*/;

    virtual void SetTransportOverhead(::webrtc::DataSize overhead_per_packet) /*override*/;

    virtual ::webrtc::TimeDelta OldestPacketWaitTime() const /*override*/;

    virtual ::webrtc::DataSize QueueSizeData() const /*override*/;

    virtual ::std::optional<::webrtc::Timestamp> FirstSentPacketTime() const /*override*/;

    virtual ::webrtc::TimeDelta ExpectedQueueTime() const /*override*/;

    virtual void SetQueueTimeLimit(::webrtc::TimeDelta limit) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void EnsureStarted();

    MCNAPI ::webrtc::TaskQueuePacedSender::Stats GetStats() const;

    MCNAPI void MaybeProcessPackets(::webrtc::Timestamp scheduled_process_time);

    MCNAPI void MaybeScheduleProcessPackets();

    MCNAPI void OnStatsUpdated(::webrtc::TaskQueuePacedSender::Stats const& stats);

    MCNAPI void SetAllowProbeWithoutMediaPacket(bool allow);

    MCNAPI void SetSendBurstInterval(::webrtc::TimeDelta burst_interval);

    MCNAPI TaskQueuePacedSender(
        ::webrtc::Clock*                          clock,
        ::webrtc::PacingController::PacketSender* packet_sender,
        ::webrtc::FieldTrialsView const&          field_trials,
        ::webrtc::TimeDelta                       max_hold_back_window,
        int                                       max_hold_back_window_in_packets
    );

    MCNAPI void UpdateStats();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& kNoPacketHoldback();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::Clock*                          clock,
        ::webrtc::PacingController::PacketSender* packet_sender,
        ::webrtc::FieldTrialsView const&          field_trials,
        ::webrtc::TimeDelta                       max_hold_back_window,
        int                                       max_hold_back_window_in_packets
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $EnqueuePackets(::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> packets);

    MCNAPI void $RemovePacketsForSsrc(uint ssrc);

    MCNAPI void $CreateProbeClusters(::std::vector<::webrtc::ProbeClusterConfig> probe_cluster_configs);

    MCNAPI void $Pause();

    MCNAPI void $Resume();

    MCNAPI void $SetCongested(bool congested);

    MCNAPI void $SetPacingRates(::webrtc::DataRate pacing_rate, ::webrtc::DataRate padding_rate);

    MCNAPI void $SetAccountForAudioPackets(bool account_for_audio);

    MCNAPI void $SetIncludeOverhead();

    MCNAPI void $SetTransportOverhead(::webrtc::DataSize overhead_per_packet);

    MCNAPI ::webrtc::TimeDelta $OldestPacketWaitTime() const;

    MCNAPI ::webrtc::DataSize $QueueSizeData() const;

    MCNAPI ::std::optional<::webrtc::Timestamp> $FirstSentPacketTime() const;

    MCNAPI ::webrtc::TimeDelta $ExpectedQueueTime() const;

    MCNAPI void $SetQueueTimeLimit(::webrtc::TimeDelta limit);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForRtpPacketSender();

    MCNAPI static void** $vftableForRtpPacketPacer();
    // NOLINTEND
};

} // namespace webrtc
