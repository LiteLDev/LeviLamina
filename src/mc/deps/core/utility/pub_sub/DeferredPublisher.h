#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

template <typename T0, int T1, typename T2, int T3, int T4>
class DeferredPublisher {
public:
    // prevent constructor by default
    DeferredPublisher& operator=(DeferredPublisher const&);
    DeferredPublisher(DeferredPublisher const&);
    DeferredPublisher();
};

} // namespace Bedrock::PubSub
