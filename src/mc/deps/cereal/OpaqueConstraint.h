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

class OpaqueConstraint : public ::cereal::ConstraintHandle<::cereal::OpaqueConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mFunc;
    ::ll::TypedStorage<8, 32, ::std::string> mDoc;
    ::ll::TypedStorage<4, 4, uint>           mFuncId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const /*override*/;
    // NOLINTEND
};

} // namespace cereal
