#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace cereal {

class AssociativeContainerConstraint : public ::cereal::ConstraintHandle<::cereal::AssociativeContainerConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk64f61f;
    ::ll::UntypedStorage<8, 16> mUnkeb1e3d;
    ::ll::UntypedStorage<8, 16> mUnk4e98a0;
    // NOLINTEND

public:
    // prevent constructor by default
    AssociativeContainerConstraint& operator=(AssociativeContainerConstraint const&);
    AssociativeContainerConstraint(AssociativeContainerConstraint const&);
    AssociativeContainerConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cereal::Constraint const* subConstraint(uint64 index) const /*override*/;

    virtual ~AssociativeContainerConstraint() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::cereal::internal::ConstraintDescription description(::cereal::ContextArea req) const;

    MCNAPI void validateValue(::entt::meta_associative_container cont, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cereal::Constraint const* $subConstraint(uint64 index) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
