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
};

} // namespace bx
