#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

struct PlacementDirection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mEnabledStates;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>        mYRotationOffset;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_S ~PlacementDirection();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_S static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& CARDINAL_DIRECTION();

    MCAPI static ::std::string_view const& FACING_DIRECTION();

    MCAPI static ::std::string const& VALID_DIRECTION_REGEX();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_S void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
