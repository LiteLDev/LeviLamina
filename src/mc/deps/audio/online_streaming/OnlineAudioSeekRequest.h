#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct OnlineAudioSeekRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1521f8;
    ::ll::UntypedStorage<4, 4> mUnk9e560d;
    ::ll::UntypedStorage<4, 4> mUnkf7aea5;
    ::ll::UntypedStorage<8, 8> mUnk362ce2;
    ::ll::UntypedStorage<8, 8> mUnkeb2c78;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioSeekRequest& operator=(OnlineAudioSeekRequest const&);
    OnlineAudioSeekRequest(OnlineAudioSeekRequest const&);
    OnlineAudioSeekRequest();
};

} // namespace Audio
