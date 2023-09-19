#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

template <typename T0, typename T1>
class Publisher {
public:
    // prevent constructor by default
    Publisher& operator=(Publisher const&);
    Publisher(Publisher const&);
    Publisher();
};

}; // namespace Bedrock::PubSub
