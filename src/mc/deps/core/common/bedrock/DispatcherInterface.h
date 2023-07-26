#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class DispatcherInterface {

public:
    // prevent constructor by default
    DispatcherInterface& operator=(DispatcherInterface const&) = delete;
    DispatcherInterface(DispatcherInterface const&)            = delete;
    DispatcherInterface()                                      = delete;
};

}; // namespace Bedrock::Http
