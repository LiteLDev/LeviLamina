#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class BitrateTracker {
public:
    // prevent constructor by default
    BitrateTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BitrateTracker(::webrtc::TimeDelta);

    MCNAPI ::std::optional<::webrtc::DataRate> Rate(::webrtc::Timestamp) const;

    MCNAPI void Update(int64, ::webrtc::Timestamp);

    MCNAPI ~BitrateTracker();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::TimeDelta);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
