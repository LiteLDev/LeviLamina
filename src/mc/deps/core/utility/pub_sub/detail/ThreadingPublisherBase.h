#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub::Detail {

template <typename T0>
class ThreadingPublisherBase {
public:
    // prevent constructor by default
    ThreadingPublisherBase& operator=(ThreadingPublisherBase const&);
    ThreadingPublisherBase(ThreadingPublisherBase const&);
    ThreadingPublisherBase();
};

}; // namespace Bedrock::PubSub::Detail
