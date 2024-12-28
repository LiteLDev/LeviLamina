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
    class NullMutex {
    public:
        // prevent constructor by default
        NullMutex& operator=(NullMutex const&);
        NullMutex(NullMutex const&);
        NullMutex();
    };

public:
    // prevent constructor by default
    SingleThreaded& operator=(SingleThreaded const&);
    SingleThreaded(SingleThreaded const&);
    SingleThreaded();
};

} // namespace Bedrock::PubSub::ThreadModel
