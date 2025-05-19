#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoTrackSourceProxyWithInternal.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Thread; }
namespace webrtc { class VideoTrackSourceInterface; }
// clang-format on

namespace webrtc {

class VideoTrack {
public:
    // prevent constructor by default
    VideoTrack();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VideoTrack(
        ::std::string_view,
        ::webrtc::scoped_refptr<::webrtc::VideoTrackSourceProxyWithInternal<::webrtc::VideoTrackSourceInterface>>,
        ::rtc::Thread*
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::VideoTrack>
    Create(::std::string_view, ::webrtc::scoped_refptr<::webrtc::VideoTrackSourceInterface>, ::rtc::Thread*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string_view,
        ::webrtc::scoped_refptr<::webrtc::VideoTrackSourceProxyWithInternal<::webrtc::VideoTrackSourceInterface>>,
        ::rtc::Thread*
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForNotifierInterface();

    MCNAPI static void** $vftableForObserverInterface();

    MCNAPI static void** $vftableForVideoSourceBaseGuarded();

    MCNAPI static void** $vftableForRefCountInterface();

    MCNAPI static void** $vftableForMediaStreamTrack();
    // NOLINTEND
};

} // namespace webrtc
