#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpPacketMediaType.h"
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
    class NonPacedPacketSender {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI NonPacedPacketSender(::webrtc::TaskQueueBase&, ::webrtc::RtpSenderEgress*, ::webrtc::PacketSequencer*);

        MCAPI void PrepareForSend(::webrtc::RtpPacketToSend*);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::webrtc::TaskQueueBase&, ::webrtc::RtpSenderEgress*, ::webrtc::PacketSequencer*);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

    struct Packet {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Packet();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void CompleteSendPacket(::webrtc::RtpSenderEgress::Packet const&, bool);

    MCAPI ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> FetchFecPackets();

    MCAPI void ForceIncludeSendPacketsInAllocation(bool);

    MCAPI void GetDataCounters(::webrtc::StreamDataCounters*, ::webrtc::StreamDataCounters*) const;

    MCAPI ::webrtc::RtpSendRates GetSendRates(::webrtc::Timestamp) const;

    MCAPI ::std::vector<::webrtc::RtpSequenceNumberMap::Info>
        GetSentRtpPacketInfos(::rtc::ArrayView<ushort const>) const;

    MCAPI bool MediaHasBeenSent() const;

    MCAPI void OnAbortedRetransmissions(::rtc::ArrayView<ushort const>);

    MCAPI void OnBatchComplete();

    MCAPI void PeriodicUpdate();

    MCAPI RtpSenderEgress(::webrtc::RtpRtcpInterface::Configuration const&, ::webrtc::RtpPacketHistory*);

    MCAPI void SendPacket(::std::unique_ptr<::webrtc::RtpPacketToSend>, ::webrtc::PacedPacketInfo const&);

    MCAPI bool
    SendPacketToNetwork(::webrtc::RtpPacketToSend const&, ::webrtc::PacketOptions const&, ::webrtc::PacedPacketInfo const&);

    MCAPI void SetFecProtectionParameters(::webrtc::FecProtectionParams const&, ::webrtc::FecProtectionParams const&);

    MCAPI void SetTimestampOffset(uint);

    MCAPI void
        UpdateRtpStats(::webrtc::Timestamp, uint, ::webrtc::RtpPacketMediaType, ::webrtc::RtpPacketCounter, uint64);

    MCAPI ~RtpSenderEgress();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::RtpRtcpInterface::Configuration const&, ::webrtc::RtpPacketHistory*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
