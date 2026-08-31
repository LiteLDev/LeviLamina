#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

class BrpakIndex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk35cf6e;
    ::ll::UntypedStorage<8, 32> mUnke702e9;
    // NOLINTEND

public:
    // prevent constructor by default
    BrpakIndex& operator=(BrpakIndex const&);
    BrpakIndex(BrpakIndex const&);
    BrpakIndex();
};

} // namespace Bedrock::Resources
