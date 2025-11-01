#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PositionTrackingDB {

enum class ResultCode : schar {
    Ok = 0,
    NotFound = 1,
    UpdatePending = 2,
    Error = 3,
};

}
