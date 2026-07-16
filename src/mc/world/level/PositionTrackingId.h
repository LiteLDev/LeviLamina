#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PositionTrackingId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mRawId;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::PositionTrackingId const& INVALID_ID();
    // NOLINTEND
};
