#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/UseAnimation.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class UseAnimationUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::std::initializer_list<::std::pair<::std::string const, ::SharedTypes::Legacy::UseAnimation>> const&
    getStringMapping();
    // NOLINTEND
};
