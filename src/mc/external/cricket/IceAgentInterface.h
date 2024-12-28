#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class IceAgentInterface {
public:
    // prevent constructor by default
    IceAgentInterface& operator=(IceAgentInterface const&);
    IceAgentInterface(IceAgentInterface const&);
    IceAgentInterface();
};

} // namespace cricket
