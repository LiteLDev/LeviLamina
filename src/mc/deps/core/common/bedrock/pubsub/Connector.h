#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

template <typename T0>
class Connector {
public:
    // prevent constructor by default
    Connector& operator=(Connector const&);
    Connector(Connector const&);
    Connector();
};

}; // namespace Bedrock::PubSub
