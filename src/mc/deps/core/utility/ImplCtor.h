#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct ImplCtor {
public:
    // prevent constructor by default
    ImplCtor& operator=(ImplCtor const&);
    ImplCtor(ImplCtor const&);
    ImplCtor();
};

} // namespace Bedrock
