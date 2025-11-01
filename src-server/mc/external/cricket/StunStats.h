#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class StunStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk72a96d;
    ::ll::UntypedStorage<4, 4> mUnkc31f48;
    ::ll::UntypedStorage<8, 8> mUnk91f310;
    ::ll::UntypedStorage<8, 8> mUnk2f1e4d;
    // NOLINTEND

public:
    // prevent constructor by default
    StunStats& operator=(StunStats const&);
    StunStats(StunStats const&);
    StunStats();

};

}
