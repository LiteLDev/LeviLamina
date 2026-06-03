#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

struct AllocatorI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AllocatorI() = 0;

    virtual void* realloc(void* _ptr, uint64 _size, uint64 _align, char const* _file, uint _line) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace bx
