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
    // member functions
    // NOLINTBEGIN
    MCAPI
    VideoTrack(::std::string_view, ::webrtc::scoped_refptr<::webrtc::VideoTrackSourceProxyWithInternal<::webrtc::VideoTrackSourceInterface>>, ::rtc::Thread*);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::webrtc::scoped_refptr<::webrtc::VideoTrack>
    Create(::std::string_view, ::webrtc::scoped_refptr<::webrtc::VideoTrackSourceInterface>, ::rtc::Thread*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::string_view, ::webrtc::scoped_refptr<::webrtc::VideoTrackSourceProxyWithInternal<::webrtc::VideoTrackSourceInterface>>, ::rtc::Thread*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForNotifierInterface();

    MCAPI static void** $vftableForObserverInterface();

    MCAPI static void** $vftableForVideoSourceBaseGuarded();

    MCAPI static void** $vftableForRefCountInterface();

    MCAPI static void** $vftableForMediaStreamTrack();
    // NOLINTEND
};

} // namespace webrtc
