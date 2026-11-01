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
    MCNAPI static void bindBlockRenderLayer(::cereal::ReflectionCtx& ctx);

    MCNAPI static void bindDirection(::cereal::ReflectionCtx& ctx);

    MCNAPI static void bindEnum(::cereal::ReflectionCtx& ctx);

    MCNAPI static void bindMaterialType(::cereal::ReflectionCtx& ctx);

    MCNAPI static void bindMovementType(::cereal::ReflectionCtx& ctx);

    MCNAPI static void bindPrecipitationBehavior(::cereal::ReflectionCtx& ctx);

    MCNAPI static void bindStickyType(::cereal::ReflectionCtx& ctx);

    MCNAPI static void bindSupportShape(::cereal::ReflectionCtx& ctx);

    MCNAPI static void bindTintMethod(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::SharedTypes::v1_26_20::MaterialType stringToMaterialType(::std::string const& type);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::array<char const*, 26> const& MaterialTypeToString();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
