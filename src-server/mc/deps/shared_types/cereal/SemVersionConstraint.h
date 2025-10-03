#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/Constraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes {

class SemVersionConstraint : public ::cereal::Constraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1e1562;
    ::ll::UntypedStorage<8, 32> mUnkeae1a6;
    // NOLINTEND

public:
    // prevent constructor by default
    SemVersionConstraint& operator=(SemVersionConstraint const&);
    SemVersionConstraint(SemVersionConstraint const&);
    SemVersionConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void doValidate(::entt::meta_any const& any, ::cereal::SerializerContext& context) const /*override*/;

    // vIndex: 3
    virtual ::cereal::internal::ConstraintDescription description() const /*override*/;

    // vIndex: 2
    virtual ~SemVersionConstraint() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $doValidate(::entt::meta_any const& any, ::cereal::SerializerContext& context) const;

    MCNAPI ::cereal::internal::ConstraintDescription $description() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes
