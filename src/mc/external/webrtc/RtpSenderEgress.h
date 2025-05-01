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
        MCNAPI NonPacedPacketSender(::webrtc::TaskQueueBase&, ::webrtc::RtpSenderEgress*, ::webrtc::PacketSequencer*);

        MCNAPI void PrepareForSend(::webrtc::RtpPacketToSend*);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::TaskQueueBase&, ::webrtc::RtpSenderEgress*, ::webrtc::PacketSequencer*);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct Packet {
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
    // member functions
    // NOLINTBEGIN
    MCNAPI void CompleteSendPacket(::webrtc::RtpSenderEgress::Packet const&, bool);

    MCNAPI ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> FetchFecPackets();

    MCNAPI void ForceIncludeSendPacketsInAllocation(bool);

    MCNAPI void GetDataCounters(::webrtc::StreamDataCounters*, ::webrtc::StreamDataCounters*) const;

    MCNAPI ::webrtc::RtpSendRates GetSendRates(::webrtc::Timestamp) const;

    MCNAPI ::std::vector<::webrtc::RtpSequenceNumberMap::Info>
        GetSentRtpPacketInfos(::rtc::ArrayView<ushort const>) const;

    MCNAPI bool MediaHasBeenSent() const;

    MCNAPI void OnAbortedRetransmissions(::rtc::ArrayView<ushort const>);

    MCNAPI void OnBatchComplete();

    MCNAPI void PeriodicUpdate();

    MCNAPI RtpSenderEgress(::webrtc::RtpRtcpInterface::Configuration const&, ::webrtc::RtpPacketHistory*);

    MCNAPI void SendPacket(::std::unique_ptr<::webrtc::RtpPacketToSend>, ::webrtc::PacedPacketInfo const&);

    MCNAPI bool
    SendPacketToNetwork(::webrtc::RtpPacketToSend const&, ::webrtc::PacketOptions const&, ::webrtc::PacedPacketInfo const&);

    MCNAPI void SetFecProtectionParameters(::webrtc::FecProtectionParams const&, ::webrtc::FecProtectionParams const&);

    MCNAPI void SetTimestampOffset(uint);

    MCNAPI void
        UpdateRtpStats(::webrtc::Timestamp, uint, ::webrtc::RtpPacketMediaType, ::webrtc::RtpPacketCounter, uint64);

    MCNAPI ~RtpSenderEgress();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RtpRtcpInterface::Configuration const&, ::webrtc::RtpPacketHistory*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
