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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9fd194;
    // NOLINTEND

public:
    // prevent constructor by default
    Constraint& operator=(Constraint const&);
    Constraint(Constraint const&);
    Constraint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void doValidate(::entt::meta_any const&, ::cereal::SerializerContext&) const = 0;

    virtual ~Constraint() = default;

    virtual ::cereal::Constraint const* subConstraint(uint64) const;

    virtual ::cereal::internal::ConstraintDescription description() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cereal::Constraint const* $subConstraint(uint64) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
