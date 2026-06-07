#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_20::BlockDefinition { struct PlacementDirection; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes::v1_26_20::BlockDefinition {

struct PlacementDirectionConstraint
: public ::cereal::ConstraintHandle<::SharedTypes::v1_26_20::BlockDefinition::PlacementDirectionConstraint> {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::cereal::internal::ConstraintDescription description(::cereal::ContextArea);

    MCAPI static void validateValue(
        ::SharedTypes::v1_26_20::BlockDefinition::PlacementDirection const& placementDirection,
        ::cereal::SerializerContext&                                        context
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& ROTATION_ERROR_DESCRIPTION();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
