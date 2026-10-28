#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::MallocRedirect {

struct AllocationFunctions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk76e4cb;
    ::ll::UntypedStorage<8, 32> mUnka2b303;
    // NOLINTEND

public:
    // prevent constructor by default
    AllocationFunctions& operator=(AllocationFunctions const&);
    AllocationFunctions(AllocationFunctions const&);
    AllocationFunctions();
};

} // namespace Bedrock::MallocRedirect
