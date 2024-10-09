#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IBlockWorldGenAPI;
class Random;
// clang-format on

namespace TreeHelper {

struct AttachableDecoration {
public:
    // AttachableDecoration inner types declare
    // clang-format off
    struct DirectionMask;
    // clang-format on

    // AttachableDecoration inner types define
    struct DirectionMask {
    public:
        // prevent constructor by default
        DirectionMask& operator=(DirectionMask const&);
        DirectionMask(DirectionMask const&);
        DirectionMask();
    };

public:
    // prevent constructor by default
    AttachableDecoration& operator=(AttachableDecoration const&);
    AttachableDecoration(AttachableDecoration const&);
    AttachableDecoration();

public:
    // NOLINTBEGIN
    MCAPI void placeDecoration(
        class IBlockWorldGenAPI&                                      target,
        class BlockPos const&                                         pos,
        class Random&                                                 random,
        struct TreeHelper::AttachableDecoration::DirectionMask const& mask
    ) const;

    MCAPI ~AttachableDecoration();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _placeMultiDecoration(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Block const&       block,
        class BlockPos const&    origin
    ) const;

    // NOLINTEND
};

}; // namespace TreeHelper
