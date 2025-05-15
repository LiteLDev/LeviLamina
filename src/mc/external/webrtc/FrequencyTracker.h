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
    // prevent constructor by default
    FrequencyTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FrequencyTracker(::webrtc::TimeDelta);

    MCNAPI ::std::optional<::webrtc::Frequency> Rate(::webrtc::Timestamp) const;

    MCNAPI void Update(int64, ::webrtc::Timestamp);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::TimeDelta);
    // NOLINTEND
};

} // namespace webrtc
