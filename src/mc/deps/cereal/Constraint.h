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
    // prevent constructor by default
    Constraint& operator=(Constraint const&);
    Constraint(Constraint const&);
    Constraint();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void doValidate(::entt::meta_any const&, ::cereal::SerializerContext&) const = 0;

    // vIndex: 1
    virtual ~Constraint();

    // vIndex: 2
    virtual ::cereal::internal::ConstraintDescription description() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void validate(::entt::meta_any const& any, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cereal
