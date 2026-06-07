#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/Constraint.h"
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/cereal/MinSizeConstraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace cereal {

class AssociativeContainerConstraint : public ::cereal::ConstraintHandle<::cereal::AssociativeContainerConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cereal::internal::MinSizeConstraint>    mConstraint;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cereal::Constraint>> mKeyConstraint;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cereal::Constraint>> mValueConstraint;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cereal::Constraint const* subConstraint(uint64 index) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::cereal::internal::ConstraintDescription description(::cereal::ContextArea req) const;

    MCFOLD ::cereal::AssociativeContainerConstraint& maxSize(uint64 size);

    MCFOLD ::cereal::AssociativeContainerConstraint& minSize(uint64 size);

    MCAPI void validateValue(::entt::meta_associative_container cont, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::cereal::Constraint const* $subConstraint(uint64 index) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
