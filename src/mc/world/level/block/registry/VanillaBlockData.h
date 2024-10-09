#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VanillaBlockData {
public:
    // prevent constructor by default
    VanillaBlockData& operator=(VanillaBlockData const&);
    VanillaBlockData(VanillaBlockData const&);
    VanillaBlockData();

public:
    // NOLINTBEGIN
    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};
