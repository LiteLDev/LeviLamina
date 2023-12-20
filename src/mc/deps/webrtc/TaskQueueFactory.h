#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class TaskQueueFactory {
public:
    // prevent constructor by default
    TaskQueueFactory& operator=(TaskQueueFactory const&);
    TaskQueueFactory(TaskQueueFactory const&);
    TaskQueueFactory();
};

}; // namespace webrtc
