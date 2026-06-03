#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

struct CloserI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CloserI() = 0;

    virtual void close() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace bx
