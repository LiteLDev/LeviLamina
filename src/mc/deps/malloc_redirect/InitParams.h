#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/malloc_redirect/AllocationFunctions.h"

namespace Bedrock::MallocRedirect {

struct InitParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::Bedrock::MallocRedirect::AllocationFunctions> redirectedAllocationFunctions;
    ::ll::TypedStorage<8, 8, void (*)(char const*)>                           onFatalError;
    ::ll::TypedStorage<1, 1, bool>                                            supportReentrancy;
    // NOLINTEND
};

} // namespace Bedrock::MallocRedirect
