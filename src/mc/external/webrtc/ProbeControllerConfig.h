#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

struct ProbeControllerConfig {
public:
    // prevent constructor by default
    ProbeControllerConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ProbeControllerConfig(::webrtc::FieldTrialsView const*);

    MCNAPI ~ProbeControllerConfig();
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
