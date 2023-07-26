#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

template <typename T0>
class Connector {

public:
    // prevent constructor by default
    Connector& operator=(Connector const&) = delete;
    Connector(Connector const&)            = delete;
    Connector()                            = delete;
};

}; // namespace Bedrock::PubSub
