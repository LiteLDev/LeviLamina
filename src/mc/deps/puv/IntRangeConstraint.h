#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cereal/BasicNumericConstraint.h"
#include "mc/external/cereal/Constraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace Puv {

class IntRangeConstraint : public ::cereal::Constraint {
public:
    // prevent constructor by default
    IntRangeConstraint& operator=(IntRangeConstraint const&);
    IntRangeConstraint(IntRangeConstraint const&);
    IntRangeConstraint();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual void doValidate(entt::meta_any const& any, class cereal::SerializerContext& context) const;

    // vIndex: 1
    virtual ~IntRangeConstraint();

    // vIndex: 2
    virtual struct cereal::internal::ConstraintDescription description() const;

    MCAPI class Puv::IntRangeConstraint& constraintMax(class cereal::BasicNumericConstraint<double> constraint);

    MCAPI class Puv::IntRangeConstraint& constraintMin(class cereal::BasicNumericConstraint<double> constraint);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI struct cereal::internal::ConstraintDescription description$() const;

    MCAPI void doValidate$(entt::meta_any const& any, class cereal::SerializerContext& context) const;

    // NOLINTEND
};

}; // namespace Puv
