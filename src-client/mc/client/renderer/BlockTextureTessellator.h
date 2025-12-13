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
    bool                            center,
    int                             width,
    float                           rotation,
    ::Vec3 const&                   offsetBottom,
    bool                            renderBothSides,
    bool                            useNormals,
    float                           tileWidth,
    bool                            flipHorizontal
);
// NOLINTEND

} // namespace BlockTextureTessellator
