#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

struct LossBasedControlConfig {
public:
    // prevent constructor by default
    LossBasedControlConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LossBasedControlConfig(::webrtc::FieldTrialsView const*);

    MCNAPI ~LossBasedControlConfig();
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
