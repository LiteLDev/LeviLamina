#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

struct Method {
public:
    // prevent constructor by default
    Method& operator=(Method const&);
    Method(Method const&);
    Method();
};

} // namespace Bedrock::Http
