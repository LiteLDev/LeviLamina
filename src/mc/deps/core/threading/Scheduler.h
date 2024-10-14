#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class Scheduler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    Scheduler& operator=(Scheduler const&);
    Scheduler(Scheduler const&);
    Scheduler();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Scheduler() = default;

    MCAPI Scheduler(std::string name, uint FPS);

    MCAPI void changeThread(std::thread::id);

    MCAPI class WorkerPool& getCoroutinePool();

    MCAPI void processCoroutines(std::chrono::nanoseconds timeSinceSwap, std::chrono::nanoseconds minTimeCap);

    MCAPI void queueCallback(std::shared_ptr<class BackgroundTaskBase> task);

    MCAPI void setTargetFPS(uint FPS);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI static float const& AVERAGE_TASK_TOLERANCE();

    // NOLINTEND
};
