#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub::ThreadModel {

struct MultiThreaded {
public:
    // prevent constructor by default
    MultiThreaded& operator=(MultiThreaded const&);
    MultiThreaded(MultiThreaded const&);
    MultiThreaded();
};

} // namespace Bedrock::PubSub::ThreadModel
