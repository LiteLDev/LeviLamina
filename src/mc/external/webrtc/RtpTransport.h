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
    // member functions
    // NOLINTBEGIN
    MCNAPI void DemuxPacket(::rtc::CopyOnWriteBuffer, ::webrtc::Timestamp, ::rtc::EcnMarking);

    MCNAPI ::webrtc::flat_containers_internal::
        flat_tree<uint, ::webrtc::identity, ::std::less<void>, ::std::vector<uint>>
        GetSsrcsForSink(::webrtc::RtpPacketSinkInterface*);

    MCNAPI bool IsTransportWritable();

    MCNAPI void MaybeSignalReadyToSend();

    MCNAPI void OnReadPacket(::rtc::PacketTransportInternal*, ::rtc::ReceivedPacket const&);

    MCNAPI void OnReadyToSend(::rtc::PacketTransportInternal*);

    MCNAPI void OnSentPacket(::rtc::PacketTransportInternal*, ::rtc::SentPacket const&);

    MCNAPI bool SendPacket(bool, ::rtc::CopyOnWriteBuffer*, ::rtc::PacketOptions const&, int);

    MCNAPI void SetReadyToSend(bool, bool);

    MCNAPI void SetRtcpPacketTransport(::rtc::PacketTransportInternal*);

    MCNAPI void SetRtpPacketTransport(::rtc::PacketTransportInternal*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
