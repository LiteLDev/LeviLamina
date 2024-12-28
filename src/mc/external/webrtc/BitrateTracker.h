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
    BitrateTracker& operator=(BitrateTracker const&);
    BitrateTracker(BitrateTracker const&);
    BitrateTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BitrateTracker(::webrtc::TimeDelta);

    MCAPI ::std::optional<::webrtc::DataRate> Rate(::webrtc::Timestamp) const;

    MCAPI void Update(int64, ::webrtc::Timestamp);

    MCAPI ~BitrateTracker();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::TimeDelta);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
