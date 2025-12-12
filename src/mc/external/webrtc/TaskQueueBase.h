#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Location; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace webrtc {

class TaskQueueBase {
public:
    // TaskQueueBase inner types declare
    // clang-format off
    class CurrentTaskQueueSetter;
    struct PostDelayedTaskTraits;
    struct PostTaskTraits;
    // clang-format on

    // TaskQueueBase inner types define
    enum class DelayPrecision : int {
        KLow  = 0,
        KHigh = 1,
    };

    class CurrentTaskQueueSetter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk543d91;
        // NOLINTEND

    public:
        // prevent constructor by default
        CurrentTaskQueueSetter& operator=(CurrentTaskQueueSetter const&);
        CurrentTaskQueueSetter(CurrentTaskQueueSetter const&);
        CurrentTaskQueueSetter();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit CurrentTaskQueueSetter(::webrtc::TaskQueueBase* task_queue);

        MCNAPI ~CurrentTaskQueueSetter();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::TaskQueueBase* task_queue);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct PostDelayedTaskTraits {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk38e36a;
        // NOLINTEND

    public:
        // prevent constructor by default
        PostDelayedTaskTraits& operator=(PostDelayedTaskTraits const&);
        PostDelayedTaskTraits(PostDelayedTaskTraits const&);
        PostDelayedTaskTraits();
    };

    struct PostTaskTraits {};

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void Delete() = 0;

    virtual void PostTaskImpl(
        ::absl::AnyInvocable<void() &&>,
        ::webrtc::TaskQueueBase::PostTaskTraits const&,
        ::webrtc::Location const&
    ) = 0;

    virtual void PostDelayedTaskImpl(
        ::absl::AnyInvocable<void() &&>,
        ::webrtc::TimeDelta,
        ::webrtc::TaskQueueBase::PostDelayedTaskTraits const&,
        ::webrtc::Location const&
    ) = 0;

    virtual ~TaskQueueBase() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void PostDelayedTask(
        ::absl::AnyInvocable<void() &&> task,
        ::webrtc::TimeDelta             delay,
        ::webrtc::Location const&       location
    );

    MCNAPI void PostDelayedTaskWithPrecision(
        ::webrtc::TaskQueueBase::DelayPrecision precision,
        ::absl::AnyInvocable<void() &&>         task,
        ::webrtc::TimeDelta                     delay,
        ::webrtc::Location const&               location
    );

    MCNAPI void PostTask(::absl::AnyInvocable<void() &&> task, ::webrtc::Location const& location);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::TaskQueueBase* Current();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
