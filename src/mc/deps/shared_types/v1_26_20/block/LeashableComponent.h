#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct LeashableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mLeashKnotOffset;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
