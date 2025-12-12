#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
struct BiomeSurfaceMaterialData;
struct SurfaceMaterialAttributes;
// clang-format on

namespace BiomeSurfaceMaterialSerialization {
// functions
// NOLINTBEGIN
MCNAPI void applySerializedSurfaceMaterialAttributeData(
    ::BiomeSurfaceMaterialData const& data,
    ::SurfaceMaterialAttributes&      surfaceMaterialAttributes,
    ::BlockPalette const&             blockPalette
);

MCNAPI void serializeSurfaceMaterialAttributeData(
    ::SurfaceMaterialAttributes const& surfaceMaterialAttributes,
    ::BiomeSurfaceMaterialData&        data
);
// NOLINTEND

} // namespace BiomeSurfaceMaterialSerialization
