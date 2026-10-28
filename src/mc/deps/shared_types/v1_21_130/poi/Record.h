#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_130::Poi {

struct Record {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mType;
    ::ll::TypedStorage<1, 1, uchar>  mTickets;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::Poi
