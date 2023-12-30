#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/PeerConnectionFactoryInterface.h"
#include "mc/deps/webrtc/PeerConnectionInterface.h"
#include "mc/deps/webrtc/RTCErrorOr.h"
#include "mc/deps/webrtc/cricket/MediaType.h"
#include "mc/deps/webrtc/rtc/RefCountReleaseStatus.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class MediaEngineInterface; }
namespace cricket { class PortAllocator; }
namespace cricket { struct AudioOptions; }
namespace rtc { class RTCCertificateGeneratorInterface; }
namespace webrtc { class AudioSourceInterface; }
namespace webrtc { class AudioTrackInterface; }
namespace webrtc { class Call; }
namespace webrtc { class ConnectionContext; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class PeerConnectionFactoryInterface; }
namespace webrtc { class PeerConnectionInterface; }
namespace webrtc { class PeerConnectionObserver; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { class VideoTrackInterface; }
namespace webrtc { class VideoTrackSourceInterface; }
namespace webrtc { struct PeerConnectionDependencies; }
namespace webrtc { struct PeerConnectionFactoryDependencies; }
namespace webrtc { struct RtpCapabilities; }
// clang-format on

namespace webrtc {

class PeerConnectionFactory : public ::webrtc::PeerConnectionFactoryInterface {
public:
    // prevent constructor by default
    PeerConnectionFactory& operator=(PeerConnectionFactory const&);
    PeerConnectionFactory(PeerConnectionFactory const&);
    PeerConnectionFactory();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1PeerConnectionFactory@webrtc@@MEAA@XZ
    virtual ~PeerConnectionFactory();

    // vIndex: 3, symbol: ?SetOptions@PeerConnectionFactory@webrtc@@UEAAXAEBVOptions@PeerConnectionFactoryInterface@2@@Z
    virtual void SetOptions(class webrtc::PeerConnectionFactoryInterface::Options const&);

    // vIndex: 4, symbol:
    // ?CreatePeerConnectionOrError@PeerConnectionFactory@webrtc@@UEAA?AV?$RTCErrorOr@V?$scoped_refptr@VPeerConnectionInterface@webrtc@@@rtc@@@2@AEBURTCConfiguration@PeerConnectionInterface@2@UPeerConnectionDependencies@2@@Z
    virtual class webrtc::RTCErrorOr<class rtc::scoped_refptr<class webrtc::PeerConnectionInterface>>
    CreatePeerConnectionOrError(
        struct webrtc::PeerConnectionInterface::RTCConfiguration const&,
        struct webrtc::PeerConnectionDependencies
    );

    // vIndex: 5, symbol:
    // ?CreatePeerConnection@PeerConnectionFactoryInterface@webrtc@@UEAA?AV?$scoped_refptr@VPeerConnectionInterface@webrtc@@@rtc@@AEBURTCConfiguration@PeerConnectionInterface@2@UPeerConnectionDependencies@2@@Z
    virtual class rtc::scoped_refptr<class webrtc::PeerConnectionInterface> CreatePeerConnection(
        struct webrtc::PeerConnectionInterface::RTCConfiguration const&,
        struct webrtc::PeerConnectionDependencies
    );

    // vIndex: 6, symbol:
    // ?CreatePeerConnection@PeerConnectionFactoryInterface@webrtc@@UEAA?AV?$scoped_refptr@VPeerConnectionInterface@webrtc@@@rtc@@AEBURTCConfiguration@PeerConnectionInterface@2@V?$unique_ptr@VPortAllocator@cricket@@U?$default_delete@VPortAllocator@cricket@@@std@@@std@@V?$unique_ptr@VRTCCertificateGeneratorInterface@rtc@@U?$default_delete@VRTCCertificateGeneratorInterface@rtc@@@std@@@8@PEAVPeerConnectionObserver@2@@Z
    virtual class rtc::scoped_refptr<class webrtc::PeerConnectionInterface>
    CreatePeerConnection(struct webrtc::PeerConnectionInterface::RTCConfiguration const&, std::unique_ptr<class cricket::PortAllocator>, std::unique_ptr<class rtc::RTCCertificateGeneratorInterface>, class webrtc::PeerConnectionObserver*);

    // vIndex: 7, symbol:
    // ?GetRtpSenderCapabilities@PeerConnectionFactory@webrtc@@UEBA?AURtpCapabilities@2@W4MediaType@cricket@@@Z
    virtual struct webrtc::RtpCapabilities GetRtpSenderCapabilities(::cricket::MediaType) const;

    // vIndex: 8, symbol:
    // ?GetRtpReceiverCapabilities@PeerConnectionFactory@webrtc@@UEBA?AURtpCapabilities@2@W4MediaType@cricket@@@Z
    virtual struct webrtc::RtpCapabilities GetRtpReceiverCapabilities(::cricket::MediaType) const;

    // vIndex: 9, symbol:
    // ?CreateLocalMediaStream@PeerConnectionFactory@webrtc@@UEAA?AV?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual class rtc::scoped_refptr<class webrtc::MediaStreamInterface> CreateLocalMediaStream(std::string const&);

    // vIndex: 10, symbol:
    // ?CreateAudioSource@PeerConnectionFactory@webrtc@@UEAA?AV?$scoped_refptr@VAudioSourceInterface@webrtc@@@rtc@@AEBUAudioOptions@cricket@@@Z
    virtual class rtc::scoped_refptr<class webrtc::AudioSourceInterface>
    CreateAudioSource(struct cricket::AudioOptions const&);

    // vIndex: 11, symbol:
    // ?CreateVideoTrack@PeerConnectionFactory@webrtc@@UEAA?AV?$scoped_refptr@VVideoTrackInterface@webrtc@@@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVVideoTrackSourceInterface@2@@Z
    virtual class rtc::scoped_refptr<class webrtc::VideoTrackInterface>
    CreateVideoTrack(std::string const&, class webrtc::VideoTrackSourceInterface*);

    // vIndex: 12, symbol:
    // ?CreateAudioTrack@PeerConnectionFactory@webrtc@@UEAA?AV?$scoped_refptr@VAudioTrackInterface@webrtc@@@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVAudioSourceInterface@2@@Z
    virtual class rtc::scoped_refptr<class webrtc::AudioTrackInterface>
    CreateAudioTrack(std::string const&, class webrtc::AudioSourceInterface*);

    // vIndex: 13, symbol: ?StartAecDump@PeerConnectionFactory@webrtc@@UEAA_NPEAU_iobuf@@_J@Z
    virtual bool StartAecDump(struct _iobuf*, int64);

    // vIndex: 14, symbol: ?StopAecDump@PeerConnectionFactory@webrtc@@UEAAXXZ
    virtual void StopAecDump();

    // symbol: ?media_engine@PeerConnectionFactory@webrtc@@QEBAPEAVMediaEngineInterface@cricket@@XZ
    MCAPI class cricket::MediaEngineInterface* media_engine() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0PeerConnectionFactory@webrtc@@IEAA@UPeerConnectionFactoryDependencies@1@@Z
    MCAPI explicit PeerConnectionFactory(struct webrtc::PeerConnectionFactoryDependencies);

    // symbol:
    // ??0PeerConnectionFactory@webrtc@@IEAA@V?$scoped_refptr@VConnectionContext@webrtc@@@rtc@@PEAUPeerConnectionFactoryDependencies@1@@Z
    MCAPI
    PeerConnectionFactory(class rtc::scoped_refptr<class webrtc::ConnectionContext>, struct webrtc::PeerConnectionFactoryDependencies*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?CreateCall_w@PeerConnectionFactory@webrtc@@AEAA?AV?$unique_ptr@VCall@webrtc@@U?$default_delete@VCall@webrtc@@@std@@@std@@PEAVRtcEventLog@2@AEBVFieldTrialsView@2@AEBURTCConfiguration@PeerConnectionInterface@2@@Z
    MCAPI std::unique_ptr<class webrtc::Call>
    CreateCall_w(class webrtc::RtcEventLog*, class webrtc::FieldTrialsView const&, struct webrtc::PeerConnectionInterface::RTCConfiguration const&);

    // symbol:
    // ?CreateRtcEventLog_w@PeerConnectionFactory@webrtc@@AEAA?AV?$unique_ptr@VRtcEventLog@webrtc@@U?$default_delete@VRtcEventLog@webrtc@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class webrtc::RtcEventLog> CreateRtcEventLog_w();

    // symbol: ?IsTrialEnabled@PeerConnectionFactory@webrtc@@AEBA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI bool IsTrialEnabled(std::string_view) const;

    // NOLINTEND
};

}; // namespace webrtc
