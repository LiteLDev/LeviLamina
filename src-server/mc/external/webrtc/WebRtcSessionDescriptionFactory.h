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
    enum class CertificateRequestState : int {
        NotNeeded = 0,
        Waiting = 1,
        Succeeded = 2,
        Failed = 3,
    };
    
    struct CreateSessionDescriptionRequest {
    public:
        // CreateSessionDescriptionRequest inner types define
        enum class Type : int {
            KOffer = 0,
            KAnswer = 1,
        };
        
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkf169e9;
        ::ll::UntypedStorage<8, 8> mUnk73d5e7;
        ::ll::UntypedStorage<8, 104> mUnk92aca5;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        CreateSessionDescriptionRequest& operator=(CreateSessionDescriptionRequest const&);
        CreateSessionDescriptionRequest(CreateSessionDescriptionRequest const&);
        CreateSessionDescriptionRequest();
    
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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkb03f3b;
    ::ll::UntypedStorage<8, 8> mUnkdefe2d;
    ::ll::UntypedStorage<8, 24> mUnkb275ae;
    ::ll::UntypedStorage<8, 232> mUnk919e13;
    ::ll::UntypedStorage<8, 8> mUnk72443d;
    ::ll::UntypedStorage<8, 8> mUnkb1f713;
    ::ll::UntypedStorage<8, 8> mUnk38e005;
    ::ll::UntypedStorage<8, 32> mUnk4ba649;
    ::ll::UntypedStorage<4, 4> mUnkfb1f28;
    ::ll::UntypedStorage<8, 40> mUnkd2fd7b;
    ::ll::UntypedStorage<8, 64> mUnke7fefa;
    ::ll::UntypedStorage<8, 16> mUnkb7134b;
    // NOLINTEND

public:
    // prevent constructor by default
    WebRtcSessionDescriptionFactory& operator=(WebRtcSessionDescriptionFactory const&);
    WebRtcSessionDescriptionFactory(WebRtcSessionDescriptionFactory const&);
    WebRtcSessionDescriptionFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void CreateAnswer(::webrtc::CreateSessionDescriptionObserver* observer, ::cricket::MediaSessionOptions const& session_options);

    MCNAPI void CreateOffer(::webrtc::CreateSessionDescriptionObserver* observer, ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& options, ::cricket::MediaSessionOptions const& session_options);

    MCNAPI void FailPendingRequests(::std::string const& reason);

    MCNAPI void InternalCreateAnswer(::webrtc::WebRtcSessionDescriptionFactory::CreateSessionDescriptionRequest request);

    MCNAPI void InternalCreateOffer(::webrtc::WebRtcSessionDescriptionFactory::CreateSessionDescriptionRequest request);

    MCNAPI void OnCertificateRequestFailed();

    MCNAPI void Post(::absl::AnyInvocable<void()&&> callback);

    MCNAPI void PostCreateSessionDescriptionFailed(::webrtc::CreateSessionDescriptionObserver* observer, ::webrtc::RTCError error);

    MCNAPI void PostCreateSessionDescriptionSucceeded(::webrtc::CreateSessionDescriptionObserver* observer, ::std::unique_ptr<::webrtc::SessionDescriptionInterface> description);

    MCNAPI void SetCertificate(::webrtc::scoped_refptr<::rtc::RTCCertificate> certificate);

    MCNAPI WebRtcSessionDescriptionFactory(::webrtc::ConnectionContext* context, ::webrtc::SdpStateProvider const* sdp_info, ::std::string const& session_id, bool dtls_enabled, ::std::unique_ptr<::rtc::RTCCertificateGeneratorInterface> cert_generator, ::webrtc::scoped_refptr<::rtc::RTCCertificate> certificate, ::std::function<void(::webrtc::scoped_refptr<::rtc::RTCCertificate> const&)> on_certificate_ready, ::webrtc::FieldTrialsView const& field_trials);

    MCNAPI ~WebRtcSessionDescriptionFactory();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void CopyCandidatesFromSessionDescription(::webrtc::SessionDescriptionInterface const* source_desc, ::std::string const& content_name, ::webrtc::SessionDescriptionInterface* dest_desc);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::ConnectionContext* context, ::webrtc::SdpStateProvider const* sdp_info, ::std::string const& session_id, bool dtls_enabled, ::std::unique_ptr<::rtc::RTCCertificateGeneratorInterface> cert_generator, ::webrtc::scoped_refptr<::rtc::RTCCertificate> certificate, ::std::function<void(::webrtc::scoped_refptr<::rtc::RTCCertificate> const&)> on_certificate_ready, ::webrtc::FieldTrialsView const& field_trials);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
