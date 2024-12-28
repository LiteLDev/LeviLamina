#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class OSError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke351d6;
    ::ll::UntypedStorage<4, 4>  mUnk702f82;
    // NOLINTEND

public:
    // prevent constructor by default
    OSError& operator=(OSError const&);
    OSError(OSError const&);
    OSError();
};

} // namespace Bedrock
