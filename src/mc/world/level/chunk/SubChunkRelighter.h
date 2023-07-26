#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/SubChunkBrightnessStorage.h"

class SubChunkRelighter {

public:
    // prevent constructor by default
    SubChunkRelighter& operator=(SubChunkRelighter const&) = delete;
    SubChunkRelighter(SubChunkRelighter const&)            = delete;
    SubChunkRelighter()                                    = delete;

public:
    /**
     * @symbol ??0SubChunkRelighter\@\@QEAA\@AEAVBlockSource\@\@_KAEBVChunkPos\@\@_N3\@Z
     */
    MCAPI SubChunkRelighter(class BlockSource&, unsigned __int64, class ChunkPos const&, bool, bool); // NOLINT
    /**
     * @symbol ?_getAbsorption\@SubChunkRelighter\@\@QEBAPEAUSubChunk\@\@USubChunkLightIndex\@\@AEAE\@Z
     */
    MCAPI struct SubChunk* _getAbsorption(struct SubChunkLightIndex, unsigned char&) const; // NOLINT
    /**
     * @symbol ?_propagateBlockLight\@SubChunkRelighter\@\@QEAAXXZ
     */
    MCAPI void _propagateBlockLight(); // NOLINT
    /**
     * @symbol ?_propagateBlockLight\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@E\@Z
     */
    MCAPI void _propagateBlockLight(struct SubChunkLightIndex, unsigned char); // NOLINT
    /**
     * @symbol ?_propagateSkyLight\@SubChunkRelighter\@\@QEAAXXZ
     */
    MCAPI void _propagateSkyLight(); // NOLINT
    /**
     * @symbol ?_propagateSkyLight\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@E\@Z
     */
    MCAPI void _propagateSkyLight(struct SubChunkLightIndex, unsigned char); // NOLINT
    /**
     * @symbol ?_propagateSubtractiveBlockLight\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@E\@Z
     */
    MCAPI void _propagateSubtractiveBlockLight(struct SubChunkLightIndex, unsigned char); // NOLINT
    /**
     * @symbol ?_propagateSubtractiveBlockLight\@SubChunkRelighter\@\@QEAAXXZ
     */
    MCAPI void _propagateSubtractiveBlockLight(); // NOLINT
    /**
     * @symbol ?_propagateSubtractiveSkyLight\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@E\@Z
     */
    MCAPI void _propagateSubtractiveSkyLight(struct SubChunkLightIndex, unsigned char); // NOLINT
    /**
     * @symbol ?_propagateSubtractiveSkyLight\@SubChunkRelighter\@\@QEAAXXZ
     */
    MCAPI void _propagateSubtractiveSkyLight(); // NOLINT
    /**
     * @symbol ?_setLightHelper\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@UBrightness\@\@111II\@Z
     */
    MCAPI void _setLightHelper(
        struct SubChunkLightIndex,
        struct Brightness,
        struct Brightness,
        struct Brightness,
        struct Brightness,
        unsigned int,
        unsigned int
    ); // NOLINT
    /**
     * @symbol ?_setPropagatedBlockLightValue\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@E\@Z
     */
    MCAPI void _setPropagatedBlockLightValue(struct SubChunkLightIndex, unsigned char); // NOLINT
    /**
     * @symbol ?_setPropagatedSkyLightValue\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@E\@Z
     */
    MCAPI void _setPropagatedSkyLightValue(struct SubChunkLightIndex, unsigned char); // NOLINT
    /**
     * @symbol ?_setSkyLight\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@UBrightness\@\@111\@Z
     */
    MCAPI void _setSkyLight(
        struct SubChunkLightIndex,
        struct Brightness,
        struct Brightness,
        struct Brightness,
        struct Brightness
    ); // NOLINT
    /**
     * @symbol ?getBlock\@SubChunkRelighter\@\@QEAAXAEBVPos\@\@AEAPEBVBlock\@\@1\@Z
     */
    MCAPI void getBlock(class Pos const&, class Block const*&, class Block const*&); // NOLINT
    /**
     * @symbol ?getCentralSubchunkOrigin\@SubChunkRelighter\@\@QEAA?AVPos\@\@XZ
     */
    MCAPI class Pos getCentralSubchunkOrigin(); // NOLINT
    /**
     * @symbol ?getLightPair\@SubChunkRelighter\@\@QEBA?AULightPair\@SubChunkBrightnessStorage\@\@AEBVPos\@\@\@Z
     */
    MCAPI struct SubChunkBrightnessStorage::LightPair getLightPair(class Pos const&) const; // NOLINT
    /**
     * @symbol
     * ?getLightPairWithPlaceholderCheck\@SubChunkRelighter\@\@QEBA?AULightPair\@SubChunkBrightnessStorage\@\@AEBVPos\@\@AEBU23\@\@Z
     */
    MCAPI struct SubChunkBrightnessStorage::LightPair
    getLightPairWithPlaceholderCheck(class Pos const&, struct SubChunkBrightnessStorage::LightPair const&)
        const; // NOLINT
    /**
     * @symbol
     * ?getTouchedSubChunks\@SubChunkRelighter\@\@QEAAXAEAV?$vector\@VPos\@\@V?$allocator\@VPos\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void getTouchedSubChunks(std::vector<class Pos>&); // NOLINT
    /**
     * @symbol ?setBlockLight\@SubChunkRelighter\@\@QEAAXAEBVPos\@\@UBrightness\@\@111\@Z
     */
    MCAPI void setBlockLight(
        class Pos const&,
        struct Brightness,
        struct Brightness,
        struct Brightness,
        struct Brightness
    ); // NOLINT
    /**
     * @symbol ?setSkyLight\@SubChunkRelighter\@\@QEAAXAEBVPos\@\@UBrightness\@\@111\@Z
     */
    MCAPI void
    setSkyLight(class Pos const&, struct Brightness, struct Brightness, struct Brightness, struct Brightness); // NOLINT
    /**
     * @symbol ?update\@SubChunkRelighter\@\@QEAAXAEBVBlockPos\@\@_K\@Z
     */
    MCAPI void update(class BlockPos const&, unsigned __int64); // NOLINT
    /**
     * @symbol ??1SubChunkRelighter\@\@QEAA\@XZ
     */
    MCAPI ~SubChunkRelighter(); // NOLINT
    /**
     * @symbol
     * ?computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits\@SubChunkRelighter\@\@SA?AV?$bitset\@$0DAAAA\@\@std\@\@XZ
     */
    MCAPI static class std::bitset<196608> computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits(); // NOLINT
    /**
     * @symbol ?computeOuterEdgeOfComputationBits\@SubChunkRelighter\@\@SA?AV?$bitset\@$0DAAAA\@\@std\@\@XZ
     */
    MCAPI static class std::bitset<196608> computeOuterEdgeOfComputationBits(); // NOLINT
    /**
     * @symbol ?initializeStatics\@SubChunkRelighter\@\@SAXXZ
     */
    MCAPI static void initializeStatics(); // NOLINT
    /**
     * @symbol ?shutdownStatics\@SubChunkRelighter\@\@SAXXZ
     */
    MCAPI static void shutdownStatics(); // NOLINT

    // private:
    /**
     * @symbol ?_dirtySubChunk\@SubChunkRelighter\@\@AEAAPEAUSubChunk\@\@USubChunkLightIndex\@\@AEAI\@Z
     */
    MCAPI struct SubChunk* _dirtySubChunk(struct SubChunkLightIndex, unsigned int&); // NOLINT
    /**
     * @symbol ?_getBlock\@SubChunkRelighter\@\@AEBAPEAUSubChunk\@\@USubChunkLightIndex\@\@AEAPEBVBlock\@\@1\@Z
     */
    MCAPI struct SubChunk*
    _getBlock(struct SubChunkLightIndex, class Block const*&, class Block const*&) const; // NOLINT
    /**
     * @symbol ?_getLight\@SubChunkRelighter\@\@AEAAEUSubChunkLightIndex\@\@\@Z
     */
    MCAPI unsigned char _getLight(struct SubChunkLightIndex); // NOLINT
    /**
     * @symbol
     * ?_getLightPair\@SubChunkRelighter\@\@AEBA?AULightPair\@SubChunkBrightnessStorage\@\@USubChunkLightIndex\@\@\@Z
     */
    MCAPI struct SubChunkBrightnessStorage::LightPair _getLightPair(struct SubChunkLightIndex) const; // NOLINT

private:
    /**
     * @symbol
     * ?mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits\@SubChunkRelighter\@\@0V?$bitset\@$0DAAAA\@\@std\@\@A
     */
    MCAPI static class std::bitset<196608> mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits; // NOLINT
    /**
     * @symbol ?mOuterEdgeOfComputationBits\@SubChunkRelighter\@\@0V?$bitset\@$0DAAAA\@\@std\@\@A
     */
    MCAPI static class std::bitset<196608> mOuterEdgeOfComputationBits; // NOLINT
    /**
     * @symbol ?sDarkSpinLock\@SubChunkRelighter\@\@0VSpinLock\@\@A
     */
    MCAPI static class SpinLock sDarkSpinLock; // NOLINT
    /**
     * @symbol ?sFullyDarkSubChunk\@SubChunkRelighter\@\@0USubChunk\@\@A
     */
    MCAPI static struct SubChunk sFullyDarkSubChunk; // NOLINT
    /**
     * @symbol ?sFullyLitSubChunk\@SubChunkRelighter\@\@0USubChunk\@\@A
     */
    MCAPI static struct SubChunk sFullyLitSubChunk; // NOLINT
    /**
     * @symbol ?sLitSpinLock\@SubChunkRelighter\@\@0VSpinLock\@\@A
     */
    MCAPI static class SpinLock sLitSpinLock; // NOLINT
};
