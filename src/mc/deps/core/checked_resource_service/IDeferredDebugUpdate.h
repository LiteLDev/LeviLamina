#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class IDeferredDebugUpdate {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDeferredDebugUpdate() = default;

    virtual void apply() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace mce
