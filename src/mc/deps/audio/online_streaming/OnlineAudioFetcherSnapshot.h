#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct OnlineAudioFetcherSnapshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkda1a65;
    ::ll::UntypedStorage<8, 8>  mUnk8f4306;
    ::ll::UntypedStorage<4, 4>  mUnk7c28d0;
    ::ll::UntypedStorage<8, 96> mUnkef9a6d;
    ::ll::UntypedStorage<8, 96> mUnk77b911;
    ::ll::UntypedStorage<8, 96> mUnkae1f89;
    ::ll::UntypedStorage<8, 96> mUnk464a2e;
    ::ll::UntypedStorage<1, 1>  mUnkf02e65;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioFetcherSnapshot& operator=(OnlineAudioFetcherSnapshot const&);
    OnlineAudioFetcherSnapshot(OnlineAudioFetcherSnapshot const&);
    OnlineAudioFetcherSnapshot();
};

} // namespace Audio
