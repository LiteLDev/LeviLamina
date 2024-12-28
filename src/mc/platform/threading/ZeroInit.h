#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

struct ZeroInit {
public:
    // prevent constructor by default
    ZeroInit& operator=(ZeroInit const&);
    ZeroInit(ZeroInit const&);
    ZeroInit();
};

} // namespace Bedrock::Threading
