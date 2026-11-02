#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace cereal {

class ObjectConstraint : public ::cereal::ConstraintHandle<::cereal::ObjectConstraint> {
public:
    // ObjectConstraint inner types define
    using Base = ::cereal::ConstraintHandle<::cereal::ObjectConstraint>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const /*override*/;
    // NOLINTEND
};

} // namespace cereal
