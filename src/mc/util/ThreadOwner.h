#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Application {

template <typename T0>
class ThreadOwner {
public:
    // prevent constructor by default
    ThreadOwner& operator=(ThreadOwner const&);
    ThreadOwner(ThreadOwner const&);
    ThreadOwner();
};

} // namespace Bedrock::Application
