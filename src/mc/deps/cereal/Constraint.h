#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/cereal/InputConstraintData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace cereal {

class Constraint {
public:
    // Constraint inner types declare
    // clang-format off
    struct NoValidateValueTag;
    // clang-format on

    // Constraint inner types define
    struct NoValidateValueTag {};

    using Description = ::cereal::internal::ConstraintDescription;

    using TypeInfo = ::entt::type_info;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::cereal::internal::InputConstraintData> mInputConstraint;
    ::ll::TypedStorage<1, 1, ::cereal::ContextArea>                    mContextArea;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void doValidate(::entt::meta_any const& any, ::cereal::SerializerContext& context) const = 0;

    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea req) const = 0;

    virtual uint64 doMaxInputLength() const;

    virtual uint64 doMinInputLength() const;

    virtual ~Constraint() = default;

    virtual ::cereal::Constraint const* subConstraint(uint64 index) const;

    virtual ::entt::type_info const& info() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD uint64 $doMaxInputLength() const;

    MCFOLD uint64 $doMinInputLength() const;

    MCFOLD ::cereal::Constraint const* $subConstraint(uint64 index) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
