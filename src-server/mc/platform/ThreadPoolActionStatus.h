#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OS {

struct ThreadPoolActionStatus {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void Complete() = 0;

    // vIndex: 1
    virtual void MayRunLong() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OS
