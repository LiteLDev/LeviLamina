#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/RefCountedNonVirtual.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TaskQueueBase; }
// clang-format on

namespace webrtc {

class PendingTaskSafetyFlag : public ::rtc::RefCountedNonVirtual<::webrtc::PendingTaskSafetyFlag> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk5ef7f3;
    ::ll::UntypedStorage<1, 1> mUnkd01503;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingTaskSafetyFlag& operator=(PendingTaskSafetyFlag const&);
    PendingTaskSafetyFlag(PendingTaskSafetyFlag const&);
    PendingTaskSafetyFlag();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void SetAlive();

    MCNAPI void SetNotAlive();

    MCNAPI bool alive() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> Create();

    MCNAPI static ::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag>
    CreateAttachedToTaskQueue(bool alive, ::webrtc::TaskQueueBase* attached_queue);

    MCNAPI static ::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> CreateDetached();

    MCNAPI static ::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> CreateDetachedInactive();
    // NOLINTEND
};

} // namespace webrtc
