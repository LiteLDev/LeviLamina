#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct OnlineAudioFetchRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk436c8c;
    ::ll::UntypedStorage<8, 8> mUnk648e6e;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioFetchRange& operator=(OnlineAudioFetchRange const&);
    OnlineAudioFetchRange(OnlineAudioFetchRange const&);
    OnlineAudioFetchRange();
};

} // namespace Audio
