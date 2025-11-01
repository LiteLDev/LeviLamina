#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class UncheckedHandleTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkfcbc2a;
    // NOLINTEND

public:
    // prevent constructor by default
    UncheckedHandleTracker& operator=(UncheckedHandleTracker const&);
    UncheckedHandleTracker(UncheckedHandleTracker const&);
    UncheckedHandleTracker();
};

} // namespace mce
