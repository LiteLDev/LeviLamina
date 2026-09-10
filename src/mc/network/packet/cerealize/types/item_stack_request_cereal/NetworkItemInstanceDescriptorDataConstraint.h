#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace ItemStackRequestCereal { struct NetworkItemInstanceDescriptorData; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace ItemStackRequestCereal {

struct NetworkItemInstanceDescriptorDataConstraint
: public ::cereal::ConstraintHandle<::ItemStackRequestCereal::NetworkItemInstanceDescriptorDataConstraint> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void validateValue(
        ::ItemStackRequestCereal::NetworkItemInstanceDescriptorData const& value,
        ::cereal::SerializerContext&                                       context
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::cereal::internal::ConstraintDescription $doDescription(::cereal::ContextArea) const;


    // NOLINTEND
};

} // namespace ItemStackRequestCereal
