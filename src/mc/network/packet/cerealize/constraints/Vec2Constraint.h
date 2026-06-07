#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicNumericConstraint.h"
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
class Vec2;
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

class Vec2Constraint : public ::cereal::ConstraintHandle<::Vec2Constraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::cereal::BasicNumericConstraint<float>> mXConstraint;
    ::ll::TypedStorage<8, 40, ::cereal::BasicNumericConstraint<float>> mYConstraint;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::cereal::internal::ConstraintDescription description(::cereal::ContextArea contextArea) const;

    MCAPI ::Vec2Constraint& range(::Vec2 min, ::Vec2 max, bool exclusive);

    MCAPI void validateValue(::Vec2 const& comp, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
