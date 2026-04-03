#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_10::BlockDefinition {

struct EntityFallOnComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mMinimumFallDistance;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& MinFallDistanceId();

    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
