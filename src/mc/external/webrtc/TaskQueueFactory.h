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
    // prevent constructor by default
    TaskQueueFactory& operator=(TaskQueueFactory const&);
    TaskQueueFactory(TaskQueueFactory const&);
    TaskQueueFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TaskQueueFactory();

    // vIndex: 1
    virtual ::std::unique_ptr<::webrtc::TaskQueueBase, ::webrtc::TaskQueueDeleter>
        CreateTaskQueue(::std::string_view, ::webrtc::TaskQueueFactory::Priority) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
