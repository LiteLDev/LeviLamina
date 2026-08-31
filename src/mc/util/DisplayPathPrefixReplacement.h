#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PlatformUtils {

struct DisplayPathPrefixReplacement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk26fa92;
    ::ll::UntypedStorage<8, 16> mUnk11cbc8;
    // NOLINTEND

public:
    // prevent constructor by default
    DisplayPathPrefixReplacement& operator=(DisplayPathPrefixReplacement const&);
    DisplayPathPrefixReplacement(DisplayPathPrefixReplacement const&);
    DisplayPathPrefixReplacement();
};

} // namespace Bedrock::PlatformUtils
