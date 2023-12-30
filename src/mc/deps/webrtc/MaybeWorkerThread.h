#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/absl/AnyInvocable.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class PendingTaskSafetyFlag; }
namespace webrtc { class TaskQueueBase; }
namespace webrtc { class TaskQueueFactory; }
// clang-format on

namespace webrtc {

class MaybeWorkerThread {
public:
    // prevent constructor by default
    MaybeWorkerThread& operator=(MaybeWorkerThread const&);
    MaybeWorkerThread(MaybeWorkerThread const&);
    MaybeWorkerThread();

public:
    // NOLINTBEGIN
    // symbol: ?IsCurrent@MaybeWorkerThread@webrtc@@QEBA_NXZ
    MCAPI bool IsCurrent() const;

    // symbol:
    // ?MaybeSafeTask@MaybeWorkerThread@webrtc@@QEAA?AV?$AnyInvocable@$$A8@@EHAAXXZ@absl@@V?$scoped_refptr@VPendingTaskSafetyFlag@webrtc@@@rtc@@V34@@Z
    MCAPI class absl::AnyInvocable<void(void) &&>
        MaybeSafeTask(class rtc::scoped_refptr<class webrtc::PendingTaskSafetyFlag>, class absl::AnyInvocable<void(void) &&>);

    // symbol:
    // ??0MaybeWorkerThread@webrtc@@QEAA@AEBVFieldTrialsView@1@V?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAVTaskQueueFactory@1@@Z
    MCAPI MaybeWorkerThread(class webrtc::FieldTrialsView const&, std::string_view, class webrtc::TaskQueueFactory*);

    // symbol: ?RunOrPost@MaybeWorkerThread@webrtc@@QEAAXV?$AnyInvocable@$$A8@@EHAAXXZ@absl@@@Z
    MCAPI void RunOrPost(class absl::AnyInvocable<void(void) &&>);

    // symbol: ?TaskQueueForDelayedTasks@MaybeWorkerThread@webrtc@@QEBAPEAVTaskQueueBase@2@XZ
    MCAPI class webrtc::TaskQueueBase* TaskQueueForDelayedTasks() const;

    // symbol: ?TaskQueueForPost@MaybeWorkerThread@webrtc@@QEBAPEAVTaskQueueBase@2@XZ
    MCAPI class webrtc::TaskQueueBase* TaskQueueForPost() const;

    // symbol: ??1MaybeWorkerThread@webrtc@@QEAA@XZ
    MCAPI ~MaybeWorkerThread();

    // NOLINTEND
};

}; // namespace webrtc
