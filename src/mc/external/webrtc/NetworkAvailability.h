#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct NetworkAvailability {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk80b855;
    ::ll::UntypedStorage<1, 1> mUnkcbe8fb;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkAvailability& operator=(NetworkAvailability const&);
    NetworkAvailability(NetworkAvailability const&);
    NetworkAvailability();
};

} // namespace webrtc
