#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::Experimental::Detail {

class IdType {
public:
    // IdType inner types define
    using UnderlyingType = uint64;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mValue;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::OreUI::Experimental::Detail::IdType const& INVALID_ID();
    // NOLINTEND
};

} // namespace OreUI::Experimental::Detail
