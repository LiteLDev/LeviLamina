#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span_mut.h"

class Block;

class BlockVolume {
public:
    // BlockVolume inner types declare
    // clang-format off
    struct BlockVolumeIter;
    // clang-format on

    // BlockVolume inner types define
    struct BlockVolumeIter {
        // Pos                                     pos;       // this+0x0
        // Pos                                     dims;      // this+0xC
        // buffer_span_mut<Block const*>::iterator blockIter; // this+0x18

        // prevent constructor by default
        BlockVolumeIter& operator=(BlockVolumeIter const&);
        BlockVolumeIter(BlockVolumeIter const&);
        BlockVolumeIter();

        // NOLINTBEGIN
        // symbol: ??9BlockVolumeIter@BlockVolume@@QEBA_NAEBU01@@Z
        MCAPI bool operator!=(struct BlockVolume::BlockVolumeIter const& c) const;

        // symbol: ??DBlockVolumeIter@BlockVolume@@QEAA?BU?$pair@PEBVBlock@@VPos@@@std@@XZ
        MCAPI std::pair<class Block const*, class Pos> const operator*();

        // symbol: ??EBlockVolumeIter@BlockVolume@@QEAAAEAU01@XZ
        MCAPI struct BlockVolume::BlockVolumeIter& operator++();

        // NOLINTEND
    };

public:
    buffer_span_mut<Block const*> mBlocks;          // this+0x0
    uint                          mWidth;           // this+0x10
    uint                          mHeight;          // this+0x14
    uint                          mDepth;           // this+0x18
    int                           mDimensionBottom; // this+0x1C
    Block const*                  mInitBlock;       // this+0x20

    BlockVolume() = default;

    Block const*& block(uint index) { return mBlocks[index]; };

    Block const*& block(BlockPos const& pos) { return mBlocks[index(pos)]; };

public:
    // NOLINTBEGIN
    // symbol: ??0BlockVolume@@QEAA@V?$buffer_span_mut@PEBVBlock@@@@HHHAEBVBlock@@H@Z
    MCAPI BlockVolume(
        class buffer_span_mut<class Block const*> buffer,
        int                                       width,
        int                                       height,
        int                                       depth,
        class Block const&                        initBlock,
        int
    );

    // symbol: ?begin@BlockVolume@@QEBA?AUBlockVolumeIter@1@XZ
    MCAPI struct BlockVolume::BlockVolumeIter begin() const;

    // symbol:
    // ?computeHeightMap@BlockVolume@@QEBA?AV?$unique_ptr@V?$vector@FV?$allocator@F@std@@@std@@U?$default_delete@V?$vector@FV?$allocator@F@std@@@std@@@2@@std@@XZ
    MCAPI std::unique_ptr<std::vector<short>> computeHeightMap() const;

    // symbol: ?end@BlockVolume@@QEBA?AUBlockVolumeIter@1@XZ
    MCAPI struct BlockVolume::BlockVolumeIter end() const;

    // symbol: ?findHighestNonAirBlock@BlockVolume@@QEBAFXZ
    MCAPI short findHighestNonAirBlock() const;

    // symbol: ?getAboveTopSolidBlock@BlockVolume@@QEBAFAEBVBlockPos@@_N11@Z
    MCAPI short
    getAboveTopSolidBlock(class BlockPos const& start, bool dimensionShowsSky, bool includeWater, bool includeLeaves)
        const;

    // symbol: ?getDimensions@BlockVolume@@QEBA?AVPos@@XZ
    MCAPI class Pos getDimensions() const;

    // symbol: ?getIndexBounds@BlockVolume@@QEBAIXZ
    MCAPI uint getIndexBounds() const;

    // symbol: ?index@BlockVolume@@QEBAIAEBVBlockPos@@@Z
    MCAPI uint index(class BlockPos const& pos) const;

    // symbol: ?index@BlockVolume@@QEBAIAEBVPos@@@Z
    MCAPI uint index(class Pos const& pos) const;

    // symbol: ?indexNoBoundsCheck@BlockVolume@@QEBAIAEBVBlockPos@@@Z
    MCAPI uint indexNoBoundsCheck(class BlockPos const& pos) const;

    // symbol: ?indexNoBoundsCheck@BlockVolume@@QEBAIAEBVPos@@@Z
    MCAPI uint indexNoBoundsCheck(class Pos const& pos) const;

    // symbol: ?isInBounds@BlockVolume@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool isInBounds(class BlockPos const& pos) const;

    // symbol: ?isInBounds@BlockVolume@@QEBA_NAEBVPos@@@Z
    MCAPI bool isInBounds(class Pos const& pos) const;

    // NOLINTEND
};
