#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class LocalAudioSinkAdapter {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LocalAudioSinkAdapter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForAudioTrackSinkInterface();

    MCNAPI static void** $vftableForAudioSource();
    // NOLINTEND
};

} // namespace webrtc
