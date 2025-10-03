#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicNumericConstraint.h"
#include "mc/deps/cereal/Constraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

class Vec2Constraint : public ::cereal::Constraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::cereal::BasicNumericConstraint<float>> mXConstraint;
    ::ll::TypedStorage<4, 24, ::cereal::BasicNumericConstraint<float>> mYConstraint;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void doValidate(::entt::meta_any const& any, ::cereal::SerializerContext& context) const /*override*/;

    // vIndex: 3
    virtual ::cereal::internal::ConstraintDescription description() const /*override*/;

    // vIndex: 2
    virtual ~Vec2Constraint() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $doValidate(::entt::meta_any const& any, ::cereal::SerializerContext& context) const;

    MCFOLD ::cereal::internal::ConstraintDescription $description() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
