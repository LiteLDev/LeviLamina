#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

template <typename T0, typename T1>
class StrongAlias {
public:
    // prevent constructor by default
    StrongAlias& operator=(StrongAlias const&);
    StrongAlias(StrongAlias const&);
    StrongAlias();
};

} // namespace webrtc
