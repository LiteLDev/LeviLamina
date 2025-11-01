#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct VideoMediaInfo; }
namespace cricket { struct VideoReceiverInfo; }
namespace cricket { struct VideoSenderInfo; }
namespace cricket { struct VoiceMediaInfo; }
namespace cricket { struct VoiceReceiverInfo; }
namespace cricket { struct VoiceSenderInfo; }
namespace webrtc { class AudioTrackInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class RtpReceiverInternal; }
namespace webrtc { class RtpSenderInternal; }
namespace webrtc { class VideoTrackInterface; }
// clang-format on

namespace webrtc {

class TrackMediaInfoMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk6c0313;
    ::ll::UntypedStorage<8, 96> mUnka1e5d0;
    ::ll::UntypedStorage<8, 112> mUnk583522;
    ::ll::UntypedStorage<8, 16> mUnk7c267b;
    ::ll::UntypedStorage<8, 16> mUnk5ea3ef;
    ::ll::UntypedStorage<8, 16> mUnk5fe932;
    ::ll::UntypedStorage<8, 16> mUnkebd949;
    ::ll::UntypedStorage<8, 16> mUnkda14a8;
    ::ll::UntypedStorage<8, 16> mUnk9f8cc1;
    ::ll::UntypedStorage<8, 16> mUnka2073c;
    ::ll::UntypedStorage<8, 16> mUnk58e1bf;
    ::ll::UntypedStorage<8, 16> mUnk9f8b15;
    // NOLINTEND

public:
    // prevent constructor by default
    TrackMediaInfoMap& operator=(TrackMediaInfoMap const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<int> GetAttachmentIdByTrack(::webrtc::MediaStreamTrackInterface const* track) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::AudioTrackInterface> GetAudioTrack(::cricket::VoiceReceiverInfo const& voice_receiver_info) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::AudioTrackInterface> GetAudioTrack(::cricket::VoiceSenderInfo const& voice_sender_info) const;

    MCNAPI ::cricket::VideoSenderInfo const* GetVideoSenderInfoBySsrc(uint ssrc) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::VideoTrackInterface> GetVideoTrack(::cricket::VideoReceiverInfo const& video_receiver_info) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::VideoTrackInterface> GetVideoTrack(::cricket::VideoSenderInfo const& video_sender_info) const;

    MCNAPI ::cricket::VoiceSenderInfo const* GetVoiceSenderInfoBySsrc(uint ssrc) const;

    MCNAPI void Initialize(::std::optional<::cricket::VoiceMediaInfo> voice_media_info, ::std::optional<::cricket::VideoMediaInfo> video_media_info, ::rtc::ArrayView<::webrtc::scoped_refptr<::webrtc::RtpSenderInternal>> rtp_senders, ::rtc::ArrayView<::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal>> rtp_receivers);

    MCNAPI TrackMediaInfoMap();

    MCNAPI TrackMediaInfoMap(::webrtc::TrackMediaInfoMap&&);

    MCNAPI TrackMediaInfoMap(::webrtc::TrackMediaInfoMap const&);

    MCNAPI ~TrackMediaInfoMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::TrackMediaInfoMap&&);

    MCNAPI void* $ctor(::webrtc::TrackMediaInfoMap const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
