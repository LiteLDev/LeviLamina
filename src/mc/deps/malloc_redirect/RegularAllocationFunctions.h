#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::MallocRedirect {

struct RegularAllocationFunctions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void* (*)(uint64)>        allocate;
    ::ll::TypedStorage<8, 8, void (*)(void*)>          deallocate;
    ::ll::TypedStorage<8, 8, void* (*)(void*, uint64)> reallocate;
    ::ll::TypedStorage<8, 8, uint64 (*)(void*)>        getSize;
    // NOLINTEND
};

} // namespace Bedrock::MallocRedirect
