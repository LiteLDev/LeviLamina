#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::MallocRedirect {

struct AlignedAllocationFunctions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void* (*)(uint64, uint64)>        allocate;
    ::ll::TypedStorage<8, 8, void (*)(void*)>                  deallocate;
    ::ll::TypedStorage<8, 8, void* (*)(void*, uint64, uint64)> reallocate;
    ::ll::TypedStorage<8, 8, uint64 (*)(void*, uint64)>        getSize;
    // NOLINTEND
};

} // namespace Bedrock::MallocRedirect
