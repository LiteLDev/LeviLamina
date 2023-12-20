#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/DtlsTransportState.h"
#include "mc/deps/webrtc/detail/DtlsTransportInternal.h"
#include "mc/deps/webrtc/detail/SSLHandshakeError.h"
#include "mc/deps/webrtc/detail/SSLProtocolVersion.h"
#include "mc/deps/webrtc/detail/SSLRole.h"
#include "mc/deps/webrtc/detail/Socket.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class DtlsTransportInternal; }
namespace cricket { class IceTransportInternal; }
namespace rtc { class PacketTransportInternal; }
namespace rtc { class RTCCertificate; }
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
    // prevent constructor by default
    DtlsTransport& operator=(DtlsTransport const&);
    DtlsTransport(DtlsTransport const&);
    DtlsTransport();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DtlsTransport@cricket@@UEAA@XZ
    virtual ~DtlsTransport();

    // vIndex: 1, symbol:
    // ?transport_name@DtlsTransport@cricket@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& transport_name() const;

    // vIndex: 2, symbol: ?writable@DtlsTransport@cricket@@UEBA_NXZ
    virtual bool writable() const;

    // vIndex: 3, symbol: ?receiving@DtlsTransport@cricket@@UEBA_NXZ
    virtual bool receiving() const;

    // vIndex: 4, symbol: ?SendPacket@DtlsTransport@cricket@@UEAAHPEBD_KAEBUPacketOptions@rtc@@H@Z
    virtual int SendPacket(char const*, uint64, struct rtc::PacketOptions const&, int);

    // vIndex: 5, symbol: ?SetOption@DtlsTransport@cricket@@UEAAHW4Option@Socket@rtc@@H@Z
    virtual int SetOption(::rtc::Socket::Option, int);

    // vIndex: 6, symbol: ?GetOption@DtlsTransport@cricket@@UEAA_NW4Option@Socket@rtc@@PEAH@Z
    virtual bool GetOption(::rtc::Socket::Option, int*);

    // vIndex: 7, symbol: ?GetError@DtlsTransport@cricket@@UEAAHXZ
    virtual int GetError();

    // vIndex: 8, symbol: ?network_route@DtlsTransport@cricket@@UEBA?AV?$optional@UNetworkRoute@rtc@@@std@@XZ
    virtual std::optional<struct rtc::NetworkRoute> network_route() const;

    // vIndex: 9, symbol: ?dtls_state@DtlsTransport@cricket@@UEBA?AW4DtlsTransportState@webrtc@@XZ
    virtual ::webrtc::DtlsTransportState dtls_state() const;

    // vIndex: 10, symbol: ?component@DtlsTransport@cricket@@UEBAHXZ
    virtual int component() const;

    // vIndex: 11, symbol: ?IsDtlsActive@DtlsTransport@cricket@@UEBA_NXZ
    virtual bool IsDtlsActive() const;

    // vIndex: 12, symbol: ?GetDtlsRole@DtlsTransport@cricket@@UEBA_NPEAW4SSLRole@rtc@@@Z
    virtual bool GetDtlsRole(::rtc::SSLRole*) const;

    // vIndex: 13, symbol: ?SetDtlsRole@DtlsTransport@cricket@@UEAA_NW4SSLRole@rtc@@@Z
    virtual bool SetDtlsRole(::rtc::SSLRole);

    // vIndex: 14, symbol: ?GetSslVersionBytes@DtlsTransport@cricket@@UEBA_NPEAH@Z
    virtual bool GetSslVersionBytes(int*) const;

    // vIndex: 15, symbol: ?GetSrtpCryptoSuite@DtlsTransport@cricket@@UEAA_NPEAH@Z
    virtual bool GetSrtpCryptoSuite(int*);

    // vIndex: 16, symbol: ?GetSslCipherSuite@DtlsTransport@cricket@@UEAA_NPEAH@Z
    virtual bool GetSslCipherSuite(int*);

    // vIndex: 17, symbol:
    // ?GetLocalCertificate@DtlsTransport@cricket@@UEBA?AV?$scoped_refptr@VRTCCertificate@rtc@@@rtc@@XZ
    virtual class rtc::scoped_refptr<class rtc::RTCCertificate> GetLocalCertificate() const;

    // vIndex: 18, symbol:
    // ?SetLocalCertificate@DtlsTransport@cricket@@UEAA_NAEBV?$scoped_refptr@VRTCCertificate@rtc@@@rtc@@@Z
    virtual bool SetLocalCertificate(class rtc::scoped_refptr<class rtc::RTCCertificate> const&);

    // vIndex: 19, symbol:
    // ?GetRemoteSSLCertChain@DtlsTransport@cricket@@UEBA?AV?$unique_ptr@VSSLCertChain@rtc@@U?$default_delete@VSSLCertChain@rtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class rtc::SSLCertChain> GetRemoteSSLCertChain() const;

    // vIndex: 20, symbol:
    // ?ExportKeyingMaterial@DtlsTransport@cricket@@UEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEBE_K_NPEAE2@Z
    virtual bool ExportKeyingMaterial(std::string_view, uchar const*, uint64, bool, uchar*, uint64);

    // vIndex: 21, symbol:
    // ?SetRemoteFingerprint@DtlsTransport@cricket@@UEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEBE_K@Z
    virtual bool SetRemoteFingerprint(std::string_view, uchar const*, uint64);

    // vIndex: 22, symbol:
    // ?SetRemoteParameters@DtlsTransport@cricket@@UEAA?AVRTCError@webrtc@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@PEBE_KV?$optional@W4SSLRole@rtc@@@6@@Z
    virtual class webrtc::RTCError
    SetRemoteParameters(std::string_view, uchar const*, uint64, std::optional<::rtc::SSLRole>);

    // vIndex: 23, symbol: ?ice_transport@DtlsTransport@cricket@@UEAAPEAVIceTransportInternal@2@XZ
    virtual class cricket::IceTransportInternal* ice_transport();

    // symbol:
    // ??0DtlsTransport@cricket@@QEAA@PEAVIceTransportInternal@1@AEBUCryptoOptions@webrtc@@PEAVRtcEventLog@4@W4SSLProtocolVersion@rtc@@@Z
    MCAPI DtlsTransport(
        class cricket::IceTransportInternal*,
        struct webrtc::CryptoOptions const&,
        class webrtc::RtcEventLog*,
        ::rtc::SSLProtocolVersion
    );

    // symbol: ?ToString@DtlsTransport@cricket@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToString() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ConfigureHandshakeTimeout@DtlsTransport@cricket@@AEAAXXZ
    MCAPI void ConfigureHandshakeTimeout();

    // symbol: ?ConnectToIceTransport@DtlsTransport@cricket@@AEAAXXZ
    MCAPI void ConnectToIceTransport();

    // symbol: ?HandleDtlsPacket@DtlsTransport@cricket@@AEAA_NPEBD_K@Z
    MCAPI bool HandleDtlsPacket(char const*, uint64);

    // symbol: ?MaybeStartDtls@DtlsTransport@cricket@@AEAAXXZ
    MCAPI void MaybeStartDtls();

    // symbol: ?OnDtlsEvent@DtlsTransport@cricket@@AEAAXPEAVStreamInterface@rtc@@HH@Z
    MCAPI void OnDtlsEvent(class rtc::StreamInterface*, int, int);

    // symbol: ?OnDtlsHandshakeError@DtlsTransport@cricket@@AEAAXW4SSLHandshakeError@rtc@@@Z
    MCAPI void OnDtlsHandshakeError(::rtc::SSLHandshakeError);

    // symbol: ?OnNetworkRouteChanged@DtlsTransport@cricket@@AEAAXV?$optional@UNetworkRoute@rtc@@@std@@@Z
    MCAPI void OnNetworkRouteChanged(std::optional<struct rtc::NetworkRoute>);

    // symbol: ?OnReadPacket@DtlsTransport@cricket@@AEAAXPEAVPacketTransportInternal@rtc@@PEBD_KAEB_JH@Z
    MCAPI void OnReadPacket(class rtc::PacketTransportInternal*, char const*, uint64, int64 const&, int);

    // symbol: ?OnReadyToSend@DtlsTransport@cricket@@AEAAXPEAVPacketTransportInternal@rtc@@@Z
    MCAPI void OnReadyToSend(class rtc::PacketTransportInternal*);

    // symbol: ?OnReceivingState@DtlsTransport@cricket@@AEAAXPEAVPacketTransportInternal@rtc@@@Z
    MCAPI void OnReceivingState(class rtc::PacketTransportInternal*);

    // symbol: ?OnSentPacket@DtlsTransport@cricket@@AEAAXPEAVPacketTransportInternal@rtc@@AEBUSentPacket@4@@Z
    MCAPI void OnSentPacket(class rtc::PacketTransportInternal*, struct rtc::SentPacket const&);

    // symbol: ?OnWritableState@DtlsTransport@cricket@@AEAAXPEAVPacketTransportInternal@rtc@@@Z
    MCAPI void OnWritableState(class rtc::PacketTransportInternal*);

    // symbol: ?SetupDtls@DtlsTransport@cricket@@AEAA_NXZ
    MCAPI bool SetupDtls();

    // symbol: ?set_dtls_state@DtlsTransport@cricket@@AEAAXW4DtlsTransportState@webrtc@@@Z
    MCAPI void set_dtls_state(::webrtc::DtlsTransportState);

    // symbol: ?set_receiving@DtlsTransport@cricket@@AEAAX_N@Z
    MCAPI void set_receiving(bool);

    // symbol: ?set_writable@DtlsTransport@cricket@@AEAAX_N@Z
    MCAPI void set_writable(bool);

    // NOLINTEND
};

}; // namespace cricket
