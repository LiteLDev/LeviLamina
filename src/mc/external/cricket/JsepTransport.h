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
    // member functions
    // NOLINTBEGIN
    MCAPI void ActivateRtcpMux();

    MCAPI ::webrtc::RTCError AddRemoteCandidates(::std::vector<::cricket::Candidate> const&);

    MCAPI ::std::optional<::rtc::SSLRole> GetDtlsRole() const;

    MCAPI bool GetStats(::cricket::TransportStats*);

    MCAPI bool GetTransportStats(::cricket::DtlsTransportInternal*, int, ::cricket::TransportStats*);

    MCAPI
    JsepTransport(::std::string const&, ::webrtc::scoped_refptr<::rtc::RTCCertificate> const&, ::webrtc::scoped_refptr<::webrtc::IceTransportInterface>, ::webrtc::scoped_refptr<::webrtc::IceTransportInterface>, ::std::unique_ptr<::webrtc::RtpTransport>, ::std::unique_ptr<::webrtc::SrtpTransport>, ::std::unique_ptr<::webrtc::DtlsSrtpTransport>, ::std::unique_ptr<::cricket::DtlsTransportInternal>, ::std::unique_ptr<::cricket::DtlsTransportInternal>, ::std::unique_ptr<::cricket::SctpTransportInternal>, ::std::function<void()>);

    MCAPI ::webrtc::RTCError NegotiateAndSetDtlsParameters(::webrtc::SdpType);

    MCAPI ::webrtc::RTCError
    NegotiateDtlsRole(::webrtc::SdpType, ::cricket::ConnectionRole, ::cricket::ConnectionRole, ::std::optional<::rtc::SSLRole>*);

    MCAPI void SetActiveResetSrtpParams(bool);

    MCAPI ::webrtc::RTCError
    SetLocalJsepTransportDescription(::cricket::JsepTransportDescription const&, ::webrtc::SdpType);

    MCAPI void SetNeedsIceRestartFlag();

    MCAPI void SetRemoteIceParameters(::cricket::IceParameters const&, ::cricket::IceTransportInternal*);

    MCAPI ::webrtc::RTCError
    SetRemoteJsepTransportDescription(::cricket::JsepTransportDescription const&, ::webrtc::SdpType);

    MCAPI bool SetRtcpMux(bool, ::webrtc::SdpType, ::cricket::ContentSource);

    MCAPI ::webrtc::RTCError
    VerifyCertificateFingerprint(::rtc::RTCCertificate const*, ::rtc::SSLFingerprint const*) const;

    MCAPI ~JsepTransport();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::webrtc::RTCError
    SetNegotiatedDtlsParameters(::cricket::DtlsTransportInternal*, ::std::optional<::rtc::SSLRole>, ::rtc::SSLFingerprint*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const&, ::webrtc::scoped_refptr<::rtc::RTCCertificate> const&, ::webrtc::scoped_refptr<::webrtc::IceTransportInterface>, ::webrtc::scoped_refptr<::webrtc::IceTransportInterface>, ::std::unique_ptr<::webrtc::RtpTransport>, ::std::unique_ptr<::webrtc::SrtpTransport>, ::std::unique_ptr<::webrtc::DtlsSrtpTransport>, ::std::unique_ptr<::cricket::DtlsTransportInternal>, ::std::unique_ptr<::cricket::DtlsTransportInternal>, ::std::unique_ptr<::cricket::SctpTransportInternal>, ::std::function<void()>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
