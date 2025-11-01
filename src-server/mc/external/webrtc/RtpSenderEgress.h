#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpPacketMediaType.h"
#include "mc/external/webrtc/RtpPacketSender.h"
#include "mc/external/webrtc/RtpRtcpInterface.h"
#include "mc/external/webrtc/RtpSequenceNumberMap.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class PacketSequencer; }
namespace webrtc { class RtpPacketHistory; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class RtpSendRates; }
namespace webrtc { class TaskQueueBase; }
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
    struct Packet;
    // clang-format on
    
    // RtpSenderEgress inner types define
    class NonPacedPacketSender : public ::webrtc::RtpPacketSender {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk5abf6f;
        ::ll::UntypedStorage<2, 2> mUnk6ab334;
        ::ll::UntypedStorage<8, 8> mUnk588a5b;
        ::ll::UntypedStorage<8, 8> mUnk4fe98e;
        ::ll::UntypedStorage<8, 8> mUnk88e56d;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        NonPacedPacketSender& operator=(NonPacedPacketSender const&);
        NonPacedPacketSender(NonPacedPacketSender const&);
        NonPacedPacketSender();
    
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~NonPacedPacketSender() /*override*/;
    
        // vIndex: 1
        virtual void EnqueuePackets(::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> packets) /*override*/;
    
        // vIndex: 2
        virtual void RemovePacketsForSsrc(uint ssrc) /*override*/;
        // NOLINTEND
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI NonPacedPacketSender(::webrtc::TaskQueueBase& worker_queue, ::webrtc::RtpSenderEgress* sender, ::webrtc::PacketSequencer* sequencer);
    
        MCNAPI void PrepareForSend(::webrtc::RtpPacketToSend* packet);
        // NOLINTEND
    
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::TaskQueueBase& worker_queue, ::webrtc::RtpSenderEgress* sender, ::webrtc::PacketSequencer* sequencer);
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
        // NOLINTEND
    
    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    
    };
    
    struct Packet {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnka4d386;
        ::ll::UntypedStorage<8, 24> mUnk47cf02;
        ::ll::UntypedStorage<8, 8> mUnk15f329;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Packet& operator=(Packet const&);
        Packet(Packet const&);
        Packet();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Packet();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk5c68c4;
    ::ll::UntypedStorage<8, 8> mUnk9df36d;
    ::ll::UntypedStorage<4, 4> mUnk5aef67;
    ::ll::UntypedStorage<4, 8> mUnkb3891a;
    ::ll::UntypedStorage<4, 8> mUnk11779b;
    ::ll::UntypedStorage<1, 1> mUnk632dc1;
    ::ll::UntypedStorage<8, 8> mUnk89d12a;
    ::ll::UntypedStorage<8, 8> mUnkca0132;
    ::ll::UntypedStorage<8, 8> mUnkc6be60;
    ::ll::UntypedStorage<8, 8> mUnkae9cea;
    ::ll::UntypedStorage<1, 1> mUnk8778e3;
    ::ll::UntypedStorage<1, 1> mUnk4491d9;
    ::ll::UntypedStorage<8, 8> mUnka7b9c1;
    ::ll::UntypedStorage<2, 4> mUnkc84bcd;
    ::ll::UntypedStorage<2, 4> mUnk795ea1;
    ::ll::UntypedStorage<8, 8> mUnkd598db;
    ::ll::UntypedStorage<8, 8> mUnk569cf8;
    ::ll::UntypedStorage<8, 8> mUnk169296;
    ::ll::UntypedStorage<1, 1> mUnkbff572;
    ::ll::UntypedStorage<1, 1> mUnkb47510;
    ::ll::UntypedStorage<4, 4> mUnk817561;
    ::ll::UntypedStorage<8, 128> mUnk2bbc84;
    ::ll::UntypedStorage<8, 128> mUnkdafc53;
    ::ll::UntypedStorage<8, 24> mUnk7ab228;
    ::ll::UntypedStorage<4, 28> mUnk55caf4;
    ::ll::UntypedStorage<8, 8> mUnk1d5f6d;
    ::ll::UntypedStorage<8, 8> mUnkfc9b58;
    ::ll::UntypedStorage<8, 24> mUnke7ef3c;
    ::ll::UntypedStorage<8, 8> mUnk9d7b13;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpSenderEgress& operator=(RtpSenderEgress const&);
    RtpSenderEgress(RtpSenderEgress const&);
    RtpSenderEgress();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void CompleteSendPacket(::webrtc::RtpSenderEgress::Packet const& compound_packet, bool last_in_batch);

    MCNAPI ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> FetchFecPackets();

    MCNAPI void ForceIncludeSendPacketsInAllocation(bool part_of_allocation);

    MCNAPI void GetDataCounters(::webrtc::StreamDataCounters* rtp_stats, ::webrtc::StreamDataCounters* rtx_stats) const;

    MCNAPI ::webrtc::RtpSendRates GetSendRates(::webrtc::Timestamp now) const;

    MCNAPI ::std::vector<::webrtc::RtpSequenceNumberMap::Info> GetSentRtpPacketInfos(::rtc::ArrayView<ushort const> sequence_numbers) const;

    MCNAPI bool MediaHasBeenSent() const;

    MCNAPI void OnAbortedRetransmissions(::rtc::ArrayView<ushort const> sequence_numbers);

    MCNAPI void OnBatchComplete();

    MCNAPI void PeriodicUpdate();

    MCNAPI RtpSenderEgress(::webrtc::RtpRtcpInterface::Configuration const& config, ::webrtc::RtpPacketHistory* packet_history);

    MCNAPI void SendPacket(::std::unique_ptr<::webrtc::RtpPacketToSend> packet, ::webrtc::PacedPacketInfo const& pacing_info);

    MCNAPI bool SendPacketToNetwork(::webrtc::RtpPacketToSend const& packet, ::webrtc::PacketOptions const& options, ::webrtc::PacedPacketInfo const& pacing_info);

    MCNAPI void SetFecProtectionParameters(::webrtc::FecProtectionParams const& delta_params, ::webrtc::FecProtectionParams const& key_params);

    MCNAPI void SetTimestampOffset(uint timestamp);

    MCNAPI void UpdateRtpStats(::webrtc::Timestamp now, uint packet_ssrc, ::webrtc::RtpPacketMediaType packet_type, ::webrtc::RtpPacketCounter counter, uint64 packet_size);

    MCNAPI ~RtpSenderEgress();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RtpRtcpInterface::Configuration const& config, ::webrtc::RtpPacketHistory* packet_history);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
