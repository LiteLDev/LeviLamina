#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/Color255RGB.h"
#include "mc/deps/shared_types/v1_21_110/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

struct MapColorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGB>                           mMapColor;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_110::BlockDefinition::TintMethod> mTintMethod;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& ColorId();

    MCAPI static ::std::string_view const& NameId();

    MCAPI static ::std::string_view const& TintMethodId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
