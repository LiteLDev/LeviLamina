#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class Location {
public:
    // prevent constructor by default
    Location& operator=(Location const&);
    Location(Location const&);
    Location();
};

} // namespace webrtc
