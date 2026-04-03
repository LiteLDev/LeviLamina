#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"

namespace SharedTypes {

class DynamicValueComplexityConstraint
: public ::cereal::ConstraintHandle<::SharedTypes::DynamicValueComplexityConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mMaxDepth;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DynamicValueComplexityConstraint() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes
