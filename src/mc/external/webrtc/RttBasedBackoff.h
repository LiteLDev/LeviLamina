#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

struct RttBasedBackoff {
public:
    // prevent constructor by default
    RttBasedBackoff();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::TimeDelta CorrectedRtt() const;

    MCNAPI bool IsRttAboveLimit() const;

    MCNAPI explicit RttBasedBackoff(::webrtc::FieldTrialsView const*);

    MCNAPI void UpdatePropagationRtt(::webrtc::Timestamp, ::webrtc::TimeDelta);

    MCNAPI ~RttBasedBackoff();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
