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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2807da;
    // NOLINTEND

public:
    // prevent constructor by default
    UsagePattern& operator=(UsagePattern const&);
    UsagePattern(UsagePattern const&);
    UsagePattern();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void NoteUsageEvent(::webrtc::UsageEvent event);

    MCNAPI void ReportUsagePattern(::webrtc::PeerConnectionObserver* observer) const;
    // NOLINTEND
};

} // namespace webrtc
