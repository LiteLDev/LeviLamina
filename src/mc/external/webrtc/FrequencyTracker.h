#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Frequency; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

struct FrequencyTracker {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FrequencyTracker(::webrtc::TimeDelta);

    MCAPI ::std::optional<::webrtc::Frequency> Rate(::webrtc::Timestamp) const;

    MCAPI void Update(int64, ::webrtc::Timestamp);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::TimeDelta);
    // NOLINTEND
};

} // namespace webrtc
