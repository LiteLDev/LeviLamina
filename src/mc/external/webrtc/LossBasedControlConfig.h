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
    LossBasedControlConfig& operator=(LossBasedControlConfig const&);
    LossBasedControlConfig(LossBasedControlConfig const&);
    LossBasedControlConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LossBasedControlConfig(::webrtc::FieldTrialsView const*);

    MCAPI ~LossBasedControlConfig();
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
