#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Frequency; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class FrequencyTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnk773b89;
    // NOLINTEND

public:
    // prevent constructor by default
    FrequencyTracker& operator=(FrequencyTracker const&);
    FrequencyTracker(FrequencyTracker const&);
    FrequencyTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FrequencyTracker(::webrtc::TimeDelta max_window_size);

    MCNAPI ::std::optional<::webrtc::Frequency> Rate(::webrtc::Timestamp now) const;

    MCNAPI void Update(int64 count, ::webrtc::Timestamp now);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::TimeDelta max_window_size);
    // NOLINTEND
};

} // namespace webrtc
