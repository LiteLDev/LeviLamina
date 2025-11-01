#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/ConnectionRole.h"
#include "mc/external/cricket/ContentSource.h"
#include "mc/external/rtc/SSLRole.h"
#include "mc/external/webrtc/SdpType.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class DtlsTransportInternal; }
namespace cricket { class IceTransportInternal; }
namespace cricket { class SctpTransportInternal; }
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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk77e6e4;
    ::ll::UntypedStorage<8, 32> mUnk8f161a;
    ::ll::UntypedStorage<1, 1> mUnkfdd001;
    ::ll::UntypedStorage<8, 8> mUnkbb7579;
    ::ll::UntypedStorage<8, 8> mUnke0983f;
    ::ll::UntypedStorage<8, 8> mUnk2c0311;
    ::ll::UntypedStorage<8, 8> mUnkd06811;
    ::ll::UntypedStorage<8, 8> mUnkd9677e;
    ::ll::UntypedStorage<8, 8> mUnke6dec7;
    ::ll::UntypedStorage<8, 8> mUnkfdf618;
    ::ll::UntypedStorage<8, 8> mUnk9e02ec;
    ::ll::UntypedStorage<8, 8> mUnk379ca4;
    ::ll::UntypedStorage<8, 8> mUnk57bd7b;
    ::ll::UntypedStorage<8, 8> mUnk6f8cf3;
    ::ll::UntypedStorage<4, 8> mUnk97be13;
    ::ll::UntypedStorage<8, 32> mUnk369dce;
    ::ll::UntypedStorage<8, 32> mUnkc51ab6;
    ::ll::UntypedStorage<8, 64> mUnkf240e2;
    // NOLINTEND

public:
    // prevent constructor by default
    JsepTransport& operator=(JsepTransport const&);
    JsepTransport(JsepTransport const&);
    JsepTransport();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ActivateRtcpMux();

    MCNAPI ::webrtc::RTCError AddRemoteCandidates(::std::vector<::cricket::Candidate> const& candidates);

    MCNAPI ::std::optional<::rtc::SSLRole> GetDtlsRole() const;

    MCNAPI bool GetStats(::cricket::TransportStats* stats);

    MCNAPI bool GetTransportStats(::cricket::DtlsTransportInternal* dtls_transport, int component, ::cricket::TransportStats* stats);

    MCNAPI JsepTransport(::std::string const& mid, ::webrtc::scoped_refptr<::rtc::RTCCertificate> const& local_certificate, ::webrtc::scoped_refptr<::webrtc::IceTransportInterface> ice_transport, ::webrtc::scoped_refptr<::webrtc::IceTransportInterface> rtcp_ice_transport, ::std::unique_ptr<::webrtc::RtpTransport> unencrypted_rtp_transport, ::std::unique_ptr<::webrtc::SrtpTransport> sdes_transport, ::std::unique_ptr<::webrtc::DtlsSrtpTransport> dtls_srtp_transport, ::std::unique_ptr<::cricket::DtlsTransportInternal> rtp_dtls_transport, ::std::unique_ptr<::cricket::DtlsTransportInternal> rtcp_dtls_transport, ::std::unique_ptr<::cricket::SctpTransportInternal> sctp_transport, ::std::function<void()> rtcp_mux_active_callback);

    MCNAPI ::webrtc::RTCError NegotiateAndSetDtlsParameters(::webrtc::SdpType local_description_type);

    MCNAPI ::webrtc::RTCError NegotiateDtlsRole(::webrtc::SdpType local_description_type, ::cricket::ConnectionRole local_connection_role, ::cricket::ConnectionRole remote_connection_role, ::std::optional<::rtc::SSLRole>* negotiated_dtls_role);

    MCNAPI void SetActiveResetSrtpParams(bool active_reset_srtp_params);

    MCNAPI ::webrtc::RTCError SetLocalJsepTransportDescription(::cricket::JsepTransportDescription const& jsep_description, ::webrtc::SdpType type);

    MCNAPI void SetNeedsIceRestartFlag();

    MCNAPI void SetRemoteIceParameters(::cricket::IceParameters const& ice_parameters, ::cricket::IceTransportInternal* ice_transport);

    MCNAPI ::webrtc::RTCError SetRemoteJsepTransportDescription(::cricket::JsepTransportDescription const& jsep_description, ::webrtc::SdpType type);

    MCNAPI bool SetRtcpMux(bool enable, ::webrtc::SdpType type, ::cricket::ContentSource source);

    MCNAPI ::webrtc::RTCError VerifyCertificateFingerprint(::rtc::RTCCertificate const* certificate, ::rtc::SSLFingerprint const* fingerprint) const;

    MCNAPI ~JsepTransport();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::RTCError SetNegotiatedDtlsParameters(::cricket::DtlsTransportInternal* dtls_transport, ::std::optional<::rtc::SSLRole> dtls_role, ::rtc::SSLFingerprint* remote_fingerprint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& mid, ::webrtc::scoped_refptr<::rtc::RTCCertificate> const& local_certificate, ::webrtc::scoped_refptr<::webrtc::IceTransportInterface> ice_transport, ::webrtc::scoped_refptr<::webrtc::IceTransportInterface> rtcp_ice_transport, ::std::unique_ptr<::webrtc::RtpTransport> unencrypted_rtp_transport, ::std::unique_ptr<::webrtc::SrtpTransport> sdes_transport, ::std::unique_ptr<::webrtc::DtlsSrtpTransport> dtls_srtp_transport, ::std::unique_ptr<::cricket::DtlsTransportInternal> rtp_dtls_transport, ::std::unique_ptr<::cricket::DtlsTransportInternal> rtcp_dtls_transport, ::std::unique_ptr<::cricket::SctpTransportInternal> sctp_transport, ::std::function<void()> rtcp_mux_active_callback);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
