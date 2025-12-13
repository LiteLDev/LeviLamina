#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TaskQueueBase; }
namespace webrtc { struct TaskQueueDeleter; }
// clang-format on

namespace webrtc {

class TaskQueueFactory {
public:
    // TaskQueueFactory inner types define
    enum class Priority : int {
        Normal = 0,
        High   = 1,
        Low    = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TaskQueueFactory() = default;

    virtual ::std::unique_ptr<::webrtc::TaskQueueBase, ::webrtc::TaskQueueDeleter>
        CreateTaskQueue(::std::string_view, ::webrtc::TaskQueueFactory::Priority) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
