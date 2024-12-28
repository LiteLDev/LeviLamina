#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class LocalAudioSinkAdapter {
public:
    // prevent constructor by default
    LocalAudioSinkAdapter& operator=(LocalAudioSinkAdapter const&);
    LocalAudioSinkAdapter(LocalAudioSinkAdapter const&);

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
