#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/core/sem_ver/SemVersion.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes {

class SemVersionConstraint : public ::cereal::ConstraintHandle<::SharedTypes::SemVersionConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::optional<::SemVersion>> mMin;
    ::ll::TypedStorage<8, 32, ::std::optional<::SemVersion>> mMax;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::SemVersionConstraint& range(::SemVersion const& min, ::SemVersion const& max);

    MCAPI void validateValue(::SemVersion const& vers, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::cereal::internal::ConstraintDescription $doDescription(::cereal::ContextArea) const;


    // NOLINTEND
};

} // namespace SharedTypes
