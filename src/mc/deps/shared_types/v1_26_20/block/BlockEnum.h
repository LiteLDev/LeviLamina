#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct BlockEnum {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindBlockRenderLayer(::cereal::ReflectionCtx& ctx);

    MCAPI static void bindChestObstructionRule(::cereal::ReflectionCtx& ctx);

    MCAPI static void bindConnectionID(::cereal::ReflectionCtx& ctx);

    MCAPI static void bindConnectionType(::cereal::ReflectionCtx& ctx);

    MCAPI static void bindDirection(::cereal::ReflectionCtx& ctx);

    MCAPI static void bindEnum(::cereal::ReflectionCtx& ctx);

    MCAPI static void bindMaterialType(::cereal::ReflectionCtx& ctx);

    MCAPI static void bindMovementType(::cereal::ReflectionCtx& ctx);

    MCAPI static void bindPrecipitationBehavior(::cereal::ReflectionCtx& ctx);

    MCAPI static void bindStickyType(::cereal::ReflectionCtx& ctx);

    MCAPI static void bindSupportShape(::cereal::ReflectionCtx& ctx);

    MCAPI static void bindTintMethod(::cereal::ReflectionCtx& ctx);

    MCAPI static ::SharedTypes::v1_26_20::MaterialType stringToMaterialType(::std::string const& type);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::array<char const*, 26> const& MaterialTypeToString();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
