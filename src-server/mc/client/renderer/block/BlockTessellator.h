#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockTessellator {
public:
    // BlockTessellator inner types declare
    // clang-format off
    struct LocalRegistry;
    struct UVOverride;
    // clang-format on

    // BlockTessellator inner types define
    enum class BambooFenceSlatPieceType : int {};

    enum class CrossTextureReverseSideMapping : uchar {};

    enum class CrossTextureWidth : uchar {};

    enum class FenceGatePieceType : int {};

    struct LocalRegistry {};

    struct UVOverride {};
};
