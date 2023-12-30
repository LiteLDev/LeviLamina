#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/TaskQueueBase.h"
#include "mc/deps/webrtc/absl/AnyInvocable.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class TaskQueueBase; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace webrtc {

class RepeatingTaskHandle {
public:
    // prevent constructor by default
    RepeatingTaskHandle& operator=(RepeatingTaskHandle const&);
    RepeatingTaskHandle(RepeatingTaskHandle const&);
    RepeatingTaskHandle();

public:
    // NOLINTBEGIN
    // symbol: ?Running@RepeatingTaskHandle@webrtc@@QEBA_NXZ
    MCAPI bool Running() const;

    // symbol: ?Stop@RepeatingTaskHandle@webrtc@@QEAAXXZ
    MCAPI void Stop();

    // symbol: ??4RepeatingTaskHandle@webrtc@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class webrtc::RepeatingTaskHandle& operator=(class webrtc::RepeatingTaskHandle&&);

    // symbol: ??1RepeatingTaskHandle@webrtc@@QEAA@XZ
    MCAPI ~RepeatingTaskHandle();

    // symbol:
    // ?DelayedStart@RepeatingTaskHandle@webrtc@@SA?AV12@PEAVTaskQueueBase@2@VTimeDelta@2@V?$AnyInvocable@$$A6A?AVTimeDelta@webrtc@@XZ@absl@@W4DelayPrecision@32@PEAVClock@2@@Z
    MCAPI static class webrtc::RepeatingTaskHandle
    DelayedStart(class webrtc::TaskQueueBase*, class webrtc::TimeDelta, class absl::AnyInvocable<class webrtc::TimeDelta(void)>, ::webrtc::TaskQueueBase::DelayPrecision, class webrtc::Clock*);

    // NOLINTEND
};

}; // namespace webrtc
