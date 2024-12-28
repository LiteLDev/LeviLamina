#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class flat_map {
public:
    // prevent constructor by default
    flat_map& operator=(flat_map const&);
    flat_map(flat_map const&);
    flat_map();
};

} // namespace webrtc
