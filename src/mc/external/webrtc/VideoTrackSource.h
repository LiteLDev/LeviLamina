#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaSourceInterface.h"

namespace webrtc {

class VideoTrackSource {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void SetState(::webrtc::MediaSourceInterface::SourceState);

    MCAPI explicit VideoTrackSource(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI static void** $vftableForRefCountInterface();

    MCAPI static void** $vftableForNotifierInterface();
    // NOLINTEND
};

} // namespace webrtc
