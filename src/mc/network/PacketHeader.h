#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PacketHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mHeaderData;
    // NOLINTEND
};
