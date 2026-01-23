#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"

namespace SharedTypes {

class Vec2TotalConstraint : public ::cereal::ConstraintHandle<::SharedTypes::Vec2TotalConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mTotal;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Vec2TotalConstraint() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes
