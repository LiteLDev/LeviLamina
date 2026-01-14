#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

struct PlacementPosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mEnabledStates;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_S static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& BLOCK_FACE();

    MCAPI static ::std::string const& VALID_POSITION_REGEX();

    MCAPI static ::std::string_view const& VERTICAL_HALF();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
