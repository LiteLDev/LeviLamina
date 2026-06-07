#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

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
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mMaxDepth;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DynamicValueComplexityConstraint();

#ifdef LL_PLAT_C
    MCAPI ::cereal::internal::ConstraintDescription description(::cereal::ContextArea) const;
#endif

    MCAPI ::SharedTypes::DynamicValueComplexityConstraint& maxDepth(uint depth);

#ifdef LL_PLAT_C
    MCAPI void validateValue(::cereal::DynamicValue const& value, ::cereal::SerializerContext& serializerContext) const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes
