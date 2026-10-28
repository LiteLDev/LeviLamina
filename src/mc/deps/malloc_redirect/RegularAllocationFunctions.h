#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::MallocRedirect {

struct RegularAllocationFunctions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk145ff8;
    ::ll::UntypedStorage<8, 8> mUnkbadf37;
    ::ll::UntypedStorage<8, 8> mUnk20ee17;
    ::ll::UntypedStorage<8, 8> mUnk1c209c;
    // NOLINTEND

public:
    // prevent constructor by default
    RegularAllocationFunctions& operator=(RegularAllocationFunctions const&);
    RegularAllocationFunctions(RegularAllocationFunctions const&);
    RegularAllocationFunctions();
};

} // namespace Bedrock::MallocRedirect
