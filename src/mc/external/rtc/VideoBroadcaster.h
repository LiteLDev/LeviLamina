#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoFrameBuffer; }
// clang-format on

namespace rtc {

class VideoBroadcaster {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::scoped_refptr<::webrtc::VideoFrameBuffer> const& GetBlackFrameBuffer(int, int);

    MCNAPI void UpdateWants();

    MCNAPI VideoBroadcaster();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForVideoSourceBase();

    MCNAPI static void** $vftableForVideoSinkInterface();
    // NOLINTEND
};

} // namespace rtc
