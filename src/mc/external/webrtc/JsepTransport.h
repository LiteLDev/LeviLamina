#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ConnectionRole.h"
#include "mc/external/webrtc/ContentSource.h"
#include "mc/external/webrtc/SSLRole.h"
#include "mc/external/webrtc/SdpType.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Candidate; }
namespace webrtc { class ContentInfo; }
namespace webrtc { class DtlsSrtpTransport; }
namespace webrtc { class DtlsTransportInternal; }
namespace webrtc { class IceTransportInterface; }
namespace webrtc { class IceTransportInternal; }
namespace webrtc { class PayloadTypePicker; }
namespace webrtc { class RTCCertificate; }
namespace webrtc { class RTCError; }
namespace webrtc { class RtpTransport; }
namespace webrtc { class SctpTransportInternal; }
namespace webrtc { class SrtpTransport; }
namespace webrtc { struct IceParameters; }
namespace webrtc { struct JsepTransportDescription; }
namespace webrtc { struct SSLFingerprint; }
namespace webrtc { struct TransportStats; }
// clang-format on

namespace webrtc {

class JsepTransport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkea18a9;
    ::ll::UntypedStorage<8, 32> mUnk871e26;
    ::ll::UntypedStorage<1, 1>  mUnk23c65b;
    ::ll::UntypedStorage<8, 8>  mUnke7f63d;
    ::ll::UntypedStorage<8, 8>  mUnka8bc35;
    ::ll::UntypedStorage<8, 8>  mUnk869b49;
    ::ll::UntypedStorage<8, 8>  mUnka8e81e;
    ::ll::UntypedStorage<8, 8>  mUnka22350;
    ::ll::UntypedStorage<8, 8>  mUnkef0689;
    ::ll::UntypedStorage<8, 8>  mUnk2888b3;
    ::ll::UntypedStorage<8, 8>  mUnkd53f8f;
    ::ll::UntypedStorage<8, 8>  mUnk9158a6;
    ::ll::UntypedStorage<8, 8>  mUnk3e9c45;
    ::ll::UntypedStorage<8, 8>  mUnk73b233;
    ::ll::UntypedStorage<4, 8>  mUnk72d534;
    ::ll::UntypedStorage<8, 32> mUnk88fc02;
    ::ll::UntypedStorage<8, 32> mUnka6e853;
    ::ll::UntypedStorage<8, 64> mUnkf9e8ca;
    ::ll::UntypedStorage<8, 64> mUnk3619eb;
    ::ll::UntypedStorage<8, 64> mUnke21807;
    // NOLINTEND

public:
    // prevent constructor by default
    JsepTransport& operator=(JsepTransport const&);
    JsepTransport(JsepTransport const&);
    JsepTransport();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCError AddRemoteCandidates(::std::vector<::webrtc::Candidate> const& candidates);

    MCNAPI ::std::optional<::webrtc::SSLRole> GetDtlsRole() const;

    MCNAPI bool GetStats(::webrtc::TransportStats* stats) const;

    MCNAPI bool GetTransportStats(
        ::webrtc::DtlsTransportInternal* dtls_transport,
        int                              component,
        ::webrtc::TransportStats*        stats
    ) const;

    MCNAPI JsepTransport(
        ::std::string const&                                     mid,
        ::webrtc::scoped_refptr<::webrtc::RTCCertificate> const& local_certificate,
        ::webrtc::scoped_refptr<::webrtc::IceTransportInterface> ice_transport,
        ::webrtc::scoped_refptr<::webrtc::IceTransportInterface> rtcp_ice_transport,
        ::std::unique_ptr<::webrtc::RtpTransport>                unencrypted_rtp_transport,
        ::std::unique_ptr<::webrtc::SrtpTransport>               sdes_transport,
        ::std::unique_ptr<::webrtc::DtlsSrtpTransport>           dtls_srtp_transport,
        ::std::unique_ptr<::webrtc::DtlsTransportInternal>       rtp_dtls_transport,
        ::std::unique_ptr<::webrtc::DtlsTransportInternal>       rtcp_dtls_transport,
        ::std::unique_ptr<::webrtc::SctpTransportInternal>       sctp_transport,
        ::std::function<void()>                                  rtcp_mux_active_callback,
        ::webrtc::PayloadTypePicker&                             suggester
    );

    MCNAPI ::webrtc::RTCError NegotiateAndSetDtlsParameters(::webrtc::SdpType local_description_type);

    MCNAPI ::webrtc::RTCError NegotiateDtlsRole(
        ::webrtc::SdpType                   local_description_type,
        ::webrtc::ConnectionRole            local_connection_role,
        ::webrtc::ConnectionRole            remote_connection_role,
        ::std::optional<::webrtc::SSLRole>* negotiated_dtls_role
    );

    MCNAPI ::webrtc::RTCError
    RecordPayloadTypes(bool local, ::webrtc::SdpType type, ::webrtc::ContentInfo const& content);

    MCNAPI void SetActiveResetSrtpParams(bool active_reset_srtp_params);

    MCNAPI ::webrtc::RTCError SetLocalJsepTransportDescription(
        ::webrtc::JsepTransportDescription const& jsep_description,
        ::webrtc::SdpType                         type
    );

    MCNAPI void SetNeedsIceRestartFlag();

    MCNAPI void SetRemoteIceParameters(
        ::webrtc::IceParameters const&  ice_parameters,
        ::webrtc::IceTransportInternal* ice_transport
    );

    MCNAPI ::webrtc::RTCError SetRemoteJsepTransportDescription(
        ::webrtc::JsepTransportDescription const& jsep_description,
        ::webrtc::SdpType                         type
    );

    MCNAPI bool SetRtcpMux(bool enable, ::webrtc::SdpType type, ::webrtc::ContentSource source);

    MCNAPI ::webrtc::RTCError VerifyCertificateFingerprint(
        ::webrtc::RTCCertificate const* certificate,
        ::webrtc::SSLFingerprint const* fingerprint
    ) const;

    MCNAPI ~JsepTransport();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string const&                                     mid,
        ::webrtc::scoped_refptr<::webrtc::RTCCertificate> const& local_certificate,
        ::webrtc::scoped_refptr<::webrtc::IceTransportInterface> ice_transport,
        ::webrtc::scoped_refptr<::webrtc::IceTransportInterface> rtcp_ice_transport,
        ::std::unique_ptr<::webrtc::RtpTransport>                unencrypted_rtp_transport,
        ::std::unique_ptr<::webrtc::SrtpTransport>               sdes_transport,
        ::std::unique_ptr<::webrtc::DtlsSrtpTransport>           dtls_srtp_transport,
        ::std::unique_ptr<::webrtc::DtlsTransportInternal>       rtp_dtls_transport,
        ::std::unique_ptr<::webrtc::DtlsTransportInternal>       rtcp_dtls_transport,
        ::std::unique_ptr<::webrtc::SctpTransportInternal>       sctp_transport,
        ::std::function<void()>                                  rtcp_mux_active_callback,
        ::webrtc::PayloadTypePicker&                             suggester
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
