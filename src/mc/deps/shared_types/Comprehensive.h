#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Comprehensive {
// functions
// NOLINTBEGIN
MCAPI void bindItemComponentTypes(::cereal::ReflectionCtx& ctx);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::string_view const& AIM_ASSIST_PAYLOAD_KEY();

MCAPI ::std::string_view const& BIOME_PAYLOAD_KEY();

#ifdef LL_PLAT_C
MCAPI ::std::string_view const& BLOCK_CULLING_PAYLOAD_KEY();
#endif

MCAPI ::std::string_view const& CAMERA_PAYLOAD_KEY();

MCAPI ::std::string_view const& CAMERA_SPLINE_PAYLOAD_KEY();

#ifdef LL_PLAT_C
MCAPI ::std::string_view const& CLIENT_BIOME_PAYLOAD_KEY();
#endif

MCAPI ::std::string_view const& CRAFTING_ITEMS_CATALOG_PAYLOAD();

MCAPI ::std::string_view const& FEATURE_RULES_PAYLOAD_KEY();

MCAPI ::std::string_view const& PARTICLE_PAYLOAD_KEY();

MCAPI ::std::string_view const& TRADE_TABLES_PAYLOAD_KEY();

MCAPI ::std::string_view const& VOXEL_SHAPE_PAYLOAD_KEY();
// NOLINTEND

} // namespace SharedTypes::Comprehensive
