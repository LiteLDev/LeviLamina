#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::Detail {

class LFIntrusiveStack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke874ab;
    // NOLINTEND

public:
    // prevent constructor by default
    LFIntrusiveStack& operator=(LFIntrusiveStack const&);
    LFIntrusiveStack(LFIntrusiveStack const&);
    LFIntrusiveStack();
};

} // namespace Bedrock::Threading::Detail
