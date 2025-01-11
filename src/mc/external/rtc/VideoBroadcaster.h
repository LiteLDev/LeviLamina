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
    MCAPI ::webrtc::scoped_refptr<::webrtc::VideoFrameBuffer> const& GetBlackFrameBuffer(int, int);

    MCAPI void UpdateWants();

    MCAPI VideoBroadcaster();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForVideoSourceBase();

    MCAPI static void** $vftableForVideoSinkInterface();
    // NOLINTEND
};

} // namespace rtc
