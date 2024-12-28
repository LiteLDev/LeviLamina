#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/SSLHandshakeError.h"
#include "mc/external/rtc/SSLProtocolVersion.h"
#include "mc/external/webrtc/DtlsTransportState.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class IceTransportInternal; }
namespace rtc { class PacketTransportInternal; }
namespace rtc { class ReceivedPacket; }
namespace rtc { class StreamInterface; }
namespace rtc { struct NetworkRoute; }
namespace rtc { struct SentPacket; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { struct CryptoOptions; }
// clang-format on

namespace cricket {

class DtlsTransport {
public:
    // prevent constructor by default
    DtlsTransport& operator=(DtlsTransport const&);
    DtlsTransport(DtlsTransport const&);
    DtlsTransport();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void ConfigureHandshakeTimeout();

    MCAPI void ConnectToIceTransport();

    MCAPI DtlsTransport(
        ::cricket::IceTransportInternal*,
        ::webrtc::CryptoOptions const&,
        ::webrtc::RtcEventLog*,
        ::rtc::SSLProtocolVersion
    );

    MCAPI bool HandleDtlsPacket(::rtc::ArrayView<uchar const>);

    MCAPI void MaybeStartDtls();

    MCAPI void OnDtlsEvent(::rtc::StreamInterface*, int, int);

    MCAPI void OnDtlsHandshakeError(::rtc::SSLHandshakeError);

    MCAPI void OnNetworkRouteChanged(::std::optional<::rtc::NetworkRoute>);

    MCAPI void OnReadPacket(::rtc::PacketTransportInternal*, ::rtc::ReceivedPacket const&);

    MCAPI void OnReadyToSend(::rtc::PacketTransportInternal*);

    MCAPI void OnReceivingState(::rtc::PacketTransportInternal*);

    MCAPI void OnSentPacket(::rtc::PacketTransportInternal*, ::rtc::SentPacket const&);

    MCAPI void OnWritableState(::rtc::PacketTransportInternal*);

    MCAPI bool SetupDtls();

    MCAPI ::std::string ToString() const;

    MCAPI void set_dtls_state(::webrtc::DtlsTransportState);

    MCAPI void set_receiving(bool);

    MCAPI void set_writable(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::cricket::IceTransportInternal*,
        ::webrtc::CryptoOptions const&,
        ::webrtc::RtcEventLog*,
        ::rtc::SSLProtocolVersion
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
