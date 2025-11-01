#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RttBasedBackoff {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk46bb3d;
    ::ll::UntypedStorage<8, 80> mUnk4ce83b;
    ::ll::UntypedStorage<8, 80> mUnk2aa9c7;
    ::ll::UntypedStorage<8, 80> mUnk225e04;
    ::ll::UntypedStorage<8, 80> mUnk272de0;
    ::ll::UntypedStorage<8, 8>  mUnkecc0c6;
    ::ll::UntypedStorage<8, 8>  mUnk238c80;
    ::ll::UntypedStorage<8, 8>  mUnkd36473;
    ::ll::UntypedStorage<8, 8>  mUnk1a331d;
    // NOLINTEND

public:
    // prevent constructor by default
    RttBasedBackoff& operator=(RttBasedBackoff const&);
    RttBasedBackoff(RttBasedBackoff const&);
    RttBasedBackoff();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::TimeDelta CorrectedRtt() const;

    MCNAPI bool IsRttAboveLimit() const;

    MCNAPI explicit RttBasedBackoff(::webrtc::FieldTrialsView const* key_value_config);

    MCNAPI void UpdatePropagationRtt(::webrtc::Timestamp at_time, ::webrtc::TimeDelta propagation_rtt);

    MCNAPI ~RttBasedBackoff();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const* key_value_config);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
