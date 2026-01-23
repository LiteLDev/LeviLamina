#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class ComponentStorage; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

struct CrossComponentsConstraint
: public ::cereal::ConstraintHandle<::SharedTypes::v1_21_110::BlockDefinition::CrossComponentsConstraint> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CrossComponentsConstraint() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::cereal::internal::ConstraintDescription description(::cereal::ContextArea);

    MCAPI static void validateValue(::cereal::ComponentStorage const& components, ::cereal::SerializerContext& context);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& ErrorDescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
