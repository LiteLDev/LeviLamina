#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaSourceInterface.h"

namespace webrtc {

class VideoTrackSource {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void SetState(::webrtc::MediaSourceInterface::SourceState);

    MCNAPI explicit VideoTrackSource(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForRefCountInterface();

    MCNAPI static void** $vftableForNotifierInterface();
    // NOLINTEND
};

} // namespace webrtc
