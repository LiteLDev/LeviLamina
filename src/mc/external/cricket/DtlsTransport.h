#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/DtlsTransportInternal.h"
#include "mc/external/rtc/SSLHandshakeError.h"
#include "mc/external/rtc/SSLProtocolVersion.h"
#include "mc/external/rtc/SSLRole.h"
#include "mc/external/rtc/Socket.h"
#include "mc/external/webrtc/DtlsTransportState.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class IceTransportInternal; }
namespace rtc { class PacketTransportInternal; }
namespace rtc { class RTCCertificate; }
namespace rtc { class ReceivedPacket; }
namespace rtc { class SSLCertChain; }
namespace rtc { class StreamInterface; }
namespace rtc { struct NetworkRoute; }
namespace rtc { struct PacketOptions; }
namespace rtc { struct SentPacket; }
namespace webrtc { class RTCError; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { struct CryptoOptions; }
// clang-format on

namespace cricket {

class DtlsTransport : public ::cricket::DtlsTransportInternal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkd7362e;
    ::ll::UntypedStorage<4, 4>  mUnk84c612;
    ::ll::UntypedStorage<4, 4>  mUnk3f8dce;
    ::ll::UntypedStorage<8, 8>  mUnkc921e6;
    ::ll::UntypedStorage<8, 8>  mUnk745fa2;
    ::ll::UntypedStorage<8, 8>  mUnke36806;
    ::ll::UntypedStorage<8, 24> mUnk17b8a7;
    ::ll::UntypedStorage<1, 1>  mUnkda6491;
    ::ll::UntypedStorage<8, 8>  mUnk498d3c;
    ::ll::UntypedStorage<4, 8>  mUnkb91ba1;
    ::ll::UntypedStorage<4, 4>  mUnk6540de;
    ::ll::UntypedStorage<8, 24> mUnk9d4972;
    ::ll::UntypedStorage<8, 32> mUnk7e7427;
    ::ll::UntypedStorage<8, 24> mUnkd71b90;
    ::ll::UntypedStorage<1, 1>  mUnk1ef94d;
    ::ll::UntypedStorage<1, 1>  mUnka04d79;
    ::ll::UntypedStorage<8, 8>  mUnk93f957;
    // NOLINTEND

public:
    // prevent constructor by default
    DtlsTransport& operator=(DtlsTransport const&);
    DtlsTransport(DtlsTransport const&);
    DtlsTransport();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DtlsTransport() /*override*/;

    virtual ::webrtc::DtlsTransportState dtls_state() const /*override*/;

    virtual ::std::string const& transport_name() const /*override*/;

    virtual int component() const /*override*/;

    virtual bool IsDtlsActive() const /*override*/;

    virtual bool SetLocalCertificate(::webrtc::scoped_refptr<::rtc::RTCCertificate> const& certificate) /*override*/;

    virtual ::webrtc::scoped_refptr<::rtc::RTCCertificate> GetLocalCertificate() const /*override*/;

    virtual bool
    SetRemoteFingerprint(::std::string_view digest_alg, uchar const* digest, uint64 digest_len) /*override*/;

    virtual ::webrtc::RTCError SetRemoteParameters(
        ::std::string_view              digest_alg,
        uchar const*                    digest,
        uint64                          digest_len,
        ::std::optional<::rtc::SSLRole> role
    ) /*override*/;

    virtual int SendPacket(char const* data, uint64 size, ::rtc::PacketOptions const& options, int flags) /*override*/;

    virtual bool GetOption(::rtc::Socket::Option opt, int* value) /*override*/;

    virtual bool GetSslVersionBytes(int* version) const /*override*/;

    virtual bool GetSrtpCryptoSuite(int* cipher) /*override*/;

    virtual ushort GetSslPeerSignatureAlgorithm() const /*override*/;

    virtual bool GetDtlsRole(::rtc::SSLRole* role) const /*override*/;

    virtual bool SetDtlsRole(::rtc::SSLRole role) /*override*/;

    virtual bool GetSslCipherSuite(int* cipher) /*override*/;

    virtual ::std::unique_ptr<::rtc::SSLCertChain> GetRemoteSSLCertChain() const /*override*/;

    virtual bool ExportKeyingMaterial(
        ::std::string_view label,
        uchar const*       context,
        uint64             context_len,
        bool               use_context,
        uchar*             result,
        uint64             result_len
    ) /*override*/;

    virtual ::cricket::IceTransportInternal* ice_transport() /*override*/;

    virtual bool receiving() const /*override*/;

    virtual bool writable() const /*override*/;

    virtual int GetError() /*override*/;

    virtual ::std::optional<::rtc::NetworkRoute> network_route() const /*override*/;

    virtual int SetOption(::rtc::Socket::Option opt, int value) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ConfigureHandshakeTimeout();

    MCNAPI void ConnectToIceTransport();

    MCNAPI DtlsTransport(
        ::cricket::IceTransportInternal* ice_transport,
        ::webrtc::CryptoOptions const&   crypto_options,
        ::webrtc::RtcEventLog*           event_log,
        ::rtc::SSLProtocolVersion        max_version
    );

    MCNAPI bool HandleDtlsPacket(::rtc::ArrayView<uchar const> payload);

    MCNAPI void MaybeStartDtls();

    MCNAPI void OnDtlsEvent(::rtc::StreamInterface* dtls, int sig, int err);

    MCNAPI void OnDtlsHandshakeError(::rtc::SSLHandshakeError error);

    MCNAPI void OnNetworkRouteChanged(::std::optional<::rtc::NetworkRoute> network_route);

    MCNAPI void OnReadPacket(::rtc::PacketTransportInternal* transport, ::rtc::ReceivedPacket const& packet);

    MCNAPI void OnReadyToSend(::rtc::PacketTransportInternal* transport);

    MCNAPI void OnReceivingState(::rtc::PacketTransportInternal* transport);

    MCNAPI void OnSentPacket(::rtc::PacketTransportInternal* transport, ::rtc::SentPacket const& sent_packet);

    MCNAPI void OnWritableState(::rtc::PacketTransportInternal* transport);

    MCNAPI bool SetupDtls();

    MCNAPI ::std::string ToString() const;

    MCNAPI void set_dtls_state(::webrtc::DtlsTransportState state);

    MCNAPI void set_receiving(bool receiving);

    MCNAPI void set_writable(bool writable);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::cricket::IceTransportInternal* ice_transport,
        ::webrtc::CryptoOptions const&   crypto_options,
        ::webrtc::RtcEventLog*           event_log,
        ::rtc::SSLProtocolVersion        max_version
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
    MCNAPI ::webrtc::DtlsTransportState $dtls_state() const;

    MCNAPI ::std::string const& $transport_name() const;

    MCNAPI int $component() const;

    MCNAPI bool $IsDtlsActive() const;

    MCNAPI bool $SetLocalCertificate(::webrtc::scoped_refptr<::rtc::RTCCertificate> const& certificate);

    MCNAPI ::webrtc::scoped_refptr<::rtc::RTCCertificate> $GetLocalCertificate() const;

    MCNAPI bool $SetRemoteFingerprint(::std::string_view digest_alg, uchar const* digest, uint64 digest_len);

    MCNAPI ::webrtc::RTCError $SetRemoteParameters(
        ::std::string_view              digest_alg,
        uchar const*                    digest,
        uint64                          digest_len,
        ::std::optional<::rtc::SSLRole> role
    );

    MCNAPI int $SendPacket(char const* data, uint64 size, ::rtc::PacketOptions const& options, int flags);

    MCNAPI bool $GetOption(::rtc::Socket::Option opt, int* value);

    MCNAPI bool $GetSslVersionBytes(int* version) const;

    MCNAPI bool $GetSrtpCryptoSuite(int* cipher);

    MCNAPI ushort $GetSslPeerSignatureAlgorithm() const;

    MCNAPI bool $GetDtlsRole(::rtc::SSLRole* role) const;

    MCNAPI bool $SetDtlsRole(::rtc::SSLRole role);

    MCNAPI bool $GetSslCipherSuite(int* cipher);

    MCNAPI ::std::unique_ptr<::rtc::SSLCertChain> $GetRemoteSSLCertChain() const;

    MCNAPI bool $ExportKeyingMaterial(
        ::std::string_view label,
        uchar const*       context,
        uint64             context_len,
        bool               use_context,
        uchar*             result,
        uint64             result_len
    );

    MCNAPI ::cricket::IceTransportInternal* $ice_transport();

    MCNAPI bool $receiving() const;

    MCNAPI bool $writable() const;

    MCNAPI int $GetError();

    MCNAPI ::std::optional<::rtc::NetworkRoute> $network_route() const;

    MCNAPI int $SetOption(::rtc::Socket::Option opt, int value);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
