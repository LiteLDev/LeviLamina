#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct NetworkEstimate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9a3093;
    ::ll::UntypedStorage<8, 8> mUnkc1ec52;
    ::ll::UntypedStorage<8, 8> mUnk1ae03f;
    ::ll::UntypedStorage<8, 8> mUnka69487;
    ::ll::UntypedStorage<4, 4> mUnkfcd140;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkEstimate& operator=(NetworkEstimate const&);
    NetworkEstimate(NetworkEstimate const&);
    NetworkEstimate();

};

}
