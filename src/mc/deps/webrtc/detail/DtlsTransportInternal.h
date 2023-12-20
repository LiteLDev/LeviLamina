#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/DtlsTransportState.h"
#include "mc/deps/webrtc/detail/PacketTransportInternal.h"
#include "mc/deps/webrtc/detail/SSLRole.h"
#include "mc/deps/webrtc/detail/Socket.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class IceTransportInternal; }
namespace rtc { class PacketTransportInternal; }
namespace rtc { class RTCCertificate; }
namespace rtc { class SSLCertChain; }
namespace rtc { struct NetworkRoute; }
namespace rtc { struct PacketOptions; }
namespace webrtc { class RTCError; }
// clang-format on

namespace cricket {

class DtlsTransportInternal : public ::rtc::PacketTransportInternal {
public:
    // prevent constructor by default
    DtlsTransportInternal& operator=(DtlsTransportInternal const&);
    DtlsTransportInternal(DtlsTransportInternal const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DtlsTransportInternal@cricket@@UEAA@XZ
    virtual ~DtlsTransportInternal();

    // vIndex: 9, symbol: ?dtls_state@DtlsTransport@cricket@@UEBA?AW4DtlsTransportState@webrtc@@XZ
    virtual ::webrtc::DtlsTransportState dtls_state() const = 0;

    // vIndex: 10, symbol: ?component@DtlsTransport@cricket@@UEBAHXZ
    virtual int component() const = 0;

    // vIndex: 11, symbol: ?IsDtlsActive@DtlsTransport@cricket@@UEBA_NXZ
    virtual bool IsDtlsActive() const = 0;

    // vIndex: 12, symbol: ?GetDtlsRole@DtlsTransport@cricket@@UEBA_NPEAW4SSLRole@rtc@@@Z
    virtual bool GetDtlsRole(::rtc::SSLRole*) const = 0;

    // vIndex: 13, symbol: ?SetDtlsRole@DtlsTransport@cricket@@UEAA_NW4SSLRole@rtc@@@Z
    virtual bool SetDtlsRole(::rtc::SSLRole) = 0;

    // vIndex: 14, symbol: ?GetSslVersionBytes@DtlsTransport@cricket@@UEBA_NPEAH@Z
    virtual bool GetSslVersionBytes(int*) const = 0;

    // vIndex: 15, symbol: ?GetSrtpCryptoSuite@DtlsTransport@cricket@@UEAA_NPEAH@Z
    virtual bool GetSrtpCryptoSuite(int*) = 0;

    // vIndex: 16, symbol: ?GetSslCipherSuite@DtlsTransport@cricket@@UEAA_NPEAH@Z
    virtual bool GetSslCipherSuite(int*) = 0;

    // vIndex: 17, symbol:
    // ?GetLocalCertificate@DtlsTransport@cricket@@UEBA?AV?$scoped_refptr@VRTCCertificate@rtc@@@rtc@@XZ
    virtual class rtc::scoped_refptr<class rtc::RTCCertificate> GetLocalCertificate() const = 0;

    // vIndex: 18, symbol:
    // ?SetLocalCertificate@DtlsTransport@cricket@@UEAA_NAEBV?$scoped_refptr@VRTCCertificate@rtc@@@rtc@@@Z
    virtual bool SetLocalCertificate(class rtc::scoped_refptr<class rtc::RTCCertificate> const&) = 0;

    // vIndex: 19, symbol:
    // ?GetRemoteSSLCertChain@DtlsTransport@cricket@@UEBA?AV?$unique_ptr@VSSLCertChain@rtc@@U?$default_delete@VSSLCertChain@rtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class rtc::SSLCertChain> GetRemoteSSLCertChain() const = 0;

    // vIndex: 20, symbol:
    // ?ExportKeyingMaterial@DtlsTransport@cricket@@UEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEBE_K_NPEAE2@Z
    virtual bool ExportKeyingMaterial(std::string_view, uchar const*, uint64, bool, uchar*, uint64) = 0;

    // vIndex: 21, symbol:
    // ?SetRemoteFingerprint@DtlsTransport@cricket@@UEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEBE_K@Z
    virtual bool SetRemoteFingerprint(std::string_view, uchar const*, uint64) = 0;

    // vIndex: 22, symbol:
    // ?SetRemoteParameters@DtlsTransport@cricket@@UEAA?AVRTCError@webrtc@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@PEBE_KV?$optional@W4SSLRole@rtc@@@6@@Z
    virtual class webrtc::RTCError
    SetRemoteParameters(std::string_view, uchar const*, uint64, std::optional<::rtc::SSLRole>) = 0;

    // vIndex: 23, symbol: ?ice_transport@DtlsTransport@cricket@@UEAAPEAVIceTransportInternal@2@XZ
    virtual class cricket::IceTransportInternal* ice_transport() = 0;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0DtlsTransportInternal@cricket@@IEAA@XZ
    MCAPI DtlsTransportInternal();

    // NOLINTEND
};

}; // namespace cricket
