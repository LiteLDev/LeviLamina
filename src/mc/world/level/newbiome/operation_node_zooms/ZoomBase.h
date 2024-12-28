#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeZooms {

template <int T0, int T1>
class ZoomBase {
public:
    // prevent constructor by default
    ZoomBase& operator=(ZoomBase const&);
    ZoomBase(ZoomBase const&);
    ZoomBase();
};

} // namespace OperationNodeZooms
