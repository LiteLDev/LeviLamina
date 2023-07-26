#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub::ThreadModel {

struct MultiThreaded {

public:
    // prevent constructor by default
    MultiThreaded& operator=(MultiThreaded const&) = delete;
    MultiThreaded(MultiThreaded const&)            = delete;
    MultiThreaded()                                = delete;
};

}; // namespace Bedrock::PubSub::ThreadModel
