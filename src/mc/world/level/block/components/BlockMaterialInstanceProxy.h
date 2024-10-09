#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockMaterialInstanceProxy {
public:
    // prevent constructor by default
    BlockMaterialInstanceProxy& operator=(BlockMaterialInstanceProxy const&);
    BlockMaterialInstanceProxy();

public:
    // NOLINTBEGIN
    MCAPI BlockMaterialInstanceProxy(struct BlockMaterialInstanceProxy const&);

    MCAPI ~BlockMaterialInstanceProxy();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};
