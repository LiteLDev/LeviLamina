#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/application/common/utility/ThreadOwnerBehavior.h"

namespace Bedrock::Application {

template <typename T0, ThreadOwnerBehavior WrongThreadBehavior = ThreadOwnerBehavior::Assert>
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
