#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockTessellator {
public:
    // BlockTessellator inner types declare
    // clang-format off
    struct LocalRegistry;
    struct UVOverride;
    // clang-format on

    // BlockTessellator inner types define
    enum class CrossTextureWidth : uchar {};

    enum class CrossTextureReverseSideMapping : uchar {};

    enum class BambooFenceSlatPieceType : int {};

    enum class FenceGatePieceType : int {};

    struct LocalRegistry {};

    struct UVOverride {};
};
