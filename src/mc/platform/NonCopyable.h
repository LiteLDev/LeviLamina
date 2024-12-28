#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class NonCopyable {
public:
    // prevent constructor by default
    NonCopyable& operator=(NonCopyable const&);
    NonCopyable(NonCopyable const&);
    NonCopyable();
};

} // namespace Bedrock
