#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
struct BiomeCappedSurfaceData;
struct CappedSurfaceAttributes;
// clang-format on

namespace BiomeCappedSurfaceSerialization {
// functions
// NOLINTBEGIN
MCNAPI void applySerializedCappedSurfaceData(
    ::BiomeCappedSurfaceData const& data,
    ::CappedSurfaceAttributes&      cappedSurface,
    ::BlockPalette const&           blockPalette
);
// NOLINTEND

} // namespace BiomeCappedSurfaceSerialization
