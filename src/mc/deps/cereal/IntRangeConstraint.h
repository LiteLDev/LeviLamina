#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicNumericConstraint.h"
#include "mc/deps/cereal/Constraint.h"

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
    virtual void doValidate(entt::meta_any const&, class cereal::SerializerContext&) const;

    // vIndex: 1
    virtual ~IntRangeConstraint();

    // vIndex: 2
    virtual struct cereal::internal::ConstraintDescription description() const;

    MCAPI class Puv::IntRangeConstraint& constraintMax(class cereal::BasicNumericConstraint<double>);

    MCAPI class Puv::IntRangeConstraint& constraintMin(class cereal::BasicNumericConstraint<double>);

    // NOLINTEND
};

}; // namespace Puv
