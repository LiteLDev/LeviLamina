#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioTrackInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class RtpReceiverInternal; }
namespace webrtc { class RtpSenderInternal; }
namespace webrtc { class VideoTrackInterface; }
namespace webrtc { struct VideoMediaInfo; }
namespace webrtc { struct VideoReceiverInfo; }
namespace webrtc { struct VideoSenderInfo; }
namespace webrtc { struct VoiceMediaInfo; }
namespace webrtc { struct VoiceReceiverInfo; }
namespace webrtc { struct VoiceSenderInfo; }
// clang-format on

namespace webrtc {

class TrackMediaInfoMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk6c0313;
    ::ll::UntypedStorage<8, 96>  mUnk9acee3;
    ::ll::UntypedStorage<8, 112> mUnkae5543;
    ::ll::UntypedStorage<8, 16>  mUnka89c14;
    ::ll::UntypedStorage<8, 16>  mUnkf5cea2;
    ::ll::UntypedStorage<8, 16>  mUnk8c4165;
    ::ll::UntypedStorage<8, 16>  mUnk5a280a;
    ::ll::UntypedStorage<8, 16>  mUnkda14a8;
    ::ll::UntypedStorage<8, 16>  mUnk4c0b88;
    ::ll::UntypedStorage<8, 16>  mUnke7db10;
    ::ll::UntypedStorage<8, 16>  mUnk1c789c;
    ::ll::UntypedStorage<8, 16>  mUnk416203;
    // NOLINTEND

public:
    // prevent constructor by default
    TrackMediaInfoMap& operator=(TrackMediaInfoMap const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<int> GetAttachmentIdByTrack(::webrtc::MediaStreamTrackInterface const* track) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::AudioTrackInterface>
    GetAudioTrack(::webrtc::VoiceReceiverInfo const& voice_receiver_info) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::AudioTrackInterface>
    GetAudioTrack(::webrtc::VoiceSenderInfo const& voice_sender_info) const;

    MCNAPI ::webrtc::VideoSenderInfo const* GetVideoSenderInfoBySsrc(uint ssrc) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::VideoTrackInterface>
    GetVideoTrack(::webrtc::VideoReceiverInfo const& video_receiver_info) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::VideoTrackInterface>
    GetVideoTrack(::webrtc::VideoSenderInfo const& video_sender_info) const;

    MCNAPI ::webrtc::VoiceSenderInfo const* GetVoiceSenderInfoBySsrc(uint ssrc) const;

    MCNAPI void Initialize(
        ::std::optional<::webrtc::VoiceMediaInfo> voice_media_info,
        ::std::optional<::webrtc::VideoMediaInfo> video_media_info,
        ::webrtc::ArrayView<::webrtc::scoped_refptr<::webrtc::RtpSenderInternal>, 18446744073709546905>   rtp_senders,
        ::webrtc::ArrayView<::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal>, 18446744073709546905> rtp_receivers
    );

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

} // namespace webrtc
