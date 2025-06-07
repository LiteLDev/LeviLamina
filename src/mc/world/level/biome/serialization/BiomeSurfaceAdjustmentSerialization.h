#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/SurfaceMaterialAdjustmentAttributes.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
struct BiomeElementData;
struct BiomeStringList;
struct BiomeSurfaceMaterialAdjustmentData;
struct SurfaceMaterialAdjustmentAttributes;
// clang-format on

namespace BiomeSurfaceAdjustmentSerialization {
// functions
// NOLINTBEGIN
MCNAPI void applySerializedSurfaceAdjustmentData(
    ::BiomeSurfaceMaterialAdjustmentData const& data,
    ::SurfaceMaterialAdjustmentAttributes&      surfaceAdjustments,
    ::BlockPalette const&                       blockPalette,
    ::BiomeStringList const&                    stringList
);

MCNAPI void serializeBiomeElementData(
    ::SurfaceMaterialAdjustmentAttributes::Element const& adjustment,
    ::BiomeElementData&                                   data,
    ::BiomeStringList&                                    stringList
);
// NOLINTEND

} // namespace BiomeSurfaceAdjustmentSerialization
