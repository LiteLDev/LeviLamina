#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span_mut.h"

class BlockVolume {
public:
    // BlockVolume inner types declare
    // clang-format off
    struct BlockVolumeIter;
    // clang-format on

    // BlockVolume inner types define
    struct BlockVolumeIter {

    public:
        // prevent constructor by default
        BlockVolumeIter& operator=(BlockVolumeIter const&) = delete;
        BlockVolumeIter(BlockVolumeIter const&)            = delete;
        BlockVolumeIter()                                  = delete;

    public:
        /**
         * @symbol ??9BlockVolumeIter\@BlockVolume\@\@QEBA_NAEBU01\@\@Z
         */
        MCAPI bool operator!=(struct BlockVolume::BlockVolumeIter const&) const; // NOLINT
        /**
         * @symbol ??DBlockVolumeIter\@BlockVolume\@\@QEAA?BU?$pair\@PEBVBlock\@\@VPos\@\@\@std\@\@XZ
         */
        MCAPI struct std::pair<class Block const*, class Pos> const operator*(); // NOLINT
        /**
         * @symbol ??EBlockVolumeIter\@BlockVolume\@\@QEAAAEAU01\@XZ
         */
        MCAPI struct BlockVolume::BlockVolumeIter& operator++(); // NOLINT
    };

public:
    // prevent constructor by default
    BlockVolume& operator=(BlockVolume const&) = delete;
    BlockVolume(BlockVolume const&)            = delete;
    BlockVolume()                              = delete;

public:
    /**
     * @symbol ??0BlockVolume\@\@QEAA\@V?$buffer_span_mut\@PEBVBlock\@\@\@\@HHHAEBVBlock\@\@H\@Z
     */
    MCAPI BlockVolume(class buffer_span_mut<class Block const*>, int, int, int, class Block const&, int); // NOLINT
    /**
     * @symbol ?begin\@BlockVolume\@\@QEBA?AUBlockVolumeIter\@1\@XZ
     */
    MCAPI struct BlockVolume::BlockVolumeIter begin() const; // NOLINT
    /**
     * @symbol
     * ?computeHeightMap\@BlockVolume\@\@QEBA?AV?$unique_ptr\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@U?$default_delete\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<std::vector<short>> computeHeightMap() const; // NOLINT
    /**
     * @symbol ?end\@BlockVolume\@\@QEBA?AUBlockVolumeIter\@1\@XZ
     */
    MCAPI struct BlockVolume::BlockVolumeIter end() const; // NOLINT
    /**
     * @symbol ?findHighestNonAirBlock\@BlockVolume\@\@QEBAFXZ
     */
    MCAPI short findHighestNonAirBlock() const; // NOLINT
    /**
     * @symbol ?getAboveTopSolidBlock\@BlockVolume\@\@QEBAFAEBVBlockPos\@\@_N11\@Z
     */
    MCAPI short getAboveTopSolidBlock(class BlockPos const&, bool, bool, bool) const; // NOLINT
    /**
     * @symbol ?getDimensions\@BlockVolume\@\@QEBA?AVPos\@\@XZ
     */
    MCAPI class Pos getDimensions() const; // NOLINT
    /**
     * @symbol ?getIndexBounds\@BlockVolume\@\@QEBAIXZ
     */
    MCAPI unsigned int getIndexBounds() const; // NOLINT
    /**
     * @symbol ?index\@BlockVolume\@\@QEBAIAEBVBlockPos\@\@\@Z
     */
    MCAPI unsigned int index(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?index\@BlockVolume\@\@QEBAIAEBVPos\@\@\@Z
     */
    MCAPI unsigned int index(class Pos const&) const; // NOLINT
    /**
     * @symbol ?indexNoBoundsCheck\@BlockVolume\@\@QEBAIAEBVPos\@\@\@Z
     */
    MCAPI unsigned int indexNoBoundsCheck(class Pos const&) const; // NOLINT
    /**
     * @symbol ?indexNoBoundsCheck\@BlockVolume\@\@QEBAIAEBVBlockPos\@\@\@Z
     */
    MCAPI unsigned int indexNoBoundsCheck(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?isInBounds\@BlockVolume\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isInBounds(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?isInBounds\@BlockVolume\@\@QEBA_NAEBVPos\@\@\@Z
     */
    MCAPI bool isInBounds(class Pos const&) const; // NOLINT
};
