#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10 {

struct BlockEnum {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindBlockRenderLayer(::cereal::ReflectionCtx& ctx);

    MCAPI static void bindEnum(::cereal::ReflectionCtx& ctx);

    MCAPI static void bindMaterialType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
