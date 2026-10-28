#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct OnlineAudioFetchStartRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8b528d;
    ::ll::UntypedStorage<8, 8> mUnk54f2e4;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioFetchStartRequest& operator=(OnlineAudioFetchStartRequest const&);
    OnlineAudioFetchStartRequest(OnlineAudioFetchStartRequest const&);
    OnlineAudioFetchStartRequest();
};

} // namespace Audio
