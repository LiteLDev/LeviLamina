#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct Resolution {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkac6084;
    ::ll::UntypedStorage<4, 4> mUnk98adbb;
    // NOLINTEND

public:
    // prevent constructor by default
    Resolution& operator=(Resolution const&);
    Resolution(Resolution const&);
    Resolution();

};

}
