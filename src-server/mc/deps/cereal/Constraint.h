#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace cereal {

class Constraint {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void doPreValidate(::entt::meta_any const&, ::cereal::SerializerContext&) const;

    // vIndex: 1
    virtual void doValidate(::entt::meta_any const&, ::cereal::SerializerContext&) const = 0;

    // vIndex: 2
    virtual ~Constraint() = default;

    // vIndex: 3
    virtual ::cereal::internal::ConstraintDescription description() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void preValidate(::entt::meta_any const& any, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $doPreValidate(::entt::meta_any const&, ::cereal::SerializerContext&) const;
    // NOLINTEND
};

} // namespace cereal
