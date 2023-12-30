#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/SubChunkBrightnessStorage.h"

class SubChunkRelighter {
public:
    // prevent constructor by default
    SubChunkRelighter& operator=(SubChunkRelighter const&);
    SubChunkRelighter(SubChunkRelighter const&);
    SubChunkRelighter();

public:
    // NOLINTBEGIN
    // symbol: ??0SubChunkRelighter@@QEAA@AEAVBlockSource@@_KAEBVChunkPos@@_N3@Z
    MCAPI SubChunkRelighter(
        class BlockSource&    source,
        uint64                centerSubChunkIndex,
        class ChunkPos const& centerChunkPos,
        bool                  originalLighting,
        bool                  useFullyDarkSubchunk
    );

    // symbol: ?_getAbsorption@SubChunkRelighter@@QEBAPEAUSubChunk@@USubChunkLightIndex@@AEAE@Z
    MCAPI struct SubChunk* _getAbsorption(struct SubChunkLightIndex coordIndex, uchar& absorption) const;

    // symbol: ?_propagateBlockLight@SubChunkRelighter@@QEAAXXZ
    MCAPI void _propagateBlockLight();

    // symbol: ?_propagateBlockLight@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
    MCAPI void _propagateBlockLight(struct SubChunkLightIndex coordIndex, uchar brightness);

    // symbol: ?_propagateSkyLight@SubChunkRelighter@@QEAAXXZ
    MCAPI void _propagateSkyLight();

    // symbol: ?_propagateSkyLight@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
    MCAPI void _propagateSkyLight(struct SubChunkLightIndex coordIndex, uchar brightness);

    // symbol: ?_propagateSubtractiveBlockLight@SubChunkRelighter@@QEAAXXZ
    MCAPI void _propagateSubtractiveBlockLight();

    // symbol: ?_propagateSubtractiveBlockLight@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
    MCAPI void _propagateSubtractiveBlockLight(struct SubChunkLightIndex coordIndex, uchar effectiveBrightness);

    // symbol: ?_propagateSubtractiveSkyLight@SubChunkRelighter@@QEAAXXZ
    MCAPI void _propagateSubtractiveSkyLight();

    // symbol: ?_propagateSubtractiveSkyLight@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
    MCAPI void _propagateSubtractiveSkyLight(struct SubChunkLightIndex coordIndex, uchar effectiveBrightness);

    // symbol: ?_setLightHelper@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@UBrightness@@111II@Z
    MCAPI void _setLightHelper(
        struct SubChunkLightIndex,
        struct Brightness,
        struct Brightness,
        struct Brightness,
        struct Brightness,
        uint,
        uint
    );

    // symbol: ?_setPropagatedBlockLightValue@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
    MCAPI void _setPropagatedBlockLightValue(struct SubChunkLightIndex coordIndex, uchar brightness);

    // symbol: ?_setPropagatedSkyLightValue@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
    MCAPI void _setPropagatedSkyLightValue(struct SubChunkLightIndex coordIndex, uchar brightness);

    // symbol: ?_setSkyLight@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@UBrightness@@111@Z
    MCAPI void _setSkyLight(
        struct SubChunkLightIndex coordIndex,
        struct Brightness         oldBrightness,
        struct Brightness         newBrightness,
        struct Brightness         oldAbsorption,
        struct Brightness         newAbsorption
    );

    // symbol: ?getBlock@SubChunkRelighter@@QEAAXAEBVPos@@AEAPEBVBlock@@1@Z
    MCAPI void getBlock(class Pos const& pos, class Block const*& block, class Block const*& extraBlock);

    // symbol: ?getCentralSubchunkOrigin@SubChunkRelighter@@QEAA?AVPos@@XZ
    MCAPI class Pos getCentralSubchunkOrigin();

    // symbol: ?getLightPair@SubChunkRelighter@@QEBA?AULightPair@SubChunkBrightnessStorage@@AEBVPos@@@Z
    MCAPI struct SubChunkBrightnessStorage::LightPair getLightPair(class Pos const& coord) const;

    // symbol:
    // ?getLightPairWithPlaceholderCheck@SubChunkRelighter@@QEBA?AULightPair@SubChunkBrightnessStorage@@AEBVPos@@AEBU23@@Z
    MCAPI struct SubChunkBrightnessStorage::LightPair
    getLightPairWithPlaceholderCheck(class Pos const&, struct SubChunkBrightnessStorage::LightPair const&) const;

    // symbol: ?getTouchedSubChunks@SubChunkRelighter@@QEAAXAEAV?$vector@VPos@@V?$allocator@VPos@@@std@@@std@@@Z
    MCAPI void getTouchedSubChunks(std::vector<class Pos>& subChunkPosList);

    // symbol: ?setBlockLight@SubChunkRelighter@@QEAAXAEBVPos@@UBrightness@@111@Z
    MCAPI void setBlockLight(
        class Pos const&  pos,
        struct Brightness oldBrightness,
        struct Brightness newBrightness,
        struct Brightness oldAbsorption,
        struct Brightness newAbsorption
    );

    // symbol: ?setSkyLight@SubChunkRelighter@@QEAAXAEBVPos@@UBrightness@@111@Z
    MCAPI void setSkyLight(
        class Pos const&  pos,
        struct Brightness oldBrightness,
        struct Brightness newBrightness,
        struct Brightness oldAbsorption,
        struct Brightness newAbsorption
    );

    // symbol: ?update@SubChunkRelighter@@QEAAXAEBVBlockPos@@_K@Z
    MCAPI void update(class BlockPos const&, uint64);

    // symbol: ??1SubChunkRelighter@@QEAA@XZ
    MCAPI ~SubChunkRelighter();

    // symbol:
    // ?computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits@SubChunkRelighter@@SA?AV?$bitset@$0DAAAA@@std@@XZ
    MCAPI static std::bitset<196608> computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits();

    // symbol: ?computeOuterEdgeOfComputationBits@SubChunkRelighter@@SA?AV?$bitset@$0DAAAA@@std@@XZ
    MCAPI static std::bitset<196608> computeOuterEdgeOfComputationBits();

    // symbol: ?initializeStatics@SubChunkRelighter@@SAXXZ
    MCAPI static void initializeStatics();

    // symbol: ?shutdownStatics@SubChunkRelighter@@SAXXZ
    MCAPI static void shutdownStatics();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_dirtySubChunk@SubChunkRelighter@@AEAAPEAUSubChunk@@USubChunkLightIndex@@AEAI@Z
    MCAPI struct SubChunk* _dirtySubChunk(struct SubChunkLightIndex coordIndex, uint& subChunkIndex);

    // symbol: ?_getBlock@SubChunkRelighter@@AEBAPEAUSubChunk@@USubChunkLightIndex@@AEAPEBVBlock@@1@Z
    MCAPI struct SubChunk*
    _getBlock(struct SubChunkLightIndex coordIndex, class Block const*& block, class Block const*& extraBlock) const;

    // symbol: ?_getLight@SubChunkRelighter@@AEAAEUSubChunkLightIndex@@@Z
    MCAPI uchar _getLight(struct SubChunkLightIndex index);

    // symbol: ?_getLightPair@SubChunkRelighter@@AEBA?AULightPair@SubChunkBrightnessStorage@@USubChunkLightIndex@@@Z
    MCAPI struct SubChunkBrightnessStorage::LightPair _getLightPair(struct SubChunkLightIndex coordIndex) const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits@SubChunkRelighter@@0V?$bitset@$0DAAAA@@std@@A
    MCAPI static std::bitset<196608> mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits;

    // symbol: ?mOuterEdgeOfComputationBits@SubChunkRelighter@@0V?$bitset@$0DAAAA@@std@@A
    MCAPI static std::bitset<196608> mOuterEdgeOfComputationBits;

    // symbol: ?sDarkSpinLock@SubChunkRelighter@@0VSpinLock@@A
    MCAPI static class SpinLock sDarkSpinLock;

    // symbol: ?sFullyDarkSubChunk@SubChunkRelighter@@0USubChunk@@A
    MCAPI static struct SubChunk sFullyDarkSubChunk;

    // symbol: ?sFullyLitSubChunk@SubChunkRelighter@@0USubChunk@@A
    MCAPI static struct SubChunk sFullyLitSubChunk;

    // symbol: ?sLitSpinLock@SubChunkRelighter@@0VSpinLock@@A
    MCAPI static class SpinLock sLitSpinLock;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits() {
        return mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits;
    }

    static auto& $mOuterEdgeOfComputationBits() { return mOuterEdgeOfComputationBits; }

    static auto& $sDarkSpinLock() { return sDarkSpinLock; }

    static auto& $sFullyDarkSubChunk() { return sFullyDarkSubChunk; }

    static auto& $sFullyLitSubChunk() { return sFullyLitSubChunk; }

    static auto& $sLitSpinLock() { return sLitSpinLock; }

    // NOLINTEND
};
