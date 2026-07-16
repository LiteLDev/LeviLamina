#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class StunStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk29f114;
    ::ll::UntypedStorage<4, 4> mUnkb8839d;
    ::ll::UntypedStorage<8, 8> mUnk391b00;
    ::ll::UntypedStorage<8, 8> mUnk2059a3;
    // NOLINTEND

public:
    // prevent constructor by default
    StunStats& operator=(StunStats const&);
    StunStats(StunStats const&);
    StunStats();
};

} // namespace webrtc
