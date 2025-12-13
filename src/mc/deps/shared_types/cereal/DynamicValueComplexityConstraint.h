#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class DynamicValue; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes {

class DynamicValueComplexityConstraint
: public ::cereal::ConstraintHandle<::SharedTypes::DynamicValueComplexityConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk8a9743;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicValueComplexityConstraint& operator=(DynamicValueComplexityConstraint const&);
    DynamicValueComplexityConstraint(DynamicValueComplexityConstraint const&);
    DynamicValueComplexityConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::cereal::internal::ConstraintDescription description() const /*override*/;

    // vIndex: 1
    virtual ~DynamicValueComplexityConstraint() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    validateValue(::cereal::DynamicValue const& value, ::cereal::SerializerContext& serializerContext) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cereal::internal::ConstraintDescription $description() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes
