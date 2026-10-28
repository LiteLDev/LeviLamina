#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct OnlineAudioFetcherUpdateInput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkdd06cf;
    ::ll::UntypedStorage<8, 8>  mUnke73624;
    ::ll::UntypedStorage<8, 40> mUnk5527d8;
    ::ll::UntypedStorage<8, 8>  mUnkf10ed4;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioFetcherUpdateInput& operator=(OnlineAudioFetcherUpdateInput const&);
    OnlineAudioFetcherUpdateInput(OnlineAudioFetcherUpdateInput const&);
    OnlineAudioFetcherUpdateInput();
};

} // namespace Audio
