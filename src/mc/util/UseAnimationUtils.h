#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/UseAnimation.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class UseAnimationUtils {
public:
    // prevent constructor by default
    UseAnimationUtils& operator=(UseAnimationUtils const&);
    UseAnimationUtils(UseAnimationUtils const&);
    UseAnimationUtils();

public:
    // NOLINTBEGIN
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    MCAPI static std::initializer_list<std::pair<std::string const, ::Puv::Legacy::UseAnimation>> const&
    getStringMapping();

    // NOLINTEND
};
