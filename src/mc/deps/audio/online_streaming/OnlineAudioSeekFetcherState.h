#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct OnlineAudioSeekFetcherState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkb7d917;
    ::ll::UntypedStorage<8, 8>  mUnk1644a9;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioSeekFetcherState& operator=(OnlineAudioSeekFetcherState const&);
    OnlineAudioSeekFetcherState(OnlineAudioSeekFetcherState const&);
    OnlineAudioSeekFetcherState();
};

} // namespace Audio
