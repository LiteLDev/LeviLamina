#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class LocalAudioSinkAdapter {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI LocalAudioSinkAdapter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForAudioTrackSinkInterface();

    MCAPI static void** $vftableForAudioSource();
    // NOLINTEND
};

} // namespace webrtc
