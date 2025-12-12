#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct NackConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk28daaf;
    // NOLINTEND

public:
    // prevent constructor by default
    NackConfig& operator=(NackConfig const&);
    NackConfig(NackConfig const&);
    NackConfig();
};

} // namespace webrtc
