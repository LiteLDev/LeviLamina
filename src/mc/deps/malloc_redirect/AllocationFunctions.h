#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/malloc_redirect/AlignedAllocationFunctions.h"
#include "mc/deps/malloc_redirect/RegularAllocationFunctions.h"

namespace Bedrock::MallocRedirect {

struct AllocationFunctions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Bedrock::MallocRedirect::RegularAllocationFunctions> regular;
    ::ll::TypedStorage<8, 32, ::Bedrock::MallocRedirect::AlignedAllocationFunctions> aligned;
    // NOLINTEND
};

} // namespace Bedrock::MallocRedirect
