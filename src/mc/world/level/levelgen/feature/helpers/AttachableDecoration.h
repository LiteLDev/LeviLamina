#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TreeHelper {

struct AttachableDecoration {
public:
    // AttachableDecoration inner types declare
    // clang-format off
    struct DirectionMask;
    // clang-format on

    // AttachableDecoration inner types define
    struct DirectionMask {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TREEHELPER_ATTACHABLEDECORATION_DIRECTIONMASK
    public:
        DirectionMask& operator=(DirectionMask const&) = delete;
        DirectionMask(DirectionMask const&)            = delete;
        DirectionMask()                                = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TREEHELPER_ATTACHABLEDECORATION
public:
    AttachableDecoration& operator=(AttachableDecoration const&) = delete;
    AttachableDecoration(AttachableDecoration const&)            = delete;
    AttachableDecoration()                                       = delete;
#endif

public:
    /**
     * @symbol
     * ?placeDecoration\@AttachableDecoration\@TreeHelper\@\@QEBAXAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEBUDirectionMask\@12\@\@Z
     */
    MCAPI void
    placeDecoration(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, struct TreeHelper::AttachableDecoration::DirectionMask const&)
        const;
    /**
     * @symbol ??1AttachableDecoration\@TreeHelper\@\@QEAA\@XZ
     */
    MCAPI ~AttachableDecoration();

    // private:
    /**
     * @symbol
     * ?_placeMultiDecoration\@AttachableDecoration\@TreeHelper\@\@AEBAXAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBVBlock\@\@1\@Z
     */
    MCAPI void
    _placeMultiDecoration(class IBlockWorldGenAPI&, class BlockPos const&, class Block const&, class BlockPos const&)
        const;
};

}; // namespace TreeHelper
