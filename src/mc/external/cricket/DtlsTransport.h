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
    DtlsTransport();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ConfigureHandshakeTimeout();

    MCNAPI void ConnectToIceTransport();

    MCNAPI DtlsTransport(
        ::cricket::IceTransportInternal*,
        ::webrtc::CryptoOptions const&,
        ::webrtc::RtcEventLog*,
        ::rtc::SSLProtocolVersion
    );

    MCNAPI bool HandleDtlsPacket(::rtc::ArrayView<uchar const>);

    MCNAPI void MaybeStartDtls();

    MCNAPI void OnDtlsEvent(::rtc::StreamInterface*, int, int);

    MCNAPI void OnDtlsHandshakeError(::rtc::SSLHandshakeError);

    MCNAPI void OnNetworkRouteChanged(::std::optional<::rtc::NetworkRoute>);

    MCNAPI void OnReadPacket(::rtc::PacketTransportInternal*, ::rtc::ReceivedPacket const&);

    MCNAPI void OnReadyToSend(::rtc::PacketTransportInternal*);

    MCNAPI void OnReceivingState(::rtc::PacketTransportInternal*);

    MCNAPI void OnSentPacket(::rtc::PacketTransportInternal*, ::rtc::SentPacket const&);

    MCNAPI void OnWritableState(::rtc::PacketTransportInternal*);

    MCNAPI bool SetupDtls();

    MCNAPI ::std::string ToString() const;

    MCNAPI void set_dtls_state(::webrtc::DtlsTransportState);

    MCNAPI void set_receiving(bool);

    MCNAPI void set_writable(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::cricket::IceTransportInternal*,
        ::webrtc::CryptoOptions const&,
        ::webrtc::RtcEventLog*,
        ::rtc::SSLProtocolVersion
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
