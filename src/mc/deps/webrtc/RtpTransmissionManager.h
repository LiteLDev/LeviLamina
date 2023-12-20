#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RTCErrorOr.h"
#include "mc/deps/webrtc/RtpReceiverProxyWithInternal.h"
#include "mc/deps/webrtc/RtpSenderBase.h"
#include "mc/deps/webrtc/RtpSenderProxyWithInternal.h"
#include "mc/deps/webrtc/RtpTransceiverProxyWithInternal.h"
#include "mc/deps/webrtc/detail/MediaType.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class MediaEngineInterface; }
namespace cricket { class VideoMediaReceiveChannelInterface; }
namespace cricket { class VideoMediaSendChannelInterface; }
namespace cricket { class VoiceMediaReceiveChannelInterface; }
namespace cricket { class VoiceMediaSendChannelInterface; }
namespace webrtc { class AudioTrackInterface; }
namespace webrtc { class ConnectionContext; }
namespace webrtc { class LegacyStatsCollectorInterface; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class PeerConnectionObserver; }
namespace webrtc { class RtpReceiverInterface; }
namespace webrtc { class RtpReceiverInternal; }
namespace webrtc { class RtpSenderInterface; }
namespace webrtc { class RtpSenderInternal; }
namespace webrtc { class RtpTransceiver; }
namespace webrtc { class UsagePattern; }
namespace webrtc { class VideoTrackInterface; }
namespace webrtc { struct RtpEncodingParameters; }
namespace webrtc { struct RtpSenderInfo; }
// clang-format on

namespace webrtc {

class RtpTransmissionManager : public ::webrtc::RtpSenderBase::SetStreamsObserver {
public:
    // prevent constructor by default
    RtpTransmissionManager& operator=(RtpTransmissionManager const&);
    RtpTransmissionManager(RtpTransmissionManager const&);
    RtpTransmissionManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RtpTransmissionManager@webrtc@@UEAA@XZ
    virtual ~RtpTransmissionManager() = default;

    // vIndex: 1, symbol: ?OnSetStreams@RtpTransmissionManager@webrtc@@UEAAXXZ
    virtual void OnSetStreams();

    // symbol:
    // ?AddAudioTrack@RtpTransmissionManager@webrtc@@QEAAXPEAVAudioTrackInterface@2@PEAVMediaStreamInterface@2@@Z
    MCAPI void AddAudioTrack(class webrtc::AudioTrackInterface*, class webrtc::MediaStreamInterface*);

    // symbol:
    // ?AddTrack@RtpTransmissionManager@webrtc@@QEAA?AV?$RTCErrorOr@V?$scoped_refptr@VRtpSenderInterface@webrtc@@@rtc@@@2@V?$scoped_refptr@VMediaStreamTrackInterface@webrtc@@@rtc@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@PEBV?$vector@URtpEncodingParameters@webrtc@@V?$allocator@URtpEncodingParameters@webrtc@@@std@@@7@@Z
    MCAPI class webrtc::RTCErrorOr<class rtc::scoped_refptr<class webrtc::RtpSenderInterface>>
    AddTrack(class rtc::scoped_refptr<class webrtc::MediaStreamTrackInterface>, std::vector<std::string> const&, std::vector<struct webrtc::RtpEncodingParameters> const*);

    // symbol:
    // ?AddVideoTrack@RtpTransmissionManager@webrtc@@QEAAXPEAVVideoTrackInterface@2@PEAVMediaStreamInterface@2@@Z
    MCAPI void AddVideoTrack(class webrtc::VideoTrackInterface*, class webrtc::MediaStreamInterface*);

    // symbol: ?Close@RtpTransmissionManager@webrtc@@QEAAXXZ
    MCAPI void Close();

    // symbol:
    // ?CreateAndAddTransceiver@RtpTransmissionManager@webrtc@@QEAA?AV?$scoped_refptr@V?$RtpTransceiverProxyWithInternal@VRtpTransceiver@webrtc@@@webrtc@@@rtc@@V?$scoped_refptr@V?$RtpSenderProxyWithInternal@VRtpSenderInternal@webrtc@@@webrtc@@@4@V?$scoped_refptr@V?$RtpReceiverProxyWithInternal@VRtpReceiverInternal@webrtc@@@webrtc@@@4@@Z
    MCAPI class rtc::scoped_refptr<class webrtc::RtpTransceiverProxyWithInternal<class webrtc::RtpTransceiver>>
        CreateAndAddTransceiver(class rtc::scoped_refptr<class webrtc::RtpSenderProxyWithInternal<class webrtc::RtpSenderInternal>>, class rtc::scoped_refptr<class webrtc::RtpReceiverProxyWithInternal<class webrtc::RtpReceiverInternal>>);

    // symbol:
    // ?CreateReceiver@RtpTransmissionManager@webrtc@@QEAA?AV?$scoped_refptr@V?$RtpReceiverProxyWithInternal@VRtpReceiverInternal@webrtc@@@webrtc@@@rtc@@W4MediaType@cricket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class rtc::scoped_refptr<class webrtc::RtpReceiverProxyWithInternal<class webrtc::RtpReceiverInternal>>
    CreateReceiver(::cricket::MediaType, std::string const&);

    // symbol:
    // ?CreateSender@RtpTransmissionManager@webrtc@@QEAA?AV?$scoped_refptr@V?$RtpSenderProxyWithInternal@VRtpSenderInternal@webrtc@@@webrtc@@@rtc@@W4MediaType@cricket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$scoped_refptr@VMediaStreamTrackInterface@webrtc@@@4@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@8@AEBV?$vector@URtpEncodingParameters@webrtc@@V?$allocator@URtpEncodingParameters@webrtc@@@std@@@8@@Z
    MCAPI class rtc::scoped_refptr<class webrtc::RtpSenderProxyWithInternal<class webrtc::RtpSenderInternal>>
    CreateSender(::cricket::MediaType, std::string const&, class rtc::scoped_refptr<class webrtc::MediaStreamTrackInterface>, std::vector<std::string> const&, std::vector<struct webrtc::RtpEncodingParameters> const&);

    // symbol:
    // ?FindFirstTransceiverForAddedTrack@RtpTransmissionManager@webrtc@@QEAA?AV?$scoped_refptr@V?$RtpTransceiverProxyWithInternal@VRtpTransceiver@webrtc@@@webrtc@@@rtc@@V?$scoped_refptr@VMediaStreamTrackInterface@webrtc@@@4@PEBV?$vector@URtpEncodingParameters@webrtc@@V?$allocator@URtpEncodingParameters@webrtc@@@std@@@std@@@Z
    MCAPI class rtc::scoped_refptr<class webrtc::RtpTransceiverProxyWithInternal<class webrtc::RtpTransceiver>>
    FindFirstTransceiverForAddedTrack(class rtc::scoped_refptr<class webrtc::MediaStreamTrackInterface>, std::vector<struct webrtc::RtpEncodingParameters> const*);

    // symbol:
    // ?FindReceiverById@RtpTransmissionManager@webrtc@@QEBA?AV?$scoped_refptr@V?$RtpReceiverProxyWithInternal@VRtpReceiverInternal@webrtc@@@webrtc@@@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class rtc::scoped_refptr<class webrtc::RtpReceiverProxyWithInternal<class webrtc::RtpReceiverInternal>>
    FindReceiverById(std::string const&) const;

    // symbol:
    // ?FindSenderById@RtpTransmissionManager@webrtc@@QEBA?AV?$scoped_refptr@V?$RtpSenderProxyWithInternal@VRtpSenderInternal@webrtc@@@webrtc@@@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class rtc::scoped_refptr<class webrtc::RtpSenderProxyWithInternal<class webrtc::RtpSenderInternal>>
    FindSenderById(std::string const&) const;

    // symbol:
    // ?FindSenderForTrack@RtpTransmissionManager@webrtc@@QEBA?AV?$scoped_refptr@V?$RtpSenderProxyWithInternal@VRtpSenderInternal@webrtc@@@webrtc@@@rtc@@PEAVMediaStreamTrackInterface@2@@Z
    MCAPI class rtc::scoped_refptr<class webrtc::RtpSenderProxyWithInternal<class webrtc::RtpSenderInternal>>
    FindSenderForTrack(class webrtc::MediaStreamTrackInterface*) const;

    // symbol:
    // ?FindSenderInfo@RtpTransmissionManager@webrtc@@QEBAPEBURtpSenderInfo@2@AEBV?$vector@URtpSenderInfo@webrtc@@V?$allocator@URtpSenderInfo@webrtc@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@1@Z
    MCAPI struct webrtc::RtpSenderInfo const*
    FindSenderInfo(std::vector<struct webrtc::RtpSenderInfo> const&, std::string const&, std::string const&) const;

    // symbol:
    // ?GetAudioTransceiver@RtpTransmissionManager@webrtc@@QEBA?AV?$scoped_refptr@V?$RtpTransceiverProxyWithInternal@VRtpTransceiver@webrtc@@@webrtc@@@rtc@@XZ
    MCAPI class rtc::scoped_refptr<class webrtc::RtpTransceiverProxyWithInternal<class webrtc::RtpTransceiver>>
    GetAudioTransceiver() const;

    // symbol:
    // ?GetLocalSenderInfos@RtpTransmissionManager@webrtc@@QEAAPEAV?$vector@URtpSenderInfo@webrtc@@V?$allocator@URtpSenderInfo@webrtc@@@std@@@std@@W4MediaType@cricket@@@Z
    MCAPI std::vector<struct webrtc::RtpSenderInfo>* GetLocalSenderInfos(::cricket::MediaType);

    // symbol:
    // ?GetReceiversInternal@RtpTransmissionManager@webrtc@@QEBA?AV?$vector@V?$scoped_refptr@V?$RtpReceiverProxyWithInternal@VRtpReceiverInternal@webrtc@@@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@V?$RtpReceiverProxyWithInternal@VRtpReceiverInternal@webrtc@@@webrtc@@@rtc@@@std@@@std@@XZ
    MCAPI std::vector<
        class rtc::scoped_refptr<class webrtc::RtpReceiverProxyWithInternal<class webrtc::RtpReceiverInternal>>>
    GetReceiversInternal() const;

    // symbol:
    // ?GetRemoteSenderInfos@RtpTransmissionManager@webrtc@@QEAAPEAV?$vector@URtpSenderInfo@webrtc@@V?$allocator@URtpSenderInfo@webrtc@@@std@@@std@@W4MediaType@cricket@@@Z
    MCAPI std::vector<struct webrtc::RtpSenderInfo>* GetRemoteSenderInfos(::cricket::MediaType);

    // symbol:
    // ?GetSendersInternal@RtpTransmissionManager@webrtc@@QEBA?AV?$vector@V?$scoped_refptr@V?$RtpSenderProxyWithInternal@VRtpSenderInternal@webrtc@@@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@V?$RtpSenderProxyWithInternal@VRtpSenderInternal@webrtc@@@webrtc@@@rtc@@@std@@@std@@XZ
    MCAPI
    std::vector<class rtc::scoped_refptr<class webrtc::RtpSenderProxyWithInternal<class webrtc::RtpSenderInternal>>>
    GetSendersInternal() const;

    // symbol:
    // ?GetVideoTransceiver@RtpTransmissionManager@webrtc@@QEBA?AV?$scoped_refptr@V?$RtpTransceiverProxyWithInternal@VRtpTransceiver@webrtc@@@webrtc@@@rtc@@XZ
    MCAPI class rtc::scoped_refptr<class webrtc::RtpTransceiverProxyWithInternal<class webrtc::RtpTransceiver>>
    GetVideoTransceiver() const;

    // symbol: ?OnLocalSenderAdded@RtpTransmissionManager@webrtc@@QEAAXAEBURtpSenderInfo@2@W4MediaType@cricket@@@Z
    MCAPI void OnLocalSenderAdded(struct webrtc::RtpSenderInfo const&, ::cricket::MediaType);

    // symbol: ?OnLocalSenderRemoved@RtpTransmissionManager@webrtc@@QEAAXAEBURtpSenderInfo@2@W4MediaType@cricket@@@Z
    MCAPI void OnLocalSenderRemoved(struct webrtc::RtpSenderInfo const&, ::cricket::MediaType);

    // symbol:
    // ?OnRemoteSenderAdded@RtpTransmissionManager@webrtc@@QEAAXAEBURtpSenderInfo@2@PEAVMediaStreamInterface@2@W4MediaType@cricket@@@Z
    MCAPI void
    OnRemoteSenderAdded(struct webrtc::RtpSenderInfo const&, class webrtc::MediaStreamInterface*, ::cricket::MediaType);

    // symbol:
    // ?OnRemoteSenderRemoved@RtpTransmissionManager@webrtc@@QEAAXAEBURtpSenderInfo@2@PEAVMediaStreamInterface@2@W4MediaType@cricket@@@Z
    MCAPI void OnRemoteSenderRemoved(
        struct webrtc::RtpSenderInfo const&,
        class webrtc::MediaStreamInterface*,
        ::cricket::MediaType
    );

    // symbol:
    // ?RemoveAudioTrack@RtpTransmissionManager@webrtc@@QEAAXPEAVAudioTrackInterface@2@PEAVMediaStreamInterface@2@@Z
    MCAPI void RemoveAudioTrack(class webrtc::AudioTrackInterface*, class webrtc::MediaStreamInterface*);

    // symbol:
    // ?RemoveVideoTrack@RtpTransmissionManager@webrtc@@QEAAXPEAVVideoTrackInterface@2@PEAVMediaStreamInterface@2@@Z
    MCAPI void RemoveVideoTrack(class webrtc::VideoTrackInterface*, class webrtc::MediaStreamInterface*);

    // symbol:
    // ??0RtpTransmissionManager@webrtc@@QEAA@_NPEAVConnectionContext@1@PEAVUsagePattern@1@PEAVPeerConnectionObserver@1@PEAVLegacyStatsCollectorInterface@1@V?$function@$$A6AXXZ@std@@@Z
    MCAPI
    RtpTransmissionManager(bool, class webrtc::ConnectionContext*, class webrtc::UsagePattern*, class webrtc::PeerConnectionObserver*, class webrtc::LegacyStatsCollectorInterface*, std::function<void(void)>);

    // symbol:
    // ?video_media_receive_channel@RtpTransmissionManager@webrtc@@QEBAPEAVVideoMediaReceiveChannelInterface@cricket@@XZ
    MCAPI class cricket::VideoMediaReceiveChannelInterface* video_media_receive_channel() const;

    // symbol:
    // ?video_media_send_channel@RtpTransmissionManager@webrtc@@QEBAPEAVVideoMediaSendChannelInterface@cricket@@XZ
    MCAPI class cricket::VideoMediaSendChannelInterface* video_media_send_channel() const;

    // symbol:
    // ?voice_media_receive_channel@RtpTransmissionManager@webrtc@@QEBAPEAVVoiceMediaReceiveChannelInterface@cricket@@XZ
    MCAPI class cricket::VoiceMediaReceiveChannelInterface* voice_media_receive_channel() const;

    // symbol:
    // ?voice_media_send_channel@RtpTransmissionManager@webrtc@@QEBAPEAVVoiceMediaSendChannelInterface@cricket@@XZ
    MCAPI class cricket::VoiceMediaSendChannelInterface* voice_media_send_channel() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?AddTrackPlanB@RtpTransmissionManager@webrtc@@AEAA?AV?$RTCErrorOr@V?$scoped_refptr@VRtpSenderInterface@webrtc@@@rtc@@@2@V?$scoped_refptr@VMediaStreamTrackInterface@webrtc@@@rtc@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@PEBV?$vector@URtpEncodingParameters@webrtc@@V?$allocator@URtpEncodingParameters@webrtc@@@std@@@7@@Z
    MCAPI class webrtc::RTCErrorOr<class rtc::scoped_refptr<class webrtc::RtpSenderInterface>>
    AddTrackPlanB(class rtc::scoped_refptr<class webrtc::MediaStreamTrackInterface>, std::vector<std::string> const&, std::vector<struct webrtc::RtpEncodingParameters> const*);

    // symbol:
    // ?AddTrackUnifiedPlan@RtpTransmissionManager@webrtc@@AEAA?AV?$RTCErrorOr@V?$scoped_refptr@VRtpSenderInterface@webrtc@@@rtc@@@2@V?$scoped_refptr@VMediaStreamTrackInterface@webrtc@@@rtc@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@PEBV?$vector@URtpEncodingParameters@webrtc@@V?$allocator@URtpEncodingParameters@webrtc@@@std@@@7@@Z
    MCAPI class webrtc::RTCErrorOr<class rtc::scoped_refptr<class webrtc::RtpSenderInterface>>
    AddTrackUnifiedPlan(class rtc::scoped_refptr<class webrtc::MediaStreamTrackInterface>, std::vector<std::string> const&, std::vector<struct webrtc::RtpEncodingParameters> const*);

    // symbol:
    // ?CreateAudioReceiver@RtpTransmissionManager@webrtc@@AEAAXPEAVMediaStreamInterface@2@AEBURtpSenderInfo@2@@Z
    MCAPI void CreateAudioReceiver(class webrtc::MediaStreamInterface*, struct webrtc::RtpSenderInfo const&);

    // symbol:
    // ?CreateVideoReceiver@RtpTransmissionManager@webrtc@@AEAAXPEAVMediaStreamInterface@2@AEBURtpSenderInfo@2@@Z
    MCAPI void CreateVideoReceiver(class webrtc::MediaStreamInterface*, struct webrtc::RtpSenderInfo const&);

    // symbol: ?Observer@RtpTransmissionManager@webrtc@@AEBAPEAVPeerConnectionObserver@2@XZ
    MCAPI class webrtc::PeerConnectionObserver* Observer() const;

    // symbol: ?OnNegotiationNeeded@RtpTransmissionManager@webrtc@@AEAAXXZ
    MCAPI void OnNegotiationNeeded();

    // symbol:
    // ?RemoveAndStopReceiver@RtpTransmissionManager@webrtc@@AEAA?AV?$scoped_refptr@VRtpReceiverInterface@webrtc@@@rtc@@AEBURtpSenderInfo@2@@Z
    MCAPI class rtc::scoped_refptr<class webrtc::RtpReceiverInterface>
    RemoveAndStopReceiver(struct webrtc::RtpSenderInfo const&);

    // symbol: ?media_engine@RtpTransmissionManager@webrtc@@AEBAPEAVMediaEngineInterface@cricket@@XZ
    MCAPI class cricket::MediaEngineInterface* media_engine() const;

    // NOLINTEND
};

}; // namespace webrtc
