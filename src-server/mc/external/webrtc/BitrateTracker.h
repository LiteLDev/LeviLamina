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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnk557a31;
    // NOLINTEND

public:
    // prevent constructor by default
    BitrateTracker& operator=(BitrateTracker const&);
    BitrateTracker(BitrateTracker const&);
    BitrateTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BitrateTracker(::webrtc::TimeDelta max_window_size);

    MCNAPI ::std::optional<::webrtc::DataRate> Rate(::webrtc::Timestamp now) const;

    MCNAPI void Update(int64 bytes, ::webrtc::Timestamp now);

    MCNAPI ~BitrateTracker();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::TimeDelta max_window_size);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
