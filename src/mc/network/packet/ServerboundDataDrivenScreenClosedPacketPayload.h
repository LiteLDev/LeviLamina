#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ui/DataDrivenScreenClosedReason.h"

struct ServerboundDataDrivenScreenClosedPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                           mFormId;
    ::ll::TypedStorage<1, 1, ::DataDrivenScreenClosedReason> mCloseReason;
    // NOLINTEND
};
