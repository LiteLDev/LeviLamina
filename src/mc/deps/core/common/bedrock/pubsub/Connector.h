#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

template <typename T0>
class Connector {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_PUBSUB_CONNECTOR
public:
    Connector& operator=(Connector const&) = delete;
    Connector(Connector const&)            = delete;
    Connector()                            = delete;
#endif

public:
};

}; // namespace Bedrock::PubSub
