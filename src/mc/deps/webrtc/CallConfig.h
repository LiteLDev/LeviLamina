#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtcEventLog; }
namespace webrtc { class TaskQueueBase; }
// clang-format on

namespace webrtc {

class CallConfig {
public:
    // prevent constructor by default
    CallConfig& operator=(CallConfig const&);
    CallConfig(CallConfig const&);
    CallConfig();

public:
    // NOLINTBEGIN
    // symbol: ??0CallConfig@webrtc@@QEAA@PEAVRtcEventLog@1@PEAVTaskQueueBase@1@@Z
    MCAPI CallConfig(class webrtc::RtcEventLog*, class webrtc::TaskQueueBase*);

    // symbol: ??1CallConfig@webrtc@@QEAA@XZ
    MCAPI ~CallConfig();

    // NOLINTEND
};

}; // namespace webrtc
