#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class IDeferredDebugUpdate {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IDeferredDebugUpdate() = default;

    // vIndex: 1
    virtual void apply() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace mce
