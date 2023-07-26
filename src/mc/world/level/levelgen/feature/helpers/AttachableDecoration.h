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
        DirectionMask& operator=(DirectionMask const&) = delete;
        DirectionMask(DirectionMask const&)            = delete;
        DirectionMask()                                = delete;
    };

public:
    // prevent constructor by default
    AttachableDecoration& operator=(AttachableDecoration const&) = delete;
    AttachableDecoration(AttachableDecoration const&)            = delete;
    AttachableDecoration()                                       = delete;

public:
    /**
     * @symbol
     * ?placeDecoration\@AttachableDecoration\@TreeHelper\@\@QEBAXAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEBUDirectionMask\@12\@\@Z
     */
    MCAPI void
    placeDecoration(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, struct TreeHelper::AttachableDecoration::DirectionMask const&)
        const; // NOLINT
    /**
     * @symbol ??1AttachableDecoration\@TreeHelper\@\@QEAA\@XZ
     */
    MCAPI ~AttachableDecoration(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_placeMultiDecoration\@AttachableDecoration\@TreeHelper\@\@AEBAXAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBVBlock\@\@1\@Z
     */
    MCAPI void
    _placeMultiDecoration(class IBlockWorldGenAPI&, class BlockPos const&, class Block const&, class BlockPos const&)
        const; // NOLINT
};

}; // namespace TreeHelper
