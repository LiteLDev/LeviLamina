#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct StreamSelector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkb73cfa;
    ::ll::UntypedStorage<8, 32> mUnk5b5391;
    // NOLINTEND

public:
    // prevent constructor by default
    StreamSelector& operator=(StreamSelector const&);
    StreamSelector(StreamSelector const&);
    StreamSelector();
};

} // namespace webrtc
