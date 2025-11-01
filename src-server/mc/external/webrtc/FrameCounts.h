#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct FrameCounts {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4c68b5;
    ::ll::UntypedStorage<4, 4> mUnkdc7a39;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameCounts& operator=(FrameCounts const&);
    FrameCounts(FrameCounts const&);
    FrameCounts();

};

}
