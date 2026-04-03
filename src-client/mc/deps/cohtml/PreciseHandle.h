#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct PreciseHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk329a34;
    // NOLINTEND

public:
    // prevent constructor by default
    PreciseHandle& operator=(PreciseHandle const&);
    PreciseHandle(PreciseHandle const&);
    PreciseHandle();
};

} // namespace cohtml
