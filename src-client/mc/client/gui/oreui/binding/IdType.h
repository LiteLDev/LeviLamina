#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::Detail {

class IdType {
public:
    // IdType inner types define
    using UnderlyingType = uint64;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mValue;
    // NOLINTEND
};

} // namespace OreUI::Detail
