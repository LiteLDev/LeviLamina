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

namespace cereal {

class StringConstraint : public ::cereal::Constraint {
public:
    // prevent constructor by default
    StringConstraint& operator=(StringConstraint const&);
    StringConstraint();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual void doValidate(entt::meta_any const& any, class cereal::SerializerContext& context) const;

    // vIndex: 1
    virtual ~StringConstraint();

    // vIndex: 2
    virtual struct cereal::internal::ConstraintDescription description() const;

    MCAPI StringConstraint(class cereal::StringConstraint&&);

    MCAPI StringConstraint(class cereal::StringConstraint const&);

    MCAPI class cereal::StringConstraint& maxSize(uint64 size);

    MCAPI class cereal::StringConstraint& regex(std::string str);

    MCAPI class cereal::StringConstraint& rejectEmpty();

    // NOLINTEND
};

}; // namespace cereal
