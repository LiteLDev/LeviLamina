#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::RefCount::details {

struct KeepAlive {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkffa523;
    ::ll::UntypedStorage<1, 1> mUnk58990e;
    // NOLINTEND

public:
    // prevent constructor by default
    KeepAlive& operator=(KeepAlive const&);
    KeepAlive(KeepAlive const&);
    KeepAlive();
};

} // namespace Bedrock::RefCount::details
