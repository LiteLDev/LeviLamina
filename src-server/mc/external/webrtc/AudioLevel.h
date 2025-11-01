#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AudioLevel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkf01906;
    ::ll::UntypedStorage<4, 4> mUnk8ad4c4;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioLevel& operator=(AudioLevel const&);
    AudioLevel(AudioLevel const&);
    AudioLevel();

};

}
