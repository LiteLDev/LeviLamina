#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class DispatcherInterface {
public:
    // prevent constructor by default
    DispatcherInterface& operator=(DispatcherInterface const&);
    DispatcherInterface(DispatcherInterface const&);
    DispatcherInterface();
};

}; // namespace Bedrock::Http
