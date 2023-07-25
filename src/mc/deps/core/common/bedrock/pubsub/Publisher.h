#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

template <typename T0, typename T1>
class Publisher {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_PUBSUB_PUBLISHER
public:
    Publisher& operator=(Publisher const&) = delete;
    Publisher(Publisher const&)            = delete;
    Publisher()                            = delete;
#endif

public:
};

}; // namespace Bedrock::PubSub
