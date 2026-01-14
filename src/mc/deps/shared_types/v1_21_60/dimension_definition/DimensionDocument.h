#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_60/dimension_definition/Dimension.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_60::DimensionDefinition {

struct DimensionDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::SharedTypes::v1_21_60::DimensionDefinition::Dimension> mDimension;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DimensionDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::DimensionDefinition
