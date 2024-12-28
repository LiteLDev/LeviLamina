#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/EcnMarking.h"
#include "mc/external/webrtc/flat_tree.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class PacketTransportInternal; }
namespace rtc { class ReceivedPacket; }
namespace rtc { struct PacketOptions; }
namespace rtc { struct SentPacket; }
namespace webrtc { class RtpPacketSinkInterface; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct identity; }
// clang-format on

namespace webrtc {

class RtpTransport {
public:
    // prevent constructor by default
    RtpTransport& operator=(RtpTransport const&);
    RtpTransport(RtpTransport const&);
    RtpTransport();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void DemuxPacket(::rtc::CopyOnWriteBuffer, ::webrtc::Timestamp, ::rtc::EcnMarking);

    MCAPI ::webrtc::flat_containers_internal::
        flat_tree<uint, ::webrtc::identity, ::std::less<void>, ::std::vector<uint>>
        GetSsrcsForSink(::webrtc::RtpPacketSinkInterface*);

    MCAPI bool IsTransportWritable();

    MCAPI void MaybeSignalReadyToSend();

    MCAPI void OnReadPacket(::rtc::PacketTransportInternal*, ::rtc::ReceivedPacket const&);

    MCAPI void OnReadyToSend(::rtc::PacketTransportInternal*);

    MCAPI void OnSentPacket(::rtc::PacketTransportInternal*, ::rtc::SentPacket const&);

    MCAPI bool SendPacket(bool, ::rtc::CopyOnWriteBuffer*, ::rtc::PacketOptions const&, int);

    MCAPI void SetReadyToSend(bool, bool);

    MCAPI void SetRtcpPacketTransport(::rtc::PacketTransportInternal*);

    MCAPI void SetRtpPacketTransport(::rtc::PacketTransportInternal*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
