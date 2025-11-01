#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DurationMsTag; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace dcsctp {

class DurationMs : public ::webrtc::StrongAlias<::dcsctp::DurationMsTag, int> {
public:
    // prevent constructor by default
    DurationMs();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DurationMs(::webrtc::TimeDelta v);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::TimeDelta v);
    // NOLINTEND

};

}
