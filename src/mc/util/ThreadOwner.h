#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Application {

enum class ThreadOwnerBehavior : int;

template <typename T0, ThreadOwnerBehavior WrongThreadBehavior = 0>
class ThreadOwner {
public:
    T0              mObject;
    bool            mThreadIdInitialized{};
    std::thread::id mThreadId;
    uint            mThreadCheckIndex{};

public:
    // prevent constructor by default
    ThreadOwner& operator=(ThreadOwner const&) = delete;
    ThreadOwner(ThreadOwner const&)            = delete;
    ThreadOwner()                              = delete;
};

} // namespace Bedrock::Application
