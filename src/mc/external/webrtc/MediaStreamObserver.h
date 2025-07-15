#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ObserverInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioTrackInterface; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class VideoTrackInterface; }
// clang-format on

namespace webrtc {

class MediaStreamObserver : public ::webrtc::ObserverInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk640d1a;
    ::ll::UntypedStorage<8, 24> mUnk81a3ea;
    ::ll::UntypedStorage<8, 24> mUnke44b06;
    ::ll::UntypedStorage<8, 64> mUnk3d48af;
    ::ll::UntypedStorage<8, 64> mUnk932706;
    ::ll::UntypedStorage<8, 64> mUnk250c0f;
    ::ll::UntypedStorage<8, 64> mUnke7eadd;
    // NOLINTEND

public:
    // prevent constructor by default
    MediaStreamObserver& operator=(MediaStreamObserver const&);
    MediaStreamObserver(MediaStreamObserver const&);
    MediaStreamObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~MediaStreamObserver() /*override*/;

    // vIndex: 0
    virtual void OnChanged() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MediaStreamObserver(
        ::webrtc::MediaStreamInterface* stream,
        ::std::function<void(::webrtc::AudioTrackInterface*, ::webrtc::MediaStreamInterface*)>
            audio_track_added_callback,
        ::std::function<void(::webrtc::AudioTrackInterface*, ::webrtc::MediaStreamInterface*)>
            audio_track_removed_callback,
        ::std::function<void(::webrtc::VideoTrackInterface*, ::webrtc::MediaStreamInterface*)>
            video_track_added_callback,
        ::std::function<void(::webrtc::VideoTrackInterface*, ::webrtc::MediaStreamInterface*)>
            video_track_removed_callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::MediaStreamInterface* stream,
        ::std::function<void(::webrtc::AudioTrackInterface*, ::webrtc::MediaStreamInterface*)>
            audio_track_added_callback,
        ::std::function<void(::webrtc::AudioTrackInterface*, ::webrtc::MediaStreamInterface*)>
            audio_track_removed_callback,
        ::std::function<void(::webrtc::VideoTrackInterface*, ::webrtc::MediaStreamInterface*)>
            video_track_added_callback,
        ::std::function<void(::webrtc::VideoTrackInterface*, ::webrtc::MediaStreamInterface*)>
            video_track_removed_callback
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnChanged();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
