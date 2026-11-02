#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct OnlineAudioSeekFetchState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk99bf91;
    ::ll::UntypedStorage<4, 4> mUnka52937;
    ::ll::UntypedStorage<1, 1> mUnk59058a;
    ::ll::UntypedStorage<1, 1> mUnk5d8f6d;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioSeekFetchState& operator=(OnlineAudioSeekFetchState const&);
    OnlineAudioSeekFetchState(OnlineAudioSeekFetchState const&);
    OnlineAudioSeekFetchState();
};

} // namespace Audio
