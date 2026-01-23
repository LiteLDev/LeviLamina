#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiler::details {

struct Category {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk316a96;
    // NOLINTEND

public:
    // prevent constructor by default
    Category& operator=(Category const&);
    Category(Category const&);
    Category();
};

} // namespace Bedrock::Profiler::details
