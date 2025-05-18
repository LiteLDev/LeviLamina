#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FieldTrialParameterInterface {
public:
    // prevent constructor by default
    FieldTrialParameterInterface();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FieldTrialParameterInterface(::std::string_view);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
