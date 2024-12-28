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
    RttBasedBackoff& operator=(RttBasedBackoff const&);
    RttBasedBackoff(RttBasedBackoff const&);
    RttBasedBackoff();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::webrtc::TimeDelta CorrectedRtt() const;

    MCAPI bool IsRttAboveLimit() const;

    MCAPI explicit RttBasedBackoff(::webrtc::FieldTrialsView const*);

    MCAPI void UpdatePropagationRtt(::webrtc::Timestamp, ::webrtc::TimeDelta);

    MCAPI ~RttBasedBackoff();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
