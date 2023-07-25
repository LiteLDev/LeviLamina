#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub::ThreadModel {

struct MultiThreaded {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_PUBSUB_THREADMODEL_MULTITHREADED
public:
    MultiThreaded& operator=(MultiThreaded const&) = delete;
    MultiThreaded(MultiThreaded const&)            = delete;
    MultiThreaded()                                = delete;
#endif

public:
};

}; // namespace Bedrock::PubSub::ThreadModel
