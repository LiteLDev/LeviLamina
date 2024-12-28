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
    MCAPI void SetAlive();

    MCAPI void SetNotAlive();

    MCAPI bool alive() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> Create();

    MCAPI static ::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag>
    CreateAttachedToTaskQueue(bool, ::webrtc::TaskQueueBase*);

    MCAPI static ::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> CreateDetached();

    MCAPI static ::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> CreateDetachedInactive();

    MCAPI static ::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> CreateInternal(bool);
    // NOLINTEND
};

} // namespace webrtc
