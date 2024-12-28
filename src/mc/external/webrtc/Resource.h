#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class Resource {
public:
    // prevent constructor by default
    Resource& operator=(Resource const&);
    Resource(Resource const&);
    Resource();
};

} // namespace webrtc
