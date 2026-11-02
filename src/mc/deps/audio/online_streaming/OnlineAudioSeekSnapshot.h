#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct OnlineAudioSeekSnapshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk99782f;
    ::ll::UntypedStorage<8, 16> mUnked5b1b;
    ::ll::UntypedStorage<8, 8>  mUnk70528a;
    ::ll::UntypedStorage<8, 8>  mUnkc0b397;
    ::ll::UntypedStorage<8, 8>  mUnkf41481;
    ::ll::UntypedStorage<8, 8>  mUnk5d08e7;
    ::ll::UntypedStorage<4, 4>  mUnk455ba1;
    ::ll::UntypedStorage<8, 8>  mUnk9a9e3b;
    ::ll::UntypedStorage<4, 4>  mUnk783999;
    ::ll::UntypedStorage<1, 1>  mUnk4d8a86;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioSeekSnapshot& operator=(OnlineAudioSeekSnapshot const&);
    OnlineAudioSeekSnapshot(OnlineAudioSeekSnapshot const&);
    OnlineAudioSeekSnapshot();
};

} // namespace Audio
