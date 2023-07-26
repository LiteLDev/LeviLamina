#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

template <typename T0, typename T1>
class Publisher {

public:
    // prevent constructor by default
    Publisher& operator=(Publisher const&) = delete;
    Publisher(Publisher const&)            = delete;
    Publisher()                            = delete;
};

}; // namespace Bedrock::PubSub
