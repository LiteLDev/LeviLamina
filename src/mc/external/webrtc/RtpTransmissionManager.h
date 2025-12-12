#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/RtpReceiverProxyWithInternal.h"
#include "mc/external/webrtc/RtpSenderBase.h"
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

class RtpTransmissionManager : public ::webrtc::RtpSenderBase::SetStreamsObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk367a7f;
    ::ll::UntypedStorage<8, 24> mUnka389af;
    ::ll::UntypedStorage<8, 24> mUnk4d0ce4;
    ::ll::UntypedStorage<8, 24> mUnkb0ca04;
    ::ll::UntypedStorage<8, 24> mUnk54449d;
    ::ll::UntypedStorage<1, 1>  mUnk71129b;
    ::ll::UntypedStorage<1, 1>  mUnkb54966;
    ::ll::UntypedStorage<8, 8>  mUnk61d4c0;
    ::ll::UntypedStorage<8, 8>  mUnk68803e;
    ::ll::UntypedStorage<8, 8>  mUnk2bc804;
    ::ll::UntypedStorage<8, 8>  mUnk405916;
    ::ll::UntypedStorage<8, 64> mUnk80bf6f;
    ::ll::UntypedStorage<8, 16> mUnk22c438;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpTransmissionManager& operator=(RtpTransmissionManager const&);
    RtpTransmissionManager(RtpTransmissionManager const&);
    RtpTransmissionManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnSetStreams() /*override*/;

    virtual ~RtpTransmissionManager() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddAudioTrack(::webrtc::AudioTrackInterface* track, ::webrtc::MediaStreamInterface* stream);

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> AddTrack(
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track,
        ::std::vector<::std::string> const&                          stream_ids,
        ::std::vector<::webrtc::RtpEncodingParameters> const*        init_send_encodings
    );

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> AddTrackPlanB(
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track,
        ::std::vector<::std::string> const&                          stream_ids,
        ::std::vector<::webrtc::RtpEncodingParameters> const*        init_send_encodings
    );

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> AddTrackUnifiedPlan(
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track,
        ::std::vector<::std::string> const&                          stream_ids,
        ::std::vector<::webrtc::RtpEncodingParameters> const*        init_send_encodings
    );

    MCNAPI void AddVideoTrack(::webrtc::VideoTrackInterface* track, ::webrtc::MediaStreamInterface* stream);

    MCNAPI void Close();

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
    CreateAndAddTransceiver(
        ::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>     sender,
        ::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>> receiver
    );

    MCNAPI void
    CreateAudioReceiver(::webrtc::MediaStreamInterface* stream, ::webrtc::RtpSenderInfo const& remote_sender_info);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>>
    CreateReceiver(::cricket::MediaType media_type, ::std::string const& receiver_id);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>> CreateSender(
        ::cricket::MediaType                                         media_type,
        ::std::string const&                                         id,
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track,
        ::std::vector<::std::string> const&                          stream_ids,
        ::std::vector<::webrtc::RtpEncodingParameters> const&        send_encodings
    );

    MCNAPI void
    CreateVideoReceiver(::webrtc::MediaStreamInterface* stream, ::webrtc::RtpSenderInfo const& remote_sender_info);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
    FindFirstTransceiverForAddedTrack(
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track,
        ::std::vector<::webrtc::RtpEncodingParameters> const*        init_send_encodings
    );

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>>
    FindReceiverById(::std::string const& receiver_id) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>
    FindSenderById(::std::string const& sender_id) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>
    FindSenderForTrack(::webrtc::MediaStreamTrackInterface* track) const;

    MCNAPI ::webrtc::RtpSenderInfo const* FindSenderInfo(
        ::std::vector<::webrtc::RtpSenderInfo> const& infos,
        ::std::string const&                          stream_id,
        ::std::string const&                          sender_id
    ) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
    GetAudioTransceiver() const;

    MCNAPI ::std::vector<::webrtc::RtpSenderInfo>* GetLocalSenderInfos(::cricket::MediaType media_type);

    MCNAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>>>
    GetReceiversInternal() const;

    MCNAPI ::std::vector<::webrtc::RtpSenderInfo>* GetRemoteSenderInfos(::cricket::MediaType media_type);

    MCNAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>>
    GetSendersInternal() const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
    GetVideoTransceiver() const;

    MCNAPI ::webrtc::PeerConnectionObserver* Observer() const;

    MCNAPI void OnLocalSenderAdded(::webrtc::RtpSenderInfo const& sender_info, ::cricket::MediaType media_type);

    MCNAPI void OnLocalSenderRemoved(::webrtc::RtpSenderInfo const& sender_info, ::cricket::MediaType media_type);

    MCNAPI void OnNegotiationNeeded();

    MCNAPI void OnRemoteSenderAdded(
        ::webrtc::RtpSenderInfo const&  sender_info,
        ::webrtc::MediaStreamInterface* stream,
        ::cricket::MediaType            media_type
    );

    MCNAPI void OnRemoteSenderRemoved(
        ::webrtc::RtpSenderInfo const&  sender_info,
        ::webrtc::MediaStreamInterface* stream,
        ::cricket::MediaType            media_type
    );

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface>
    RemoveAndStopReceiver(::webrtc::RtpSenderInfo const& remote_sender_info);

    MCNAPI void RemoveAudioTrack(::webrtc::AudioTrackInterface* track, ::webrtc::MediaStreamInterface* stream);

    MCNAPI void RemoveVideoTrack(::webrtc::VideoTrackInterface* track, ::webrtc::MediaStreamInterface* stream);

    MCNAPI RtpTransmissionManager(
        bool                                     is_unified_plan,
        ::webrtc::ConnectionContext*             context,
        ::webrtc::UsagePattern*                  usage_pattern,
        ::webrtc::PeerConnectionObserver*        observer,
        ::webrtc::LegacyStatsCollectorInterface* legacy_stats,
        ::std::function<void()>                  on_negotiation_needed
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
        bool                                     is_unified_plan,
        ::webrtc::ConnectionContext*             context,
        ::webrtc::UsagePattern*                  usage_pattern,
        ::webrtc::PeerConnectionObserver*        observer,
        ::webrtc::LegacyStatsCollectorInterface* legacy_stats,
        ::std::function<void()>                  on_negotiation_needed
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnSetStreams();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
