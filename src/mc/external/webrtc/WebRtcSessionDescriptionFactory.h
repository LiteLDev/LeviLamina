#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct MediaSessionOptions; }
namespace rtc { class RTCCertificate; }
namespace rtc { class RTCCertificateGeneratorInterface; }
namespace webrtc { class ConnectionContext; }
namespace webrtc { class CreateSessionDescriptionObserver; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class RTCError; }
namespace webrtc { class SdpStateProvider; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace webrtc {

class WebRtcSessionDescriptionFactory {
public:
    // WebRtcSessionDescriptionFactory inner types declare
    // clang-format off
    struct CreateSessionDescriptionRequest;
    // clang-format on

    // WebRtcSessionDescriptionFactory inner types define
    struct CreateSessionDescriptionRequest {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CreateSessionDescriptionRequest();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    WebRtcSessionDescriptionFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void CreateAnswer(::webrtc::CreateSessionDescriptionObserver*, ::cricket::MediaSessionOptions const&);

    MCNAPI void
    CreateOffer(::webrtc::CreateSessionDescriptionObserver*, ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, ::cricket::MediaSessionOptions const&);

    MCNAPI void FailPendingRequests(::std::string const&);

    MCNAPI void InternalCreateAnswer(::webrtc::WebRtcSessionDescriptionFactory::CreateSessionDescriptionRequest);

    MCNAPI void InternalCreateOffer(::webrtc::WebRtcSessionDescriptionFactory::CreateSessionDescriptionRequest);

    MCNAPI void OnCertificateRequestFailed();

    MCNAPI void Post(::absl::AnyInvocable<void() &&>);

    MCNAPI void PostCreateSessionDescriptionFailed(::webrtc::CreateSessionDescriptionObserver*, ::webrtc::RTCError);

    MCNAPI void
    PostCreateSessionDescriptionSucceeded(::webrtc::CreateSessionDescriptionObserver*, ::std::unique_ptr<::webrtc::SessionDescriptionInterface>);

    MCNAPI void SetCertificate(::webrtc::scoped_refptr<::rtc::RTCCertificate>);

    MCNAPI WebRtcSessionDescriptionFactory(::webrtc::ConnectionContext*, ::webrtc::SdpStateProvider const*, ::std::string const&, bool, ::std::unique_ptr<::rtc::RTCCertificateGeneratorInterface>, ::webrtc::scoped_refptr<::rtc::RTCCertificate>, ::std::function<void(::webrtc::scoped_refptr<::rtc::RTCCertificate> const&)>, ::webrtc::FieldTrialsView const&);

    MCNAPI ~WebRtcSessionDescriptionFactory();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    CopyCandidatesFromSessionDescription(::webrtc::SessionDescriptionInterface const*, ::std::string const&, ::webrtc::SessionDescriptionInterface*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::webrtc::ConnectionContext*, ::webrtc::SdpStateProvider const*, ::std::string const&, bool, ::std::unique_ptr<::rtc::RTCCertificateGeneratorInterface>, ::webrtc::scoped_refptr<::rtc::RTCCertificate>, ::std::function<void(::webrtc::scoped_refptr<::rtc::RTCCertificate> const&)>, ::webrtc::FieldTrialsView const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
