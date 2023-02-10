/**
 * @file  BlockVolume.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockVolume.
 *
 */
class BlockVolume {

#define AFTER_EXTRA
// Add Member There
public:
struct BlockVolumeIter {
    BlockVolumeIter() = delete;
    BlockVolumeIter(BlockVolumeIter const&) = delete;
    BlockVolumeIter(BlockVolumeIter const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKVOLUME
public:
    class BlockVolume& operator=(class BlockVolume const &) = delete;
    BlockVolume(class BlockVolume const &) = delete;
    BlockVolume() = delete;
#endif

public:
    /**
     * @hash   -1353096262
     * @symbol  ??0BlockVolume\@\@QEAA\@V?$buffer_span_mut\@PEBVBlock\@\@\@\@HHHAEBVBlock\@\@H\@Z
     */
    MCAPI BlockVolume(class buffer_span_mut<class Block const *>, int, int, int, class Block const &, int);
    /**
     * @hash   2088202712
     * @symbol  ?begin\@BlockVolume\@\@QEBA?AUBlockVolumeIter\@1\@XZ
     */
    MCAPI struct BlockVolume::BlockVolumeIter begin() const;
    /**
     * @hash   1221098771
     * @symbol  ?computeHeightMap\@BlockVolume\@\@QEBA?AV?$unique_ptr\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@U?$default_delete\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<std::vector<short>> computeHeightMap() const;
    /**
     * @hash   1209302348
     * @symbol  ?end\@BlockVolume\@\@QEBA?AUBlockVolumeIter\@1\@XZ
     */
    MCAPI struct BlockVolume::BlockVolumeIter end() const;
    /**
     * @hash   1260296389
     * @symbol  ?findHighestNonAirBlock\@BlockVolume\@\@QEBAFXZ
     */
    MCAPI short findHighestNonAirBlock() const;
    /**
     * @hash   397601017
     * @symbol  ?getAboveTopSolidBlock\@BlockVolume\@\@QEBAFAEBVBlockPos\@\@_N11\@Z
     */
    MCAPI short getAboveTopSolidBlock(class BlockPos const &, bool, bool, bool) const;
    /**
     * @hash   -1334533062
     * @symbol  ?getDimensions\@BlockVolume\@\@QEBA?AVPos\@\@XZ
     */
    MCAPI class Pos getDimensions() const;
    /**
     * @hash   -764275294
     * @symbol  ?getIndexBounds\@BlockVolume\@\@QEBAIXZ
     */
    MCAPI unsigned int getIndexBounds() const;
    /**
     * @hash   -1132949881
     * @symbol  ?index\@BlockVolume\@\@QEBAIAEBVBlockPos\@\@\@Z
     */
    MCAPI unsigned int index(class BlockPos const &) const;
    /**
     * @hash   1200115557
     * @symbol  ?index\@BlockVolume\@\@QEBAIAEBVPos\@\@\@Z
     */
    MCAPI unsigned int index(class Pos const &) const;
    /**
     * @hash   792786603
     * @symbol  ?indexNoBoundsCheck\@BlockVolume\@\@QEBAIAEBVPos\@\@\@Z
     */
    MCAPI unsigned int indexNoBoundsCheck(class Pos const &) const;
    /**
     * @hash   229648549
     * @symbol  ?indexNoBoundsCheck\@BlockVolume\@\@QEBAIAEBVBlockPos\@\@\@Z
     */
    MCAPI unsigned int indexNoBoundsCheck(class BlockPos const &) const;
    /**
     * @hash   1297787979
     * @symbol  ?isInBounds\@BlockVolume\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isInBounds(class BlockPos const &) const;
    /**
     * @hash   -1806420407
     * @symbol  ?isInBounds\@BlockVolume\@\@QEBA_NAEBVPos\@\@\@Z
     */
    MCAPI bool isInBounds(class Pos const &) const;

};