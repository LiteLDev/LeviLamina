#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct OnlineAudioMainThreadPositioningState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9da31f;
    ::ll::UntypedStorage<1, 1>  mUnk7466c1;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioMainThreadPositioningState& operator=(OnlineAudioMainThreadPositioningState const&);
    OnlineAudioMainThreadPositioningState(OnlineAudioMainThreadPositioningState const&);
    OnlineAudioMainThreadPositioningState();
};

} // namespace Audio
