#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpPacketMediaType.h"

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
    struct Configuration;
    class PacketSender;
    // clang-format on
    
    // PacingController inner types define
    class PacketSender {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~PacketSender() = default;
    
        // vIndex: 1
        virtual void SendPacket(::std::unique_ptr<::webrtc::RtpPacketToSend>, ::webrtc::PacedPacketInfo const&) = 0;
    
        // vIndex: 2
        virtual ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> FetchFec() = 0;
    
        // vIndex: 3
        virtual ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> GeneratePadding(::webrtc::DataSize) = 0;
    
        // vIndex: 4
        virtual void OnBatchComplete();
    
        // vIndex: 5
        virtual void OnAbortedRetransmissions(uint, ::rtc::ArrayView<ushort const>);
    
        // vIndex: 6
        virtual ::std::optional<uint> GetRtxSsrcForMedia(uint) const;
        // NOLINTEND
    
    public:
        // virtual function thunks
        // NOLINTBEGIN
    
        // NOLINTEND
    
    };
    
    struct Configuration {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk703ea9;
        ::ll::UntypedStorage<8, 8> mUnkde7747;
        ::ll::UntypedStorage<1, 1> mUnkec1792;
        ::ll::UntypedStorage<1, 1> mUnkb121b9;
        ::ll::UntypedStorage<8, 24> mUnkc3b600;
        ::ll::UntypedStorage<8, 8> mUnke6522a;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Configuration& operator=(Configuration const&);
        Configuration(Configuration const&);
        Configuration();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka88eef;
    ::ll::UntypedStorage<8, 8> mUnk53e6d5;
    ::ll::UntypedStorage<8, 8> mUnkaa4288;
    ::ll::UntypedStorage<1, 1> mUnk1f6b2d;
    ::ll::UntypedStorage<1, 1> mUnk7939ad;
    ::ll::UntypedStorage<1, 1> mUnkec2099;
    ::ll::UntypedStorage<1, 1> mUnk234760;
    ::ll::UntypedStorage<1, 1> mUnk439263;
    ::ll::UntypedStorage<1, 1> mUnk91a67a;
    ::ll::UntypedStorage<8, 8> mUnkc4a3b5;
    ::ll::UntypedStorage<8, 8> mUnkceb89b;
    ::ll::UntypedStorage<8, 8> mUnkd9ba32;
    ::ll::UntypedStorage<8, 8> mUnk108fe2;
    ::ll::UntypedStorage<1, 1> mUnk2309ca;
    ::ll::UntypedStorage<8, 8> mUnk2171d3;
    ::ll::UntypedStorage<8, 8> mUnkc75b45;
    ::ll::UntypedStorage<8, 8> mUnk748863;
    ::ll::UntypedStorage<8, 8> mUnk28105c;
    ::ll::UntypedStorage<8, 8> mUnk339522;
    ::ll::UntypedStorage<8, 304> mUnk36dce0;
    ::ll::UntypedStorage<1, 1> mUnk7216c2;
    ::ll::UntypedStorage<8, 8> mUnk71fc1b;
    ::ll::UntypedStorage<8, 8> mUnk1df9c2;
    ::ll::UntypedStorage<8, 16> mUnka50fd1;
    ::ll::UntypedStorage<1, 1> mUnk6871fb;
    ::ll::UntypedStorage<8, 416> mUnk177ab6;
    ::ll::UntypedStorage<1, 1> mUnkc62527;
    ::ll::UntypedStorage<8, 8> mUnk3ae242;
    ::ll::UntypedStorage<1, 1> mUnkae566f;
    ::ll::UntypedStorage<1, 1> mUnk5f373f;
    ::ll::UntypedStorage<4, 4> mUnkd5a288;
    // NOLINTEND

public:
    // prevent constructor by default
    PacingController& operator=(PacingController const&);
    PacingController(PacingController const&);
    PacingController();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void CreateProbeClusters(::rtc::ArrayView<::webrtc::ProbeClusterConfig const> probe_cluster_configs);

    MCNAPI ::webrtc::Timestamp CurrentTime() const;

    MCNAPI void EnqueuePacket(::std::unique_ptr<::webrtc::RtpPacketToSend> packet);

    MCNAPI ::webrtc::TimeDelta ExpectedQueueTime() const;

    MCNAPI ::std::optional<::webrtc::Timestamp> FirstSentPacketTime() const;

    MCNAPI ::std::unique_ptr<::webrtc::RtpPacketToSend> GetPendingPacket(::webrtc::PacedPacketInfo const& pacing_info, ::webrtc::Timestamp target_send_time, ::webrtc::Timestamp now);

    MCNAPI bool IsProbing() const;

    MCNAPI void MaybeUpdateMediaRateDueToLongQueue(::webrtc::Timestamp now);

    MCNAPI ::webrtc::Timestamp NextSendTime() const;

    MCNAPI ::webrtc::Timestamp NextUnpacedSendTime() const;

    MCNAPI ::webrtc::Timestamp OldestPacketEnqueueTime() const;

    MCNAPI void OnPacketSent(::webrtc::RtpPacketMediaType packet_type, ::webrtc::DataSize packet_size, ::webrtc::Timestamp send_time);

    MCNAPI PacingController(::webrtc::Clock* clock, ::webrtc::PacingController::PacketSender* packet_sender, ::webrtc::FieldTrialsView const& field_trials, ::webrtc::PacingController::Configuration configuration);

    MCNAPI ::webrtc::DataSize PaddingToAdd(::webrtc::DataSize recommended_probe_size, ::webrtc::DataSize data_sent) const;

    MCNAPI void Pause();

    MCNAPI void ProcessPackets();

    MCNAPI ::webrtc::DataSize QueueSizeData() const;

    MCNAPI void RemovePacketsForSsrc(uint ssrc);

    MCNAPI void Resume();

    MCNAPI void SetAccountForAudioPackets(bool account_for_audio);

    MCNAPI void SetAllowProbeWithoutMediaPacket(bool allow);

    MCNAPI void SetCongested(bool congested);

    MCNAPI void SetIncludeOverhead();

    MCNAPI void SetPacingRates(::webrtc::DataRate pacing_rate, ::webrtc::DataRate padding_rate);

    MCNAPI void SetQueueTimeLimit(::webrtc::TimeDelta limit);

    MCNAPI void SetSendBurstInterval(::webrtc::TimeDelta burst_interval);

    MCNAPI void SetTransportOverhead(::webrtc::DataSize overhead_per_packet);

    MCNAPI bool ShouldSendKeepalive(::webrtc::Timestamp now) const;

    MCNAPI void UpdateBudgetWithElapsedTime(::webrtc::TimeDelta delta);

    MCNAPI void UpdateBudgetWithSentData(::webrtc::DataSize size);

    MCNAPI void UpdatePaddingBudgetWithSentData(::webrtc::DataSize size);

    MCNAPI ::webrtc::TimeDelta UpdateTimeAndGetElapsed(::webrtc::Timestamp now);

    MCNAPI ~PacingController();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::webrtc::TimeDelta const& kMaxEarlyProbeProcessing();

    MCNAPI static ::webrtc::TimeDelta const& kMaxPaddingReplayDuration();

    MCNAPI static ::webrtc::TimeDelta const& kMinSleepTime();

    MCNAPI static ::webrtc::TimeDelta const& kPausedProcessInterval();

    MCNAPI static ::webrtc::TimeDelta const& kTargetPaddingDuration();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Clock* clock, ::webrtc::PacingController::PacketSender* packet_sender, ::webrtc::FieldTrialsView const& field_trials, ::webrtc::PacingController::Configuration configuration);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
