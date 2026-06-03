#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/cereal/InputConstraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace cereal {

class Constraint {
public:
    // Constraint inner types define
    using Description = ::cereal::internal::ConstraintDescription;

    using TypeInfo = ::entt::type_info;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cereal::internal::InputConstraint> mInputConstraint;
    ::ll::TypedStorage<1, 1, ::cereal::ContextArea>               mContextArea;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void doValidate(::entt::meta_any const& any, ::cereal::SerializerContext& context) const = 0;

    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea config) const = 0;

    virtual ~Constraint() = default;

    virtual ::cereal::Constraint const* subConstraint(uint64 index) const;

    virtual ::entt::type_info const& info() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::cereal::Constraint const* $subConstraint(uint64 index) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
