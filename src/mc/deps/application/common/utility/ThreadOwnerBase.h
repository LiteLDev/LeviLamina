#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Application {

class ThreadOwnerBase {
public:
    // prevent constructor by default
    ThreadOwnerBase& operator=(ThreadOwnerBase const&);
    ThreadOwnerBase(ThreadOwnerBase const&);
    ThreadOwnerBase();
};

} // namespace Bedrock::Application
