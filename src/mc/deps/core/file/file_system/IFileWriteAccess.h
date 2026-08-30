#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileWriteAccess {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFileWriteAccess();

    virtual uint64 fwrite(void const* buffer, uint64 size, uint64 count, void* file) = 0;
    // NOLINTEND
};
