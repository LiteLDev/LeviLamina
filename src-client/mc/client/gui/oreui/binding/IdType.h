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

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::OreUI::Detail::IdType next();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::OreUI::Detail::IdType const& INVALID_ID();
    // NOLINTEND
};

} // namespace OreUI::Detail
