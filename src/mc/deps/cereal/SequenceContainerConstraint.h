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

class SequenceContainerConstraint : public ::cereal::ConstraintHandle<::cereal::SequenceContainerConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cereal::internal::MinSizeConstraint>    mConstraint;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cereal::Constraint>> mValueConstraint;
    ::ll::TypedStorage<1, 1, bool>                                     mNoDuplicates;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea req) const /*override*/;

    virtual ::cereal::Constraint const* subConstraint(uint64 index) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void validateValue(::entt::meta_sequence_container cont, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::cereal::internal::ConstraintDescription $doDescription(::cereal::ContextArea req) const;

    MCAPI ::cereal::Constraint const* $subConstraint(uint64 index) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
