#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct StreamSelector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkecff90;
    ::ll::UntypedStorage<8, 32> mUnk33c6a3;
    // NOLINTEND

public:
    // prevent constructor by default
    StreamSelector& operator=(StreamSelector const&);
    StreamSelector(StreamSelector const&);
    StreamSelector();
};

} // namespace cricket
