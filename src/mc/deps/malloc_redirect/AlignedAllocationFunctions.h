#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::MallocRedirect {

struct AlignedAllocationFunctions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka0cbee;
    ::ll::UntypedStorage<8, 8> mUnkc1d834;
    ::ll::UntypedStorage<8, 8> mUnk68d8c0;
    ::ll::UntypedStorage<8, 8> mUnkaac40b;
    // NOLINTEND

public:
    // prevent constructor by default
    AlignedAllocationFunctions& operator=(AlignedAllocationFunctions const&);
    AlignedAllocationFunctions(AlignedAllocationFunctions const&);
    AlignedAllocationFunctions();
};

} // namespace Bedrock::MallocRedirect
