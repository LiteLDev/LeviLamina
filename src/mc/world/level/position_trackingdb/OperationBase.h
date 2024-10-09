#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PositionTrackingDB {

class OperationBase {
public:
    // prevent constructor by default
    OperationBase& operator=(OperationBase const&);
    OperationBase(OperationBase const&);
    OperationBase();
};

}; // namespace PositionTrackingDB
