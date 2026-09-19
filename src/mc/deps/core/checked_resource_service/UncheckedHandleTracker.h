#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class UncheckedHandleTracker {
public:
    bool mIsValid;

    UncheckedHandleTracker() : mIsValid(false) {}
};

} // namespace mce
