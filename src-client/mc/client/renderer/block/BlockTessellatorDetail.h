#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/facing/Rotation.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockTessellator;
class Tessellator;
struct TextureUVCoordinateSet;
namespace DeclarativeBlockTessellation { struct Cube; }
// clang-format on

class BlockTessellatorDetail {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _tessellateDeclarative(
        ::BlockTessellator&                                     bt,
        ::Tessellator&                                          tessellator,
        ::Block const&                                          block,
        ::BlockPos const&                                       p,
        ::gsl::span<::DeclarativeBlockTessellation::Cube const> cubes,
        ::TextureUVCoordinateSet const*                         optionalOverrideTexture,
        ::Facing::Rotation                                      applyRotation
    );
    // NOLINTEND
};
