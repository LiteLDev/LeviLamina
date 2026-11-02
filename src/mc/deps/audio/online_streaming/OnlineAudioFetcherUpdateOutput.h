#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct OnlineAudioFetcherUpdateOutput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk6fb4f7;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioFetcherUpdateOutput& operator=(OnlineAudioFetcherUpdateOutput const&);
    OnlineAudioFetcherUpdateOutput(OnlineAudioFetcherUpdateOutput const&);
    OnlineAudioFetcherUpdateOutput();
};

} // namespace Audio
