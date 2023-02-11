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
     * @hash   -959727469
     * @symbol  ??0SubChunkRelighter\@\@QEAA\@AEAVBlockSource\@\@_KAEBVChunkPos\@\@_N3\@Z
     */
    MCAPI SubChunkRelighter(class BlockSource &, unsigned __int64, class ChunkPos const &, bool, bool);
    /**
     * @hash   -18348697
     * @symbol  ?_getAbsorption\@SubChunkRelighter\@\@QEBAPEAUSubChunk\@\@USubChunkLightIndex\@\@AEAE\@Z
     */
    MCAPI struct SubChunk * _getAbsorption(struct SubChunkLightIndex, unsigned char &) const;
    /**
     * @hash   2048709840
     * @symbol  ?_propagateBlockLight\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@E\@Z
     */
    MCAPI void _propagateBlockLight(struct SubChunkLightIndex, unsigned char);
    /**
     * @hash   199496169
     * @symbol  ?_propagateBlockLight\@SubChunkRelighter\@\@QEAAXXZ
     */
    MCAPI void _propagateBlockLight();
    /**
     * @hash   -1590397336
     * @symbol  ?_propagateSkyLight\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@E\@Z
     */
    MCAPI void _propagateSkyLight(struct SubChunkLightIndex, unsigned char);
    /**
     * @hash   412954593
     * @symbol  ?_propagateSkyLight\@SubChunkRelighter\@\@QEAAXXZ
     */
    MCAPI void _propagateSkyLight();
    /**
     * @hash   -777321726
     * @symbol  ?_propagateSubtractiveBlockLight\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@E\@Z
     */
    MCAPI void _propagateSubtractiveBlockLight(struct SubChunkLightIndex, unsigned char);
    /**
     * @hash   1175874651
     * @symbol  ?_propagateSubtractiveBlockLight\@SubChunkRelighter\@\@QEAAXXZ
     */
    MCAPI void _propagateSubtractiveBlockLight();
    /**
     * @hash   717399386
     * @symbol  ?_propagateSubtractiveSkyLight\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@E\@Z
     */
    MCAPI void _propagateSubtractiveSkyLight(struct SubChunkLightIndex, unsigned char);
    /**
     * @hash   209676563
     * @symbol  ?_propagateSubtractiveSkyLight\@SubChunkRelighter\@\@QEAAXXZ
     */
    MCAPI void _propagateSubtractiveSkyLight();
    /**
     * @hash   -1039054149
     * @symbol  ?_setLightHelper\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@UBrightness\@\@111II\@Z
     */
    MCAPI void _setLightHelper(struct SubChunkLightIndex, struct Brightness, struct Brightness, struct Brightness, struct Brightness, unsigned int, unsigned int);
    /**
     * @hash   185144688
     * @symbol  ?_setPropagatedBlockLightValue\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@E\@Z
     */
    MCAPI void _setPropagatedBlockLightValue(struct SubChunkLightIndex, unsigned char);
    /**
     * @hash   44943288
     * @symbol  ?_setPropagatedSkyLightValue\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@E\@Z
     */
    MCAPI void _setPropagatedSkyLightValue(struct SubChunkLightIndex, unsigned char);
    /**
     * @hash   421534287
     * @symbol  ?_setSkyLight\@SubChunkRelighter\@\@QEAAXUSubChunkLightIndex\@\@UBrightness\@\@111\@Z
     */
    MCAPI void _setSkyLight(struct SubChunkLightIndex, struct Brightness, struct Brightness, struct Brightness, struct Brightness);
    /**
     * @hash   2076775892
     * @symbol  ?getBlock\@SubChunkRelighter\@\@QEAAXAEBVPos\@\@AEAPEBVBlock\@\@1\@Z
     */
    MCAPI void getBlock(class Pos const &, class Block const *&, class Block const *&);
    /**
     * @hash   661799812
     * @symbol  ?getCentralSubchunkOrigin\@SubChunkRelighter\@\@QEAA?AVPos\@\@XZ
     */
    MCAPI class Pos getCentralSubchunkOrigin();
    /**
     * @hash   -2139721277
     * @symbol  ?getLightPair\@SubChunkRelighter\@\@QEBA?AULightPair\@SubChunkBrightnessStorage\@\@AEBVPos\@\@\@Z
     */
    MCAPI struct SubChunkBrightnessStorage::LightPair getLightPair(class Pos const &) const;
    /**
     * @hash   -1650409182
     * @symbol  ?getLightPairWithPlaceholderCheck\@SubChunkRelighter\@\@QEBA?AULightPair\@SubChunkBrightnessStorage\@\@AEBVPos\@\@AEBU23\@\@Z
     */
    MCAPI struct SubChunkBrightnessStorage::LightPair getLightPairWithPlaceholderCheck(class Pos const &, struct SubChunkBrightnessStorage::LightPair const &) const;
    /**
     * @hash   1004119594
     * @symbol  ?getTouchedSubChunks\@SubChunkRelighter\@\@QEAAXAEAV?$vector\@VPos\@\@V?$allocator\@VPos\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void getTouchedSubChunks(std::vector<class Pos> &);
    /**
     * @hash   -416151177
     * @symbol  ?setBlockLight\@SubChunkRelighter\@\@QEAAXAEBVPos\@\@UBrightness\@\@111\@Z
     */
    MCAPI void setBlockLight(class Pos const &, struct Brightness, struct Brightness, struct Brightness, struct Brightness);
    /**
     * @hash   -754967777
     * @symbol  ?setSkyLight\@SubChunkRelighter\@\@QEAAXAEBVPos\@\@UBrightness\@\@111\@Z
     */
    MCAPI void setSkyLight(class Pos const &, struct Brightness, struct Brightness, struct Brightness, struct Brightness);
    /**
     * @hash   -1346136548
     * @symbol  ?update\@SubChunkRelighter\@\@QEAAXAEBVBlockPos\@\@_K\@Z
     */
    MCAPI void update(class BlockPos const &, unsigned __int64);
    /**
     * @hash   1281145327
     * @symbol  ??1SubChunkRelighter\@\@QEAA\@XZ
     */
    MCAPI ~SubChunkRelighter();
    /**
     * @hash   1408228217
     * @symbol  ?computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits\@SubChunkRelighter\@\@SA?AV?$bitset\@$0DAAAA\@\@std\@\@XZ
     */
    MCAPI static class std::bitset<196608> computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits();
    /**
     * @hash   1137931209
     * @symbol  ?computeOuterEdgeOfComputationBits\@SubChunkRelighter\@\@SA?AV?$bitset\@$0DAAAA\@\@std\@\@XZ
     */
    MCAPI static class std::bitset<196608> computeOuterEdgeOfComputationBits();
    /**
     * @hash   -290740483
     * @symbol  ?initializeStatics\@SubChunkRelighter\@\@SAXXZ
     */
    MCAPI static void initializeStatics();
    /**
     * @hash   1247366721
     * @symbol  ?shutdownStatics\@SubChunkRelighter\@\@SAXXZ
     */
    MCAPI static void shutdownStatics();

//private:
    /**
     * @hash   -1447650336
     * @symbol  ?_dirtySubChunk\@SubChunkRelighter\@\@AEAAPEAUSubChunk\@\@USubChunkLightIndex\@\@AEAI\@Z
     */
    MCAPI struct SubChunk * _dirtySubChunk(struct SubChunkLightIndex, unsigned int &);
    /**
     * @hash   457763561
     * @symbol  ?_getBlock\@SubChunkRelighter\@\@AEBAPEAUSubChunk\@\@USubChunkLightIndex\@\@AEAPEBVBlock\@\@1\@Z
     */
    MCAPI struct SubChunk * _getBlock(struct SubChunkLightIndex, class Block const *&, class Block const *&) const;
    /**
     * @hash   -1990446452
     * @symbol  ?_getLight\@SubChunkRelighter\@\@AEAAEUSubChunkLightIndex\@\@\@Z
     */
    MCAPI unsigned char _getLight(struct SubChunkLightIndex);
    /**
     * @hash   729925233
     * @symbol  ?_getLightPair\@SubChunkRelighter\@\@AEBA?AULightPair\@SubChunkBrightnessStorage\@\@USubChunkLightIndex\@\@\@Z
     */
    MCAPI struct SubChunkBrightnessStorage::LightPair _getLightPair(struct SubChunkLightIndex) const;

private:
    /**
     * @hash   -2000355175
     * @symbol  ?mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits\@SubChunkRelighter\@\@0V?$bitset\@$0DAAAA\@\@std\@\@A
     */
    MCAPI static class std::bitset<196608> mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits;
    /**
     * @hash   -1470678399
     * @symbol  ?mOuterEdgeOfComputationBits\@SubChunkRelighter\@\@0V?$bitset\@$0DAAAA\@\@std\@\@A
     */
    MCAPI static class std::bitset<196608> mOuterEdgeOfComputationBits;
    /**
     * @hash   132403421
     * @symbol  ?sDarkSpinLock\@SubChunkRelighter\@\@0VSpinLock\@\@A
     */
    MCAPI static class SpinLock sDarkSpinLock;
    /**
     * @hash   -149869506
     * @symbol  ?sFullyDarkSubChunk\@SubChunkRelighter\@\@0USubChunk\@\@A
     */
    MCAPI static struct SubChunk sFullyDarkSubChunk;
    /**
     * @hash   -406260335
     * @symbol  ?sFullyLitSubChunk\@SubChunkRelighter\@\@0USubChunk\@\@A
     */
    MCAPI static struct SubChunk sFullyLitSubChunk;
    /**
     * @hash   -918043720
     * @symbol  ?sLitSpinLock\@SubChunkRelighter\@\@0VSpinLock\@\@A
     */
    MCAPI static class SpinLock sLitSpinLock;

};