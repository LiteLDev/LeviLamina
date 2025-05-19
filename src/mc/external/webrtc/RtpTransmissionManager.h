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
    RtpTransmissionManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddAudioTrack(::webrtc::AudioTrackInterface*, ::webrtc::MediaStreamInterface*);

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> AddTrack(
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface>,
        ::std::vector<::std::string> const&,
        ::std::vector<::webrtc::RtpEncodingParameters> const*
    );

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> AddTrackPlanB(
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface>,
        ::std::vector<::std::string> const&,
        ::std::vector<::webrtc::RtpEncodingParameters> const*
    );

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> AddTrackUnifiedPlan(
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface>,
        ::std::vector<::std::string> const&,
        ::std::vector<::webrtc::RtpEncodingParameters> const*
    );

    MCNAPI void AddVideoTrack(::webrtc::VideoTrackInterface*, ::webrtc::MediaStreamInterface*);

    MCNAPI void Close();

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
        CreateAndAddTransceiver(
            ::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>,
            ::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>>
        );

    MCNAPI void CreateAudioReceiver(::webrtc::MediaStreamInterface*, ::webrtc::RtpSenderInfo const&);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>>
    CreateReceiver(::cricket::MediaType, ::std::string const&);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>> CreateSender(
        ::cricket::MediaType,
        ::std::string const&,
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface>,
        ::std::vector<::std::string> const&,
        ::std::vector<::webrtc::RtpEncodingParameters> const&
    );

    MCNAPI void CreateVideoReceiver(::webrtc::MediaStreamInterface*, ::webrtc::RtpSenderInfo const&);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
    FindFirstTransceiverForAddedTrack(
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface>,
        ::std::vector<::webrtc::RtpEncodingParameters> const*
    );

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>>
    FindReceiverById(::std::string const&) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>
    FindSenderById(::std::string const&) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>
    FindSenderForTrack(::webrtc::MediaStreamTrackInterface*) const;

    MCNAPI ::webrtc::RtpSenderInfo const*
    FindSenderInfo(::std::vector<::webrtc::RtpSenderInfo> const&, ::std::string const&, ::std::string const&) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
    GetAudioTransceiver() const;

    MCNAPI ::std::vector<::webrtc::RtpSenderInfo>* GetLocalSenderInfos(::cricket::MediaType);

    MCNAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>>>
    GetReceiversInternal() const;

    MCNAPI ::std::vector<::webrtc::RtpSenderInfo>* GetRemoteSenderInfos(::cricket::MediaType);

    MCNAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>>
    GetSendersInternal() const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
    GetVideoTransceiver() const;

    MCNAPI ::webrtc::PeerConnectionObserver* Observer() const;

    MCNAPI void OnLocalSenderAdded(::webrtc::RtpSenderInfo const&, ::cricket::MediaType);

    MCNAPI void OnLocalSenderRemoved(::webrtc::RtpSenderInfo const&, ::cricket::MediaType);

    MCNAPI void OnNegotiationNeeded();

    MCNAPI void
    OnRemoteSenderAdded(::webrtc::RtpSenderInfo const&, ::webrtc::MediaStreamInterface*, ::cricket::MediaType);

    MCNAPI void
    OnRemoteSenderRemoved(::webrtc::RtpSenderInfo const&, ::webrtc::MediaStreamInterface*, ::cricket::MediaType);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface>
    RemoveAndStopReceiver(::webrtc::RtpSenderInfo const&);

    MCNAPI void RemoveAudioTrack(::webrtc::AudioTrackInterface*, ::webrtc::MediaStreamInterface*);

    MCNAPI void RemoveVideoTrack(::webrtc::VideoTrackInterface*, ::webrtc::MediaStreamInterface*);

    MCNAPI RtpTransmissionManager(
        bool,
        ::webrtc::ConnectionContext*,
        ::webrtc::UsagePattern*,
        ::webrtc::PeerConnectionObserver*,
        ::webrtc::LegacyStatsCollectorInterface*,
        ::std::function<void()>
    );

    MCNAPI ::cricket::MediaEngineInterface* media_engine() const;

    MCNAPI ::cricket::VideoMediaReceiveChannelInterface* video_media_receive_channel() const;

    MCNAPI ::cricket::VideoMediaSendChannelInterface* video_media_send_channel() const;

    MCNAPI ::cricket::VoiceMediaReceiveChannelInterface* voice_media_receive_channel() const;

    MCNAPI ::cricket::VoiceMediaSendChannelInterface* voice_media_send_channel() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        bool,
        ::webrtc::ConnectionContext*,
        ::webrtc::UsagePattern*,
        ::webrtc::PeerConnectionObserver*,
        ::webrtc::LegacyStatsCollectorInterface*,
        ::std::function<void()>
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
