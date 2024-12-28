#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct GoogCcConfig {
public:
    // prevent constructor by default
    GoogCcConfig& operator=(GoogCcConfig const&);
    GoogCcConfig(GoogCcConfig const&);
    GoogCcConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~GoogCcConfig();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
