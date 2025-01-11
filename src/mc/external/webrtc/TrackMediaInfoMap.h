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
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<int> GetAttachmentIdByTrack(::webrtc::MediaStreamTrackInterface const*) const;

    MCAPI ::webrtc::scoped_refptr<::webrtc::AudioTrackInterface> GetAudioTrack(::cricket::VoiceSenderInfo const&) const;

    MCAPI ::webrtc::scoped_refptr<::webrtc::AudioTrackInterface>
    GetAudioTrack(::cricket::VoiceReceiverInfo const&) const;

    MCAPI ::cricket::VideoSenderInfo const* GetVideoSenderInfoBySsrc(uint) const;

    MCAPI ::webrtc::scoped_refptr<::webrtc::VideoTrackInterface> GetVideoTrack(::cricket::VideoSenderInfo const&) const;

    MCAPI ::webrtc::scoped_refptr<::webrtc::VideoTrackInterface>
    GetVideoTrack(::cricket::VideoReceiverInfo const&) const;

    MCAPI ::cricket::VoiceSenderInfo const* GetVoiceSenderInfoBySsrc(uint) const;

    MCAPI void
        Initialize(::std::optional<::cricket::VoiceMediaInfo>, ::std::optional<::cricket::VideoMediaInfo>, ::rtc::ArrayView<::webrtc::scoped_refptr<::webrtc::RtpSenderInternal>>, ::rtc::ArrayView<::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal>>);

    MCAPI TrackMediaInfoMap();

    MCAPI TrackMediaInfoMap(::webrtc::TrackMediaInfoMap&&);

    MCAPI TrackMediaInfoMap(::webrtc::TrackMediaInfoMap const&);

    MCAPI ~TrackMediaInfoMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::webrtc::TrackMediaInfoMap&&);

    MCAPI void* $ctor(::webrtc::TrackMediaInfoMap const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
