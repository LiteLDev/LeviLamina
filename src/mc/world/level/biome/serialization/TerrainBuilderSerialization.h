#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
class SurfaceBuilderData;
struct BiomeSurfaceBuilderData;
// clang-format on

namespace TerrainBuilderSerialization {
// functions
// NOLINTBEGIN
MCAPI void applySerializedTerrainBuilderData(
    ::BiomeSurfaceBuilderData const& data,
    ::SurfaceBuilderData&            component,
    ::BlockPalette const&            blockPalette
);

MCAPI void serializeTerrainBuilderData(::SurfaceBuilderData const& component, ::BiomeSurfaceBuilderData& data);
// NOLINTEND

} // namespace TerrainBuilderSerialization
