#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct TaskQueueBase {
public:
    // TaskQueueBase inner types declare
    // clang-format off
    struct CurrentTaskQueueSetter;
    struct PostDelayedTaskTraits;
    struct PostTaskTraits;
    // clang-format on

    // TaskQueueBase inner types define
    enum class DelayPrecision : uint {};

    struct CurrentTaskQueueSetter {};

    struct PostDelayedTaskTraits {};

    struct PostTaskTraits {};
};

} // namespace webrtc
