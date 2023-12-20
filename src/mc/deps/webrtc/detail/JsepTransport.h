#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/SdpType.h"
#include "mc/deps/webrtc/detail/ConnectionRole.h"
#include "mc/deps/webrtc/detail/ContentSource.h"
#include "mc/deps/webrtc/detail/SSLRole.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class DtlsTransportInternal; }
namespace cricket { class IceTransportInternal; }
namespace cricket { class SctpTransportInternal; }
namespace cricket { struct CryptoParams; }
namespace cricket { struct IceParameters; }
namespace cricket { struct JsepTransportDescription; }
namespace cricket { struct TransportStats; }
namespace rtc { class RTCCertificate; }
namespace rtc { struct SSLFingerprint; }
namespace webrtc { class DtlsSrtpTransport; }
namespace webrtc { class IceTransportInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { class RtpTransport; }
namespace webrtc { class SrtpTransport; }
// clang-format on

namespace cricket {

class JsepTransport {
public:
    // prevent constructor by default
    JsepTransport& operator=(JsepTransport const&);
    JsepTransport(JsepTransport const&);
    JsepTransport();

public:
    // NOLINTBEGIN
    // symbol:
    // ?AddRemoteCandidates@JsepTransport@cricket@@QEAA?AVRTCError@webrtc@@AEBV?$vector@VCandidate@cricket@@V?$allocator@VCandidate@cricket@@@std@@@std@@@Z
    MCAPI class webrtc::RTCError AddRemoteCandidates(std::vector<class cricket::Candidate> const&);

    // symbol: ?GetDtlsRole@JsepTransport@cricket@@QEBA?AV?$optional@W4SSLRole@rtc@@@std@@XZ
    MCAPI std::optional<::rtc::SSLRole> GetDtlsRole() const;

    // symbol: ?GetStats@JsepTransport@cricket@@QEAA_NPEAUTransportStats@2@@Z
    MCAPI bool GetStats(struct cricket::TransportStats*);

    // symbol:
    // ??0JsepTransport@cricket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$scoped_refptr@VRTCCertificate@rtc@@@rtc@@V?$scoped_refptr@VIceTransportInterface@webrtc@@@5@2V?$unique_ptr@VRtpTransport@webrtc@@U?$default_delete@VRtpTransport@webrtc@@@std@@@3@V?$unique_ptr@VSrtpTransport@webrtc@@U?$default_delete@VSrtpTransport@webrtc@@@std@@@3@V?$unique_ptr@VDtlsSrtpTransport@webrtc@@U?$default_delete@VDtlsSrtpTransport@webrtc@@@std@@@3@V?$unique_ptr@VDtlsTransportInternal@cricket@@U?$default_delete@VDtlsTransportInternal@cricket@@@std@@@3@6V?$unique_ptr@VSctpTransportInternal@cricket@@U?$default_delete@VSctpTransportInternal@cricket@@@std@@@3@V?$function@$$A6AXXZ@3@@Z
    MCAPI
    JsepTransport(std::string const&, class rtc::scoped_refptr<class rtc::RTCCertificate> const&, class rtc::scoped_refptr<class webrtc::IceTransportInterface>, class rtc::scoped_refptr<class webrtc::IceTransportInterface>, std::unique_ptr<class webrtc::RtpTransport>, std::unique_ptr<class webrtc::SrtpTransport>, std::unique_ptr<class webrtc::DtlsSrtpTransport>, std::unique_ptr<class cricket::DtlsTransportInternal>, std::unique_ptr<class cricket::DtlsTransportInternal>, std::unique_ptr<class cricket::SctpTransportInternal>, std::function<void(void)>);

    // symbol: ?SetActiveResetSrtpParams@JsepTransport@cricket@@QEAAX_N@Z
    MCAPI void SetActiveResetSrtpParams(bool);

    // symbol:
    // ?SetLocalJsepTransportDescription@JsepTransport@cricket@@QEAA?AVRTCError@webrtc@@AEBUJsepTransportDescription@2@W4SdpType@4@@Z
    MCAPI class webrtc::RTCError
    SetLocalJsepTransportDescription(struct cricket::JsepTransportDescription const&, ::webrtc::SdpType);

    // symbol: ?SetNeedsIceRestartFlag@JsepTransport@cricket@@QEAAXXZ
    MCAPI void SetNeedsIceRestartFlag();

    // symbol:
    // ?SetRemoteJsepTransportDescription@JsepTransport@cricket@@QEAA?AVRTCError@webrtc@@AEBUJsepTransportDescription@2@W4SdpType@4@@Z
    MCAPI class webrtc::RTCError
    SetRemoteJsepTransportDescription(struct cricket::JsepTransportDescription const&, ::webrtc::SdpType);

    // symbol:
    // ?VerifyCertificateFingerprint@JsepTransport@cricket@@QEBA?AVRTCError@webrtc@@PEBVRTCCertificate@rtc@@PEBUSSLFingerprint@6@@Z
    MCAPI class webrtc::RTCError
    VerifyCertificateFingerprint(class rtc::RTCCertificate const*, struct rtc::SSLFingerprint const*) const;

    // symbol: ?rtcp_dtls_transport@JsepTransport@cricket@@QEAAPEAVDtlsTransportInternal@2@XZ
    MCAPI class cricket::DtlsTransportInternal* rtcp_dtls_transport();

    // symbol: ?rtp_dtls_transport@JsepTransport@cricket@@QEAAPEAVDtlsTransportInternal@2@XZ
    MCAPI class cricket::DtlsTransportInternal* rtp_dtls_transport();

    // symbol: ??1JsepTransport@cricket@@QEAA@XZ
    MCAPI ~JsepTransport();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ActivateRtcpMux@JsepTransport@cricket@@AEAAXXZ
    MCAPI void ActivateRtcpMux();

    // symbol: ?GetTransportStats@JsepTransport@cricket@@AEAA_NPEAVDtlsTransportInternal@2@HPEAUTransportStats@2@@Z
    MCAPI bool GetTransportStats(class cricket::DtlsTransportInternal*, int, struct cricket::TransportStats*);

    // symbol: ?NegotiateAndSetDtlsParameters@JsepTransport@cricket@@AEAA?AVRTCError@webrtc@@W4SdpType@4@@Z
    MCAPI class webrtc::RTCError NegotiateAndSetDtlsParameters(::webrtc::SdpType);

    // symbol:
    // ?NegotiateDtlsRole@JsepTransport@cricket@@AEAA?AVRTCError@webrtc@@W4SdpType@4@W4ConnectionRole@2@1PEAV?$optional@W4SSLRole@rtc@@@std@@@Z
    MCAPI class webrtc::RTCError
    NegotiateDtlsRole(::webrtc::SdpType, ::cricket::ConnectionRole, ::cricket::ConnectionRole, std::optional<::rtc::SSLRole>*);

    // symbol: ?SetRemoteIceParameters@JsepTransport@cricket@@AEAAXAEBUIceParameters@2@PEAVIceTransportInternal@2@@Z
    MCAPI void SetRemoteIceParameters(struct cricket::IceParameters const&, class cricket::IceTransportInternal*);

    // symbol: ?SetRtcpMux@JsepTransport@cricket@@AEAA_N_NW4SdpType@webrtc@@W4ContentSource@2@@Z
    MCAPI bool SetRtcpMux(bool, ::webrtc::SdpType, ::cricket::ContentSource);

    // symbol:
    // ?SetSdes@JsepTransport@cricket@@AEAA_NAEBV?$vector@UCryptoParams@cricket@@V?$allocator@UCryptoParams@cricket@@@std@@@std@@AEBV?$vector@HV?$allocator@H@std@@@4@W4SdpType@webrtc@@W4ContentSource@2@@Z
    MCAPI bool SetSdes(
        std::vector<struct cricket::CryptoParams> const&,
        std::vector<int> const&,
        ::webrtc::SdpType,
        ::cricket::ContentSource
    );

    // symbol:
    // ?SetNegotiatedDtlsParameters@JsepTransport@cricket@@CA?AVRTCError@webrtc@@PEAVDtlsTransportInternal@2@V?$optional@W4SSLRole@rtc@@@std@@PEAUSSLFingerprint@rtc@@@Z
    MCAPI static class webrtc::RTCError
    SetNegotiatedDtlsParameters(class cricket::DtlsTransportInternal*, std::optional<::rtc::SSLRole>, struct rtc::SSLFingerprint*);

    // NOLINTEND
};

}; // namespace cricket
