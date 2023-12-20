#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RttBasedBackoff {
public:
    // prevent constructor by default
    RttBasedBackoff& operator=(RttBasedBackoff const&);
    RttBasedBackoff(RttBasedBackoff const&);
    RttBasedBackoff();

public:
    // NOLINTBEGIN
    // symbol: ?CorrectedRtt@RttBasedBackoff@webrtc@@QEBA?AVTimeDelta@2@VTimestamp@2@@Z
    MCAPI class webrtc::TimeDelta CorrectedRtt(class webrtc::Timestamp) const;

    // symbol: ??0RttBasedBackoff@webrtc@@QEAA@PEBVFieldTrialsView@1@@Z
    MCAPI explicit RttBasedBackoff(class webrtc::FieldTrialsView const*);

    // symbol: ?UpdatePropagationRtt@RttBasedBackoff@webrtc@@QEAAXVTimestamp@2@VTimeDelta@2@@Z
    MCAPI void UpdatePropagationRtt(class webrtc::Timestamp, class webrtc::TimeDelta);

    // symbol: ??1RttBasedBackoff@webrtc@@QEAA@XZ
    MCAPI ~RttBasedBackoff();

    // NOLINTEND
};

}; // namespace webrtc
