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
MCAPI void applySerializedBiomeElementData(
    ::BiomeElementData const&                       data,
    ::SurfaceMaterialAdjustmentAttributes::Element& adjustment,
    ::BlockPalette const&                           blockPalette,
    ::BiomeStringList const&                        stringList
);

MCAPI void applySerializedSurfaceAdjustmentData(
    ::BiomeSurfaceMaterialAdjustmentData const& data,
    ::SurfaceMaterialAdjustmentAttributes&      surfaceAdjustments,
    ::BlockPalette const&                       blockPalette,
    ::BiomeStringList const&                    stringList
);

MCAPI void serializeBiomeElementData(
    ::SurfaceMaterialAdjustmentAttributes::Element const& adjustment,
    ::BiomeElementData&                                   data,
    ::BiomeStringList&                                    stringList
);

MCAPI void serializeSurfaceAdjustmentData(
    ::SurfaceMaterialAdjustmentAttributes const& surfaceAdjustments,
    ::BiomeSurfaceMaterialAdjustmentData&        data,
    ::BiomeStringList&                           stringList
);
// NOLINTEND

} // namespace BiomeSurfaceAdjustmentSerialization
