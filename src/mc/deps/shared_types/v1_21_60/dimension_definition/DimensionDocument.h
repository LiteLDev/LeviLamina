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
    ::ll::TypedStorage<8, 32, ::std::string>                                           mFormatVersion;
    ::ll::TypedStorage<8, 72, ::SharedTypes::v1_21_60::DimensionDefinition::Dimension> mDimension;
    // NOLINTEND

public:
    // prevent constructor by default
    DimensionDocument(DimensionDocument const&);
    DimensionDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_60::DimensionDefinition::DimensionDocument&
    operator=(::SharedTypes::v1_21_60::DimensionDefinition::DimensionDocument const&);

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
