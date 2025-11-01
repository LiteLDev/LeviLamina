#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub::ThreadModel {

struct SingleThreaded {
public:
    // SingleThreaded inner types declare
    // clang-format off
    class NullMutex;
    // clang-format on

    // SingleThreaded inner types define
    class NullMutex {};
};

} // namespace Bedrock::PubSub::ThreadModel
