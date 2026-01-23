#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes {

class EventIdentifierConstraint : public ::cereal::ConstraintHandle<::SharedTypes::EventIdentifierConstraint> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EventIdentifierConstraint() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::cereal::internal::ConstraintDescription description(::cereal::ContextArea req) const;

    MCFOLD void validateValue(::std::string const& str, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes
