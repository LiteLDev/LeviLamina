#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class ComponentStorage; }
namespace cereal { class SerializerContext; }
// clang-format on

namespace SharedTypes::v1_26_20::BlockDefinition {

struct CrossComponentsConstraint
: public ::cereal::ConstraintHandle<::SharedTypes::v1_26_20::BlockDefinition::CrossComponentsConstraint> {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void validateValue(::cereal::ComponentStorage const& components, ::cereal::SerializerContext& context);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& CONSTRAINT_DESCRIPTION();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
