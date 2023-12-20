#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct BitrateConstraints {
public:
    // prevent constructor by default
    BitrateConstraints& operator=(BitrateConstraints const&);
    BitrateConstraints(BitrateConstraints const&);
    BitrateConstraints();
};

}; // namespace webrtc
