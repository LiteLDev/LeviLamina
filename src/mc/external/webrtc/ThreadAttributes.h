#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct ThreadAttributes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7c4cc2;
    // NOLINTEND

public:
    // prevent constructor by default
    ThreadAttributes& operator=(ThreadAttributes const&);
    ThreadAttributes(ThreadAttributes const&);
    ThreadAttributes();
};

} // namespace webrtc
