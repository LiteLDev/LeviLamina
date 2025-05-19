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
    // prevent constructor by default
    TrackMediaInfoMap& operator=(TrackMediaInfoMap const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<int> GetAttachmentIdByTrack(::webrtc::MediaStreamTrackInterface const*) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::AudioTrackInterface>
    GetAudioTrack(::cricket::VoiceSenderInfo const&) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::AudioTrackInterface>
    GetAudioTrack(::cricket::VoiceReceiverInfo const&) const;

    MCNAPI ::cricket::VideoSenderInfo const* GetVideoSenderInfoBySsrc(uint) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::VideoTrackInterface>
    GetVideoTrack(::cricket::VideoSenderInfo const&) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::VideoTrackInterface>
    GetVideoTrack(::cricket::VideoReceiverInfo const&) const;

    MCNAPI ::cricket::VoiceSenderInfo const* GetVoiceSenderInfoBySsrc(uint) const;

    MCNAPI void Initialize(
        ::std::optional<::cricket::VoiceMediaInfo>,
        ::std::optional<::cricket::VideoMediaInfo>,
        ::rtc::ArrayView<::webrtc::scoped_refptr<::webrtc::RtpSenderInternal>>,
        ::rtc::ArrayView<::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal>>
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
