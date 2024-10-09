#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cereal/Constraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

class ExpressionNodeCerealConstraint : public ::cereal::Constraint {
public:
    // prevent constructor by default
    ExpressionNodeCerealConstraint& operator=(ExpressionNodeCerealConstraint const&);
    ExpressionNodeCerealConstraint(ExpressionNodeCerealConstraint const&);
    ExpressionNodeCerealConstraint();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual void doValidate(entt::meta_any const& any, class cereal::SerializerContext& context) const;

    // vIndex: 1
    virtual ~ExpressionNodeCerealConstraint();

    // vIndex: 2
    virtual struct cereal::internal::ConstraintDescription description() const;

    MCAPI class ExpressionNodeCerealConstraint& disallowSideEffects(bool countRandomAsSideEffect);

    MCAPI class ExpressionNodeCerealConstraint& onlyAllowQueries(std::vector<std::string> const& allowedQueries);

    // NOLINTEND
};
