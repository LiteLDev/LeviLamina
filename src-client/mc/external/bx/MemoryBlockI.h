#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

struct MemoryBlockI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void* more(uint _size) = 0;

    virtual uint getSize() = 0;
    // NOLINTEND
};

} // namespace bx
