#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
struct BiomeNoiseGradientSurfaceData;
struct NoiseGradientBiomeSurfaceComponent;
// clang-format on

namespace BiomeNoiseGradientSurfaceSerialization {
// functions
// NOLINTBEGIN
MCAPI void applySerializedNoiseGradientSurfaceData(
    ::BiomeNoiseGradientSurfaceData const& data,
    ::NoiseGradientBiomeSurfaceComponent&  noiseGradientSurface,
    ::BlockPalette const&                  blockPalette
);

MCAPI void serializeNoiseGradientSurfaceData(
    ::NoiseGradientBiomeSurfaceComponent const& noiseGradientSurface,
    ::BiomeNoiseGradientSurfaceData&            data
);
// NOLINTEND

} // namespace BiomeNoiseGradientSurfaceSerialization
