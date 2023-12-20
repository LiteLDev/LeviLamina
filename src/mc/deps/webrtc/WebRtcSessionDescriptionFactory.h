#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/PeerConnectionInterface.h"
#include "mc/deps/webrtc/detail/AnyInvocable.h"
#include "mc/deps/webrtc/detail/SecurePolicy.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct MediaSessionOptions; }
namespace rtc { class RTCCertificate; }
namespace rtc { class RTCCertificateGeneratorInterface; }
namespace webrtc { class ConnectionContext; }
namespace webrtc { class CreateSessionDescriptionObserver; }
namespace webrtc { class FieldTrialsView; }
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
        // NOLINTBEGIN
        // symbol: ??1CreateSessionDescriptionRequest@WebRtcSessionDescriptionFactory@webrtc@@QEAA@XZ
        MCAPI ~CreateSessionDescriptionRequest();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    WebRtcSessionDescriptionFactory& operator=(WebRtcSessionDescriptionFactory const&);
    WebRtcSessionDescriptionFactory(WebRtcSessionDescriptionFactory const&);
    WebRtcSessionDescriptionFactory();

public:
    // NOLINTBEGIN
    // symbol:
    // ?CreateAnswer@WebRtcSessionDescriptionFactory@webrtc@@QEAAXPEAVCreateSessionDescriptionObserver@2@AEBUMediaSessionOptions@cricket@@@Z
    MCAPI void
    CreateAnswer(class webrtc::CreateSessionDescriptionObserver*, struct cricket::MediaSessionOptions const&);

    // symbol:
    // ?CreateOffer@WebRtcSessionDescriptionFactory@webrtc@@QEAAXPEAVCreateSessionDescriptionObserver@2@AEBURTCOfferAnswerOptions@PeerConnectionInterface@2@AEBUMediaSessionOptions@cricket@@@Z
    MCAPI void
    CreateOffer(class webrtc::CreateSessionDescriptionObserver*, struct webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, struct cricket::MediaSessionOptions const&);

    // symbol: ?SdesPolicy@WebRtcSessionDescriptionFactory@webrtc@@QEBA?AW4SecurePolicy@cricket@@XZ
    MCAPI ::cricket::SecurePolicy SdesPolicy() const;

    // symbol: ?SetSdesPolicy@WebRtcSessionDescriptionFactory@webrtc@@QEAAXW4SecurePolicy@cricket@@@Z
    MCAPI void SetSdesPolicy(::cricket::SecurePolicy);

    // symbol:
    // ??0WebRtcSessionDescriptionFactory@webrtc@@QEAA@PEAVConnectionContext@1@PEBVSdpStateProvider@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NV?$unique_ptr@VRTCCertificateGeneratorInterface@rtc@@U?$default_delete@VRTCCertificateGeneratorInterface@rtc@@@std@@@5@V?$scoped_refptr@VRTCCertificate@rtc@@@rtc@@V?$function@$$A6AXAEBV?$scoped_refptr@VRTCCertificate@rtc@@@rtc@@@Z@5@AEBVFieldTrialsView@1@@Z
    MCAPI WebRtcSessionDescriptionFactory(class webrtc::ConnectionContext*, class webrtc::SdpStateProvider const*, std::string const&, bool, std::unique_ptr<class rtc::RTCCertificateGeneratorInterface>, class rtc::scoped_refptr<class rtc::RTCCertificate>, std::function<void(class rtc::scoped_refptr<class rtc::RTCCertificate> const&)>, class webrtc::FieldTrialsView const&);

    // symbol: ??1WebRtcSessionDescriptionFactory@webrtc@@QEAA@XZ
    MCAPI ~WebRtcSessionDescriptionFactory();

    // symbol:
    // ?CopyCandidatesFromSessionDescription@WebRtcSessionDescriptionFactory@webrtc@@SAXPEBVSessionDescriptionInterface@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAV32@@Z
    MCAPI static void
    CopyCandidatesFromSessionDescription(class webrtc::SessionDescriptionInterface const*, std::string const&, class webrtc::SessionDescriptionInterface*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?FailPendingRequests@WebRtcSessionDescriptionFactory@webrtc@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void FailPendingRequests(std::string const&);

    // symbol: ?InternalCreateAnswer@WebRtcSessionDescriptionFactory@webrtc@@AEAAXUCreateSessionDescriptionRequest@12@@Z
    MCAPI void InternalCreateAnswer(struct webrtc::WebRtcSessionDescriptionFactory::CreateSessionDescriptionRequest);

    // symbol: ?InternalCreateOffer@WebRtcSessionDescriptionFactory@webrtc@@AEAAXUCreateSessionDescriptionRequest@12@@Z
    MCAPI void InternalCreateOffer(struct webrtc::WebRtcSessionDescriptionFactory::CreateSessionDescriptionRequest);

    // symbol: ?OnCertificateRequestFailed@WebRtcSessionDescriptionFactory@webrtc@@AEAAXXZ
    MCAPI void OnCertificateRequestFailed();

    // symbol: ?Post@WebRtcSessionDescriptionFactory@webrtc@@AEAAXV?$AnyInvocable@$$A8@@EHAAXXZ@absl@@@Z
    MCAPI void Post(class absl::AnyInvocable<void(void) &&>);

    // symbol:
    // ?PostCreateSessionDescriptionFailed@WebRtcSessionDescriptionFactory@webrtc@@AEAAXPEAVCreateSessionDescriptionObserver@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void PostCreateSessionDescriptionFailed(class webrtc::CreateSessionDescriptionObserver*, std::string const&);

    // symbol:
    // ?PostCreateSessionDescriptionSucceeded@WebRtcSessionDescriptionFactory@webrtc@@AEAAXPEAVCreateSessionDescriptionObserver@2@V?$unique_ptr@VSessionDescriptionInterface@webrtc@@U?$default_delete@VSessionDescriptionInterface@webrtc@@@std@@@std@@@Z
    MCAPI void
    PostCreateSessionDescriptionSucceeded(class webrtc::CreateSessionDescriptionObserver*, std::unique_ptr<class webrtc::SessionDescriptionInterface>);

    // symbol:
    // ?SetCertificate@WebRtcSessionDescriptionFactory@webrtc@@AEAAXV?$scoped_refptr@VRTCCertificate@rtc@@@rtc@@@Z
    MCAPI void SetCertificate(class rtc::scoped_refptr<class rtc::RTCCertificate>);

    // NOLINTEND
};

}; // namespace webrtc
