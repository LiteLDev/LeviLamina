#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class AssignedThreadLocalOverride {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8b1e39;
    ::ll::UntypedStorage<4, 4> mUnk806fd8;
    // NOLINTEND

public:
    // prevent constructor by default
    AssignedThreadLocalOverride& operator=(AssignedThreadLocalOverride const&);
    AssignedThreadLocalOverride(AssignedThreadLocalOverride const&);
    AssignedThreadLocalOverride();

};

}
