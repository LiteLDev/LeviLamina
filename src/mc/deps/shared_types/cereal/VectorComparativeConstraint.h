#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes {

class VectorComparativeConstraint : public ::cereal::ConstraintHandle<::SharedTypes::VectorComparativeConstraint> {
public:
    // VectorComparativeConstraint inner types define
    enum class ComparisonRequirement : int {
        NotEqual    = 0,
        LessThan    = 1,
        GreaterThan = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::VectorComparativeConstraint::ComparisonRequirement>>
        mComparison;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VectorComparativeConstraint() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::cereal::internal::ConstraintDescription description(::cereal::ContextArea req) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes
