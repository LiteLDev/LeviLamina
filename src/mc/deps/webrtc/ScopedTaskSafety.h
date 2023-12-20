#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class PendingTaskSafetyFlag; }
// clang-format on

namespace webrtc {

class ScopedTaskSafety {
public:
    // prevent constructor by default
    ScopedTaskSafety& operator=(ScopedTaskSafety const&);
    ScopedTaskSafety(ScopedTaskSafety const&);
    ScopedTaskSafety();

public:
    // NOLINTBEGIN
    // symbol: ?flag@ScopedTaskSafety@webrtc@@QEBA?AV?$scoped_refptr@VPendingTaskSafetyFlag@webrtc@@@rtc@@XZ
    MCAPI class rtc::scoped_refptr<class webrtc::PendingTaskSafetyFlag> flag() const;

    // symbol: ?reset@ScopedTaskSafety@webrtc@@QEAAXV?$scoped_refptr@VPendingTaskSafetyFlag@webrtc@@@rtc@@@Z
    MCAPI void reset(class rtc::scoped_refptr<class webrtc::PendingTaskSafetyFlag>);

    // symbol: ??1ScopedTaskSafety@webrtc@@QEAA@XZ
    MCAPI ~ScopedTaskSafety();

    // NOLINTEND
};

}; // namespace webrtc
