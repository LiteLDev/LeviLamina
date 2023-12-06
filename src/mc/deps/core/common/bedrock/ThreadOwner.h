#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Application {

template <typename T0>
class ThreadOwner {

public:
    T0              mObject; // this+0x0
    bool            mThreadIdInitialized{};
    std::thread::id mThreadId;
    uint            mThreadCheckIndex{};

    // prevent constructor by default
    ThreadOwner& operator=(ThreadOwner const&) = delete;
    ThreadOwner(ThreadOwner const&)            = delete;
    ThreadOwner()                              = delete;
};
} // namespace Bedrock::Application
