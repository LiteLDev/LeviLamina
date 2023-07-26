#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace DripstoneUtils { class WindOffsetter; }
// clang-format on

class LargeDripstoneFeature {
public:
    // LargeDripstoneFeature inner types declare
    // clang-format off
    class LargeDripstone;
    // clang-format on

    // LargeDripstoneFeature inner types define
    class LargeDripstone {

    public:
        // prevent constructor by default
        LargeDripstone& operator=(LargeDripstone const&) = delete;
        LargeDripstone(LargeDripstone const&)            = delete;
        LargeDripstone()                                 = delete;

    public:
        /**
         * @symbol
         * ?moveBackUntilBaseIsInsideStoneAndShrinkRadiusIfNecessary\@LargeDripstone\@LargeDripstoneFeature\@\@QEAA_NAEAVIBlockWorldGenAPI\@\@AEBVWindOffsetter\@DripstoneUtils\@\@\@Z
         */
        MCAPI bool
        moveBackUntilBaseIsInsideStoneAndShrinkRadiusIfNecessary(class IBlockWorldGenAPI&, class DripstoneUtils::WindOffsetter const&); // NOLINT
        /**
         * @symbol
         * ?placeBlocks\@LargeDripstone\@LargeDripstoneFeature\@\@QEBAXAEAVIBlockWorldGenAPI\@\@AEAVRandom\@\@AEBVWindOffsetter\@DripstoneUtils\@\@\@Z
         */
        MCAPI void placeBlocks(class IBlockWorldGenAPI&, class Random&, class DripstoneUtils::WindOffsetter const&)
            const; // NOLINT
    };

public:
    // prevent constructor by default
    LargeDripstoneFeature& operator=(LargeDripstoneFeature const&) = delete;
    LargeDripstoneFeature(LargeDripstoneFeature const&)            = delete;
    LargeDripstoneFeature()                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?place\@LargeDripstoneFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const; // NOLINT
};
