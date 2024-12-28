#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::flat_containers_internal {

struct GetFirst {
public:
    // prevent constructor by default
    GetFirst& operator=(GetFirst const&);
    GetFirst(GetFirst const&);
    GetFirst();
};

} // namespace webrtc::flat_containers_internal
