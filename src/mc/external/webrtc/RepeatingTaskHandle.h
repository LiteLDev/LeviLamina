#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/TaskQueueBase.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class Location; }
namespace webrtc { class TaskQueueBase; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace webrtc {

class RepeatingTaskHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1b6d7a;
    // NOLINTEND

public:
    // prevent constructor by default
    RepeatingTaskHandle& operator=(RepeatingTaskHandle const&);
    RepeatingTaskHandle(RepeatingTaskHandle const&);
    RepeatingTaskHandle();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool Running() const;

    MCNAPI void Stop();

    MCNAPI ::webrtc::RepeatingTaskHandle& operator=(::webrtc::RepeatingTaskHandle&&);

    MCNAPI ~RepeatingTaskHandle();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::RepeatingTaskHandle DelayedStart(
        ::webrtc::TaskQueueBase*                    task_queue,
        ::webrtc::TimeDelta                         first_delay,
        ::absl::AnyInvocable<::webrtc::TimeDelta()> closure,
        ::webrtc::TaskQueueBase::DelayPrecision     precision,
        ::webrtc::Clock*                            clock,
        ::webrtc::Location const&                   location
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
