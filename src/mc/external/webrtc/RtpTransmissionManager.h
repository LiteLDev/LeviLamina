#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/RtpReceiverProxyWithInternal.h"
#include "mc/external/webrtc/RtpSenderProxyWithInternal.h"
#include "mc/external/webrtc/RtpTransceiverProxyWithInternal.h"
#include "mc/external/webrtc/scoped_refptr.h"

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

class RtpTransmissionManager {
public:
    // prevent constructor by default
    RtpTransmissionManager& operator=(RtpTransmissionManager const&);
    RtpTransmissionManager(RtpTransmissionManager const&);
    RtpTransmissionManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddAudioTrack(::webrtc::AudioTrackInterface*, ::webrtc::MediaStreamInterface*);

    MCAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>>
    AddTrack(::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface>, ::std::vector<::std::string> const&, ::std::vector<::webrtc::RtpEncodingParameters> const*);

    MCAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>>
    AddTrackPlanB(::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface>, ::std::vector<::std::string> const&, ::std::vector<::webrtc::RtpEncodingParameters> const*);

    MCAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>>
    AddTrackUnifiedPlan(::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface>, ::std::vector<::std::string> const&, ::std::vector<::webrtc::RtpEncodingParameters> const*);

    MCAPI void AddVideoTrack(::webrtc::VideoTrackInterface*, ::webrtc::MediaStreamInterface*);

    MCAPI void Close();

    MCAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
        CreateAndAddTransceiver(::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>, ::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>>);

    MCAPI void CreateAudioReceiver(::webrtc::MediaStreamInterface*, ::webrtc::RtpSenderInfo const&);

    MCAPI ::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>>
    CreateReceiver(::cricket::MediaType, ::std::string const&);

    MCAPI ::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>
    CreateSender(::cricket::MediaType, ::std::string const&, ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface>, ::std::vector<::std::string> const&, ::std::vector<::webrtc::RtpEncodingParameters> const&);

    MCAPI void CreateVideoReceiver(::webrtc::MediaStreamInterface*, ::webrtc::RtpSenderInfo const&);

    MCAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
    FindFirstTransceiverForAddedTrack(::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface>, ::std::vector<::webrtc::RtpEncodingParameters> const*);

    MCAPI ::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>>
    FindReceiverById(::std::string const&) const;

    MCAPI ::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>
    FindSenderById(::std::string const&) const;

    MCAPI ::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>
    FindSenderForTrack(::webrtc::MediaStreamTrackInterface*) const;

    MCAPI ::webrtc::RtpSenderInfo const*
    FindSenderInfo(::std::vector<::webrtc::RtpSenderInfo> const&, ::std::string const&, ::std::string const&) const;

    MCAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
    GetAudioTransceiver() const;

    MCAPI ::std::vector<::webrtc::RtpSenderInfo>* GetLocalSenderInfos(::cricket::MediaType);

    MCAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>>>
    GetReceiversInternal() const;

    MCAPI ::std::vector<::webrtc::RtpSenderInfo>* GetRemoteSenderInfos(::cricket::MediaType);

    MCAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>>
    GetSendersInternal() const;

    MCAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
    GetVideoTransceiver() const;

    MCAPI ::webrtc::PeerConnectionObserver* Observer() const;

    MCAPI void OnLocalSenderAdded(::webrtc::RtpSenderInfo const&, ::cricket::MediaType);

    MCAPI void OnLocalSenderRemoved(::webrtc::RtpSenderInfo const&, ::cricket::MediaType);

    MCAPI void OnNegotiationNeeded();

    MCAPI void
    OnRemoteSenderAdded(::webrtc::RtpSenderInfo const&, ::webrtc::MediaStreamInterface*, ::cricket::MediaType);

    MCAPI void
    OnRemoteSenderRemoved(::webrtc::RtpSenderInfo const&, ::webrtc::MediaStreamInterface*, ::cricket::MediaType);

    MCAPI ::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface> RemoveAndStopReceiver(::webrtc::RtpSenderInfo const&);

    MCAPI void RemoveAudioTrack(::webrtc::AudioTrackInterface*, ::webrtc::MediaStreamInterface*);

    MCAPI void RemoveVideoTrack(::webrtc::VideoTrackInterface*, ::webrtc::MediaStreamInterface*);

    MCAPI
    RtpTransmissionManager(bool, ::webrtc::ConnectionContext*, ::webrtc::UsagePattern*, ::webrtc::PeerConnectionObserver*, ::webrtc::LegacyStatsCollectorInterface*, ::std::function<void()>);

    MCAPI ::cricket::MediaEngineInterface* media_engine() const;

    MCAPI ::cricket::VideoMediaReceiveChannelInterface* video_media_receive_channel() const;

    MCAPI ::cricket::VideoMediaSendChannelInterface* video_media_send_channel() const;

    MCAPI ::cricket::VoiceMediaReceiveChannelInterface* voice_media_receive_channel() const;

    MCAPI ::cricket::VoiceMediaSendChannelInterface* voice_media_send_channel() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(bool, ::webrtc::ConnectionContext*, ::webrtc::UsagePattern*, ::webrtc::PeerConnectionObserver*, ::webrtc::LegacyStatsCollectorInterface*, ::std::function<void()>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
