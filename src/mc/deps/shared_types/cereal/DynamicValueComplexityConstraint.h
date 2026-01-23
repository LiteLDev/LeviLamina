#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class DynamicValue; }
namespace cereal { class SerializerContext; }
// clang-format on

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
    // member functions
    // NOLINTBEGIN
    MCAPI void validateValue(::cereal::DynamicValue const& value, ::cereal::SerializerContext& serializerContext) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes
