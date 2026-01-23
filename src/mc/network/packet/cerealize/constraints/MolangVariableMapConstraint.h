#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { class SerializerContext; }
// clang-format on

class MolangVariableMapConstraint : public ::cereal::ConstraintHandle<::MolangVariableMapConstraint> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MolangVariableMapConstraint() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void validateValue(::Json::Value const& parsedJson, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
