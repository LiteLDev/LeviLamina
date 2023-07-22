/**
 * @file  SubChunkRelighter.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "SubChunkBrightnessStorage.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SubChunkRelighter.
 *
 */
class SubChunkRelighter {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKRELIGHTER
public:
    class SubChunkRelighter& operator=(class SubChunkRelighter const &) = delete;
    SubChunkRelighter(class SubChunkRelighter const &) = delete;
    SubChunkRelighter() = delete;
#endif

public:
    /**
     * @symbol  ??0SubChunkRelighter\@\@QEAA\@AEAVBlockSource\@\@_KAEBVChunkPos\@\@_N3\@Z
     */
    MCAPI SubChunkRelighter(class BlockSource &, unsigned __int64, class ChunkPos const &, bool, bool);
    /**
     * @symbol  ?_getAbsorption\@SubChunkRelighter\@\@QEBAPEAUSubChunk\@\@USubChunkLightIndex\@\@AEAE\@Z
     */
    MCAPI struct SubChunk * _getAbsorption(struct SubChunkLightIndex, unsigned char &) const;
    /**
     * @symbol  ?_propagateBlockLight\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@E\@Z
     */
    MCAPI void _propagateBlockLight(struct SubChunkLightIndex, unsigned char);
    /**
     * @symbol  ?_propagateBlockLight\@SubChunkRelighter\@\@QEAAXXZ
     */
    MCAPI void _propagateBlockLight();
    /**
     * @symbol  ?_propagateSkyLight\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@E\@Z
     */
    MCAPI void _propagateSkyLight(struct SubChunkLightIndex, unsigned char);
    /**
     * @symbol  ?_propagateSkyLight\@SubChunkRelighter\@\@QEAAXXZ
     */
    MCAPI void _propagateSkyLight();
    /**
     * @symbol  ?_propagateSubtractiveBlockLight\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@E\@Z
     */
    MCAPI void _propagateSubtractiveBlockLight(struct SubChunkLightIndex, unsigned char);
    /**
     * @symbol  ?_propagateSubtractiveBlockLight\@SubChunkRelighter\@\@QEAAXXZ
     */
    MCAPI void _propagateSubtractiveBlockLight();
    /**
     * @symbol  ?_propagateSubtractiveSkyLight\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@E\@Z
     */
    MCAPI void _propagateSubtractiveSkyLight(struct SubChunkLightIndex, unsigned char);
    /**
     * @symbol  ?_propagateSubtractiveSkyLight\@SubChunkRelighter\@\@QEAAXXZ
     */
    MCAPI void _propagateSubtractiveSkyLight();
    /**
     * @symbol  ?_setLightHelper\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@UBrightness\@\@111II\@Z
     */
    MCAPI void _setLightHelper(struct SubChunkLightIndex, struct Brightness, struct Brightness, struct Brightness, struct Brightness, unsigned int, unsigned int);
    /**
     * @symbol  ?_setPropagatedBlockLightValue\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@E\@Z
     */
    MCAPI void _setPropagatedBlockLightValue(struct SubChunkLightIndex, unsigned char);
    /**
     * @symbol  ?_setPropagatedSkyLightValue\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@E\@Z
     */
    MCAPI void _setPropagatedSkyLightValue(struct SubChunkLightIndex, unsigned char);
    /**
     * @symbol  ?_setSkyLight\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@UBrightness\@\@111\@Z
     */
    MCAPI void _setSkyLight(struct SubChunkLightIndex, struct Brightness, struct Brightness, struct Brightness, struct Brightness);
    /**
     * @symbol  ?getBlock\@SubChunkRelighter\@\@QEAAXAEBVPos\@\@AEAPEBVBlock\@\@1\@Z
     */
    MCAPI void getBlock(class Pos const &, class Block const *&, class Block const *&);
    /**
     * @symbol  ?getCentralSubchunkOrigin\@SubChunkRelighter\@\@QEAA?AVPos\@\@XZ
     */
    MCAPI class Pos getCentralSubchunkOrigin();
    /**
     * @symbol  ?getLightPair\@SubChunkRelighter\@\@QEBA?AULightPair\@SubChunkBrightnessStorage\@\@AEBVPos\@\@\@Z
     */
    MCAPI struct SubChunkBrightnessStorage::LightPair getLightPair(class Pos const &) const;
    /**
     * @symbol  ?getLightPairWithPlaceholderCheck\@SubChunkRelighter\@\@QEBA?AULightPair\@SubChunkBrightnessStorage\@\@AEBVPos\@\@AEBU23\@\@Z
     */
    MCAPI struct SubChunkBrightnessStorage::LightPair getLightPairWithPlaceholderCheck(class Pos const &, struct SubChunkBrightnessStorage::LightPair const &) const;
    /**
     * @symbol  ?getTouchedSubChunks\@SubChunkRelighter\@\@QEAAXAEAV?$vector\@VPos\@\@V?$allocator\@VPos\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void getTouchedSubChunks(std::vector<class Pos> &);
    /**
     * @symbol  ?setBlockLight\@SubChunkRelighter\@\@QEAAXAEBVPos\@\@UBrightness\@\@111\@Z
     */
    MCAPI void setBlockLight(class Pos const &, struct Brightness, struct Brightness, struct Brightness, struct Brightness);
    /**
     * @symbol  ?setSkyLight\@SubChunkRelighter\@\@QEAAXAEBVPos\@\@UBrightness\@\@111\@Z
     */
    MCAPI void setSkyLight(class Pos const &, struct Brightness, struct Brightness, struct Brightness, struct Brightness);
    /**
     * @symbol  ?update\@SubChunkRelighter\@\@QEAAXAEBVBlockPos\@\@_K\@Z
     */
    MCAPI void update(class BlockPos const &, unsigned __int64);
    /**
     * @symbol  ??1SubChunkRelighter\@\@QEAA\@XZ
     */
    MCAPI ~SubChunkRelighter();
    /**
     * @symbol  ?computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits\@SubChunkRelighter\@\@SA?AV?$bitset\@$0DAAAA\@\@std\@\@XZ
     */
    MCAPI static class std::bitset<196608> computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits();
    /**
     * @symbol  ?computeOuterEdgeOfComputationBits\@SubChunkRelighter\@\@SA?AV?$bitset\@$0DAAAA\@\@std\@\@XZ
     */
    MCAPI static class std::bitset<196608> computeOuterEdgeOfComputationBits();
    /**
     * @symbol  ?initializeStatics\@SubChunkRelighter\@\@SAXXZ
     */
    MCAPI static void initializeStatics();
    /**
     * @symbol  ?shutdownStatics\@SubChunkRelighter\@\@SAXXZ
     */
    MCAPI static void shutdownStatics();

//private:
    /**
     * @symbol  ?_dirtySubChunk\@SubChunkRelighter\@\@AEAAPEAUSubChunk\@\@USubChunkLightIndex\@\@AEAI\@Z
     */
    MCAPI struct SubChunk * _dirtySubChunk(struct SubChunkLightIndex, unsigned int &);
    /**
     * @symbol  ?_getBlock\@SubChunkRelighter\@\@AEBAPEAUSubChunk\@\@USubChunkLightIndex\@\@AEAPEBVBlock\@\@1\@Z
     */
    MCAPI struct SubChunk * _getBlock(struct SubChunkLightIndex, class Block const *&, class Block const *&) const;
    /**
     * @symbol  ?_getLight\@SubChunkRelighter\@\@AEAAEUSubChunkLightIndex\@\@\@Z
     */
    MCAPI unsigned char _getLight(struct SubChunkLightIndex);
    /**
     * @symbol  ?_getLightPair\@SubChunkRelighter\@\@AEBA?AULightPair\@SubChunkBrightnessStorage\@\@USubChunkLightIndex\@\@\@Z
     */
    MCAPI struct SubChunkBrightnessStorage::LightPair _getLightPair(struct SubChunkLightIndex) const;

private:
    /**
     * @symbol  ?mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits\@SubChunkRelighter\@\@0V?$bitset\@$0DAAAA\@\@std\@\@A
     */
    MCAPI static class std::bitset<196608> mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits;
    /**
     * @symbol  ?mOuterEdgeOfComputationBits\@SubChunkRelighter\@\@0V?$bitset\@$0DAAAA\@\@std\@\@A
     */
    MCAPI static class std::bitset<196608> mOuterEdgeOfComputationBits;
    /**
     * @symbol  ?sDarkSpinLock\@SubChunkRelighter\@\@0VSpinLock\@\@A
     */
    MCAPI static class SpinLock sDarkSpinLock;
    /**
     * @symbol  ?sFullyDarkSubChunk\@SubChunkRelighter\@\@0USubChunk\@\@A
     */
    MCAPI static struct SubChunk sFullyDarkSubChunk;
    /**
     * @symbol  ?sFullyLitSubChunk\@SubChunkRelighter\@\@0USubChunk\@\@A
     */
    MCAPI static struct SubChunk sFullyLitSubChunk;
    /**
     * @symbol  ?sLitSpinLock\@SubChunkRelighter\@\@0VSpinLock\@\@A
     */
    MCAPI static class SpinLock sLitSpinLock;

};