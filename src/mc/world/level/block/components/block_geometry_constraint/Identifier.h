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

namespace BlockGeometryConstraint {

class Identifier : public ::cereal::Constraint {
public:
    // prevent constructor by default
    Identifier& operator=(Identifier const&);
    Identifier(Identifier const&);
    Identifier();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual void doValidate(entt::meta_any const& any, class cereal::SerializerContext& context) const;

    // vIndex: 1
    virtual ~Identifier() = default;

    // vIndex: 2
    virtual struct cereal::internal::ConstraintDescription description() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI struct cereal::internal::ConstraintDescription description$() const;

    MCAPI void doValidate$(entt::meta_any const& any, class cereal::SerializerContext& context) const;

    // NOLINTEND
};

}; // namespace BlockGeometryConstraint
