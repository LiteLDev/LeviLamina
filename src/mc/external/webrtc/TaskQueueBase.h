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

    struct PostTaskTraits {};

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
        MCAPI explicit CurrentTaskQueueSetter(::webrtc::TaskQueueBase*);

        MCAPI ~CurrentTaskQueueSetter();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::webrtc::TaskQueueBase*);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void Delete() = 0;

    // vIndex: 1
    virtual void
    PostTaskImpl(::absl::AnyInvocable<void() &&>, ::webrtc::TaskQueueBase::PostTaskTraits const&, ::webrtc::Location const&) = 0;

    // vIndex: 2
    virtual void
    PostDelayedTaskImpl(::absl::AnyInvocable<void() &&>, ::webrtc::TimeDelta, ::webrtc::TaskQueueBase::PostDelayedTaskTraits const&, ::webrtc::Location const&) = 0;

    // vIndex: 3
    virtual ~TaskQueueBase() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void PostDelayedTask(
        ::absl::AnyInvocable<void() &&> task,
        ::webrtc::TimeDelta             delay,
        ::webrtc::Location const&       location
    );

    MCAPI void
    PostDelayedTaskWithPrecision(::webrtc::TaskQueueBase::DelayPrecision, ::absl::AnyInvocable<void() &&>, ::webrtc::TimeDelta, ::webrtc::Location const&);

    MCAPI void PostTask(::absl::AnyInvocable<void() &&> task, ::webrtc::Location const& location);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::webrtc::TaskQueueBase* Current();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
