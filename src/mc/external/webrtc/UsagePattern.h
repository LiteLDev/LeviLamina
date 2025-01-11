#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/UsageEvent.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class PeerConnectionObserver; }
// clang-format on

namespace webrtc {

class UsagePattern {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void NoteUsageEvent(::webrtc::UsageEvent);

    MCAPI void ReportUsagePattern(::webrtc::PeerConnectionObserver*) const;
    // NOLINTEND
};

} // namespace webrtc
