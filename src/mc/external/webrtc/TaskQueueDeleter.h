#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct TaskQueueDeleter {
public:
    // prevent constructor by default
    TaskQueueDeleter& operator=(TaskQueueDeleter const&);
    TaskQueueDeleter(TaskQueueDeleter const&);
    TaskQueueDeleter();
};

} // namespace webrtc
