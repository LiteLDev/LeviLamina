#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/BufferT.h"
#include "mc/external/webrtc/DtlsTransportInternal.h"
#include "mc/external/webrtc/DtlsTransportState.h"
#include "mc/external/webrtc/SSLProtocolVersion.h"
#include "mc/external/webrtc/SSLRole.h"
#include "mc/external/webrtc/Socket.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Environment; }
namespace webrtc { class IceTransportInternal; }
namespace webrtc { class PacketTransportInternal; }
namespace webrtc { class RTCCertificate; }
namespace webrtc { class RTCError; }
namespace webrtc { class ReceivedIpPacket; }
namespace webrtc { class SSLCertChain; }
namespace webrtc { struct AsyncSocketPacketOptions; }
namespace webrtc { struct CryptoOptions; }
namespace webrtc { struct NetworkRoute; }
namespace webrtc { struct SentPacketInfo; }
// clang-format on

namespace webrtc {

class DtlsTransportInternalImpl : public ::webrtc::DtlsTransportInternal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>  mUnk342014;
    ::ll::UntypedStorage<1, 1>   mUnkedcf73;
    ::ll::UntypedStorage<4, 4>   mUnkb4a5ba;
    ::ll::UntypedStorage<4, 4>   mUnkb10099;
    ::ll::UntypedStorage<8, 8>   mUnkb402b5;
    ::ll::UntypedStorage<8, 8>   mUnkb5dfdc;
    ::ll::UntypedStorage<8, 8>   mUnkb64988;
    ::ll::UntypedStorage<8, 24>  mUnka268e2;
    ::ll::UntypedStorage<8, 24>  mUnkbad7b5;
    ::ll::UntypedStorage<1, 1>   mUnk61f12c;
    ::ll::UntypedStorage<8, 8>   mUnk2fa59b;
    ::ll::UntypedStorage<4, 8>   mUnk80f641;
    ::ll::UntypedStorage<4, 4>   mUnkf569d1;
    ::ll::UntypedStorage<8, 24>  mUnk361dd3;
    ::ll::UntypedStorage<8, 32>  mUnk259bb0;
    ::ll::UntypedStorage<8, 32>  mUnk5ee899;
    ::ll::UntypedStorage<1, 1>   mUnk768f4a;
    ::ll::UntypedStorage<1, 1>   mUnk4c5992;
    ::ll::UntypedStorage<1, 1>   mUnk79e211;
    ::ll::UntypedStorage<1, 1>   mUnk777113;
    ::ll::UntypedStorage<8, 136> mUnk778eff;
    ::ll::UntypedStorage<8, 32>  mUnk30e56d;
    ::ll::UntypedStorage<1, 1>   mUnk46fbb3;
    ::ll::UntypedStorage<8, 8>   mUnk870ef6;
    // NOLINTEND

public:
    // prevent constructor by default
    DtlsTransportInternalImpl& operator=(DtlsTransportInternalImpl const&);
    DtlsTransportInternalImpl(DtlsTransportInternalImpl const&);
    DtlsTransportInternalImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DtlsTransportInternalImpl() /*override*/;

    virtual ::webrtc::DtlsTransportState dtls_state() const /*override*/;

    virtual ::std::string const& transport_name() const /*override*/;

    virtual int component() const /*override*/;

    virtual bool IsDtlsActive() const /*override*/;

    virtual bool SetLocalCertificate(::webrtc::scoped_refptr<::webrtc::RTCCertificate> const& certificate) /*override*/;

    virtual ::webrtc::scoped_refptr<::webrtc::RTCCertificate> GetLocalCertificate() const /*override*/;

    virtual bool
    SetRemoteFingerprint(::std::string_view digest_alg, uchar const* digest, uint64 digest_len) /*override*/;

    virtual ::webrtc::RTCError SetRemoteParameters(
        ::std::string_view                 digest_alg,
        uchar const*                       digest,
        uint64                             digest_len,
        ::std::optional<::webrtc::SSLRole> role
    ) /*override*/;

    virtual int SendPacket(
        char const*                               data,
        uint64                                    size,
        ::webrtc::AsyncSocketPacketOptions const& options,
        int                                       flags
    ) /*override*/;

    virtual bool GetOption(::webrtc::Socket::Option opt, int* value) /*override*/;

    virtual bool GetSslVersionBytes(int* version) const /*override*/;

    virtual ushort GetSslGroupId() const /*override*/;

    virtual bool GetSrtpCryptoSuite(int* cipher) const /*override*/;

    virtual ushort GetSslPeerSignatureAlgorithm() const /*override*/;

    virtual bool GetDtlsRole(::webrtc::SSLRole* role) const /*override*/;

    virtual bool SetDtlsRole(::webrtc::SSLRole role) /*override*/;

    virtual bool GetSslCipherSuite(int* cipher) const /*override*/;

    virtual ::std::optional<::std::string_view> GetTlsCipherSuiteName() const /*override*/;

    virtual ::std::unique_ptr<::webrtc::SSLCertChain> GetRemoteSSLCertChain() const /*override*/;

    virtual bool ExportSrtpKeyingMaterial(::webrtc::BufferT<uchar, 1>& keying_material) /*override*/;

    virtual ::webrtc::IceTransportInternal* ice_transport() /*override*/;

    virtual bool receiving() const /*override*/;

    virtual bool writable() const /*override*/;

    virtual int GetError() /*override*/;

    virtual ::std::optional<::webrtc::NetworkRoute> network_route() const /*override*/;

    virtual int SetOption(::webrtc::Socket::Option opt, int value) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ConfigureHandshakeTimeout();

    MCNAPI void ConnectToIceTransport();

    MCNAPI DtlsTransportInternalImpl(
        ::webrtc::Environment const&    env,
        ::webrtc::IceTransportInternal* ice_transport,
        ::webrtc::CryptoOptions const&  crypto_options,
        ::webrtc::SSLProtocolVersion    max_version
    );

    MCNAPI bool HandleDtlsPacket(::webrtc::ArrayView<uchar const, 18446744073709546905> payload);

    MCNAPI void MaybeStartDtls();

    MCNAPI void OnDtlsEvent(int sig, int err);

    MCNAPI void OnNetworkRouteChanged(::std::optional<::webrtc::NetworkRoute> network_route);

    MCNAPI void OnReadPacket(
        ::webrtc::PacketTransportInternal* transport,
        ::webrtc::ReceivedIpPacket const&  packet,
        bool                               piggybacked
    );

    MCNAPI void OnReadyToSend(::webrtc::PacketTransportInternal*);

    MCNAPI void OnReceivingState(::webrtc::PacketTransportInternal* transport);

    MCNAPI void OnSentPacket(::webrtc::PacketTransportInternal*, ::webrtc::SentPacketInfo const& sent_packet);

    MCNAPI void OnWritableState(::webrtc::PacketTransportInternal* transport);

    MCNAPI void PeriodicRetransmitDtlsPacketUntilDtlsConnected();

    MCNAPI bool SetupDtls();

    MCNAPI ::std::string ToString() const;

    MCNAPI void set_dtls_state(::webrtc::DtlsTransportState state);

    MCNAPI void set_writable(bool writable);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::Environment const&    env,
        ::webrtc::IceTransportInternal* ice_transport,
        ::webrtc::CryptoOptions const&  crypto_options,
        ::webrtc::SSLProtocolVersion    max_version
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

    MCNAPI bool $SetLocalCertificate(::webrtc::scoped_refptr<::webrtc::RTCCertificate> const& certificate);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RTCCertificate> $GetLocalCertificate() const;

    MCNAPI bool $SetRemoteFingerprint(::std::string_view digest_alg, uchar const* digest, uint64 digest_len);

    MCNAPI ::webrtc::RTCError $SetRemoteParameters(
        ::std::string_view                 digest_alg,
        uchar const*                       digest,
        uint64                             digest_len,
        ::std::optional<::webrtc::SSLRole> role
    );

    MCNAPI int $SendPacket(char const* data, uint64 size, ::webrtc::AsyncSocketPacketOptions const& options, int flags);

    MCNAPI bool $GetOption(::webrtc::Socket::Option opt, int* value);

    MCNAPI bool $GetSslVersionBytes(int* version) const;

    MCNAPI ushort $GetSslGroupId() const;

    MCNAPI bool $GetSrtpCryptoSuite(int* cipher) const;

    MCNAPI ushort $GetSslPeerSignatureAlgorithm() const;

    MCNAPI bool $GetDtlsRole(::webrtc::SSLRole* role) const;

    MCNAPI bool $SetDtlsRole(::webrtc::SSLRole role);

    MCNAPI bool $GetSslCipherSuite(int* cipher) const;

    MCNAPI ::std::optional<::std::string_view> $GetTlsCipherSuiteName() const;

    MCNAPI ::std::unique_ptr<::webrtc::SSLCertChain> $GetRemoteSSLCertChain() const;

    MCNAPI bool $ExportSrtpKeyingMaterial(::webrtc::BufferT<uchar, 1>& keying_material);

    MCNAPI ::webrtc::IceTransportInternal* $ice_transport();

    MCNAPI bool $receiving() const;

    MCNAPI bool $writable() const;

    MCNAPI int $GetError();

    MCNAPI ::std::optional<::webrtc::NetworkRoute> $network_route() const;

    MCNAPI int $SetOption(::webrtc::Socket::Option opt, int value);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
