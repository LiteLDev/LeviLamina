#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Tessellator;
class Vec3;
struct TextureUVCoordinateSet;
// clang-format on

namespace BlockTextureTessellator {
// functions
// NOLINTBEGIN
MCNAPI void tessellate(
    ::Tessellator&                  t,
    ::Vec3 const&                   pos,
    ::TextureUVCoordinateSet const& tex,
    bool                            usePBRFormats,
    bool                            width,
    int                             rotation,
    float                           offsetBottom,
    ::Vec3 const&                   renderBothSides,
    bool                            useNormals,
    bool                            tileWidth,
    float                           flipHorizontal,
    bool
);
// NOLINTEND

} // namespace BlockTextureTessellator
