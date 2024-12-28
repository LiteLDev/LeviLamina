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
        // prevent constructor by default
        CreateSessionDescriptionRequest& operator=(CreateSessionDescriptionRequest const&);
        CreateSessionDescriptionRequest(CreateSessionDescriptionRequest const&);
        CreateSessionDescriptionRequest();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~CreateSessionDescriptionRequest();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    WebRtcSessionDescriptionFactory& operator=(WebRtcSessionDescriptionFactory const&);
    WebRtcSessionDescriptionFactory(WebRtcSessionDescriptionFactory const&);
    WebRtcSessionDescriptionFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void CreateAnswer(::webrtc::CreateSessionDescriptionObserver*, ::cricket::MediaSessionOptions const&);

    MCAPI void
    CreateOffer(::webrtc::CreateSessionDescriptionObserver*, ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, ::cricket::MediaSessionOptions const&);

    MCAPI void FailPendingRequests(::std::string const&);

    MCAPI void InternalCreateAnswer(::webrtc::WebRtcSessionDescriptionFactory::CreateSessionDescriptionRequest);

    MCAPI void InternalCreateOffer(::webrtc::WebRtcSessionDescriptionFactory::CreateSessionDescriptionRequest);

    MCAPI void OnCertificateRequestFailed();

    MCAPI void Post(::absl::AnyInvocable<void() &&>);

    MCAPI void PostCreateSessionDescriptionFailed(::webrtc::CreateSessionDescriptionObserver*, ::webrtc::RTCError);

    MCAPI void
    PostCreateSessionDescriptionSucceeded(::webrtc::CreateSessionDescriptionObserver*, ::std::unique_ptr<::webrtc::SessionDescriptionInterface>);

    MCAPI void SetCertificate(::webrtc::scoped_refptr<::rtc::RTCCertificate>);

    MCAPI
    WebRtcSessionDescriptionFactory(::webrtc::ConnectionContext*, ::webrtc::SdpStateProvider const*, ::std::string const&, bool, ::std::unique_ptr<::rtc::RTCCertificateGeneratorInterface>, ::webrtc::scoped_refptr<::rtc::RTCCertificate>, ::std::function<void(::webrtc::scoped_refptr<::rtc::RTCCertificate> const&)>, ::webrtc::FieldTrialsView const&);

    MCAPI ~WebRtcSessionDescriptionFactory();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    CopyCandidatesFromSessionDescription(::webrtc::SessionDescriptionInterface const*, ::std::string const&, ::webrtc::SessionDescriptionInterface*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::ConnectionContext*, ::webrtc::SdpStateProvider const*, ::std::string const&, bool, ::std::unique_ptr<::rtc::RTCCertificateGeneratorInterface>, ::webrtc::scoped_refptr<::rtc::RTCCertificate>, ::std::function<void(::webrtc::scoped_refptr<::rtc::RTCCertificate> const&)>, ::webrtc::FieldTrialsView const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
