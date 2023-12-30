#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/absl/AnyInvocable.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TimeDelta; }
// clang-format on

namespace webrtc {

class TaskQueueBase {
public:
    // TaskQueueBase inner types declare
    // clang-format off
    class CurrentTaskQueueSetter;
    // clang-format on

    // TaskQueueBase inner types define
    enum class DelayPrecision {};

    class CurrentTaskQueueSetter {
    public:
        // prevent constructor by default
        CurrentTaskQueueSetter& operator=(CurrentTaskQueueSetter const&);
        CurrentTaskQueueSetter(CurrentTaskQueueSetter const&);
        CurrentTaskQueueSetter();

    public:
        // NOLINTBEGIN
        // symbol: ??0CurrentTaskQueueSetter@TaskQueueBase@webrtc@@QEAA@PEAV12@@Z
        MCAPI explicit CurrentTaskQueueSetter(class webrtc::TaskQueueBase*);

        // symbol: ??1CurrentTaskQueueSetter@TaskQueueBase@webrtc@@QEAA@XZ
        MCAPI ~CurrentTaskQueueSetter();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    TaskQueueBase& operator=(TaskQueueBase const&);
    TaskQueueBase(TaskQueueBase const&);
    TaskQueueBase();

public:
    // NOLINTBEGIN
    // symbol:
    // ?PostDelayedTaskWithPrecision@TaskQueueBase@webrtc@@QEAAXW4DelayPrecision@12@V?$AnyInvocable@$$A8@@EHAAXXZ@absl@@VTimeDelta@2@@Z
    MCAPI void PostDelayedTaskWithPrecision(
        ::webrtc::TaskQueueBase::DelayPrecision,
        class absl::AnyInvocable<void(void) &&>,
        class webrtc::TimeDelta
    );

    // symbol: ?Current@TaskQueueBase@webrtc@@SAPEAV12@XZ
    MCAPI static class webrtc::TaskQueueBase* Current();

    // NOLINTEND
};

}; // namespace webrtc
