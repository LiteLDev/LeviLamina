/**
 * @file  SubChunkRelighter.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   -1839203917
     * @symbol ??0SubChunkRelighter@@QEAA@AEAVBlockSource@@_KAEBVChunkPos@@_N3@Z
     */
    MCAPI SubChunkRelighter(class BlockSource &, unsigned __int64, class ChunkPos const &, bool, bool);
    /**
     * @hash   -897840521
     * @symbol ?_getAbsorption@SubChunkRelighter@@QEBAPEAUSubChunk@@USubChunkLightIndex@@AEAE@Z
     */
    MCAPI struct SubChunk * _getAbsorption(struct SubChunkLightIndex, unsigned char &) const;
    /**
     * @hash   1169325648
     * @symbol ?_propagateBlockLight@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
     */
    MCAPI void _propagateBlockLight(struct SubChunkLightIndex, unsigned char);
    /**
     * @hash   -679888023
     * @symbol ?_propagateBlockLight@SubChunkRelighter@@QEAAXXZ
     */
    MCAPI void _propagateBlockLight();
    /**
     * @hash   1825185768
     * @symbol ?_propagateSkyLight@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
     */
    MCAPI void _propagateSkyLight(struct SubChunkLightIndex, unsigned char);
    /**
     * @hash   -466429599
     * @symbol ?_propagateSkyLight@SubChunkRelighter@@QEAAXXZ
     */
    MCAPI void _propagateSkyLight();
    /**
     * @hash   -1656705918
     * @symbol ?_propagateSubtractiveBlockLight@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
     */
    MCAPI void _propagateSubtractiveBlockLight(struct SubChunkLightIndex, unsigned char);
    /**
     * @hash   296444331
     * @symbol ?_propagateSubtractiveBlockLight@SubChunkRelighter@@QEAAXXZ
     */
    MCAPI void _propagateSubtractiveBlockLight();
    /**
     * @hash   -162061686
     * @symbol ?_propagateSubtractiveSkyLight@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
     */
    MCAPI void _propagateSubtractiveSkyLight(struct SubChunkLightIndex, unsigned char);
    /**
     * @hash   -669784509
     * @symbol ?_propagateSubtractiveSkyLight@SubChunkRelighter@@QEAAXXZ
     */
    MCAPI void _propagateSubtractiveSkyLight();
    /**
     * @hash   -1918530597
     * @symbol ?_setLightHelper@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@UBrightness@@111II@Z
     */
    MCAPI void _setLightHelper(struct SubChunkLightIndex, struct Brightness, struct Brightness, struct Brightness, struct Brightness, unsigned int, unsigned int);
    /**
     * @hash   -694331760
     * @symbol ?_setPropagatedBlockLightValue@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
     */
    MCAPI void _setPropagatedBlockLightValue(struct SubChunkLightIndex, unsigned char);
    /**
     * @hash   -834533160
     * @symbol ?_setPropagatedSkyLightValue@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
     */
    MCAPI void _setPropagatedSkyLightValue(struct SubChunkLightIndex, unsigned char);
    /**
     * @hash   -457942161
     * @symbol ?_setSkyLight@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@UBrightness@@111@Z
     */
    MCAPI void _setSkyLight(struct SubChunkLightIndex, struct Brightness, struct Brightness, struct Brightness, struct Brightness);
    /**
     * @hash   1197299444
     * @symbol ?getBlock@SubChunkRelighter@@QEAAXAEBVPos@@AEAPEBVBlock@@1@Z
     */
    MCAPI void getBlock(class Pos const &, class Block const *&, class Block const *&);
    /**
     * @hash   -217676636
     * @symbol ?getCentralSubchunkOrigin@SubChunkRelighter@@QEAA?AVPos@@XZ
     */
    MCAPI class Pos getCentralSubchunkOrigin();
    /**
     * @hash   1275769571
     * @symbol ?getLightPair@SubChunkRelighter@@QEBA?AULightPair@SubChunkBrightnessStorage@@AEBVPos@@@Z
     */
    MCAPI struct SubChunkBrightnessStorage::LightPair getLightPair(class Pos const &) const;
    /**
     * @hash   1765081666
     * @symbol ?getLightPairWithPlaceholderCheck@SubChunkRelighter@@QEBA?AULightPair@SubChunkBrightnessStorage@@AEBVPos@@AEBU23@@Z
     */
    MCAPI struct SubChunkBrightnessStorage::LightPair getLightPairWithPlaceholderCheck(class Pos const &, struct SubChunkBrightnessStorage::LightPair const &) const;
    /**
     * @hash   124643146
     * @symbol ?getTouchedSubChunks@SubChunkRelighter@@QEAAXAEAV?$vector@VPos@@V?$allocator@VPos@@@std@@@std@@@Z
     */
    MCAPI void getTouchedSubChunks(std::vector<class Pos> &);
    /**
     * @hash   -1295643001
     * @symbol ?setBlockLight@SubChunkRelighter@@QEAAXAEBVPos@@UBrightness@@111@Z
     */
    MCAPI void setBlockLight(class Pos const &, struct Brightness, struct Brightness, struct Brightness, struct Brightness);
    /**
     * @hash   -1634459601
     * @symbol ?setSkyLight@SubChunkRelighter@@QEAAXAEBVPos@@UBrightness@@111@Z
     */
    MCAPI void setSkyLight(class Pos const &, struct Brightness, struct Brightness, struct Brightness, struct Brightness);
    /**
     * @hash   2069338924
     * @symbol ?update@SubChunkRelighter@@QEAAXAEBVBlockPos@@_K@Z
     */
    MCAPI void update(class BlockPos const &, unsigned __int64);
    /**
     * @hash   401653503
     * @symbol ??1SubChunkRelighter@@QEAA@XZ
     */
    MCAPI ~SubChunkRelighter();
    /**
     * @hash   528751769
     * @symbol ?computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits@SubChunkRelighter@@SA?AV?$bitset@$0DAAAA@@std@@XZ
     */
    MCAPI static class std::bitset<196608> computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits();
    /**
     * @hash   258454761
     * @symbol ?computeOuterEdgeOfComputationBits@SubChunkRelighter@@SA?AV?$bitset@$0DAAAA@@std@@XZ
     */
    MCAPI static class std::bitset<196608> computeOuterEdgeOfComputationBits();
    /**
     * @hash   -1170232307
     * @symbol ?initializeStatics@SubChunkRelighter@@SAXXZ
     */
    MCAPI static void initializeStatics();
    /**
     * @hash   367874897
     * @symbol ?shutdownStatics@SubChunkRelighter@@SAXXZ
     */
    MCAPI static void shutdownStatics();

//private:
    /**
     * @hash   1967825136
     * @symbol ?_dirtySubChunk@SubChunkRelighter@@AEAAPEAUSubChunk@@USubChunkLightIndex@@AEAI@Z
     */
    MCAPI struct SubChunk * _dirtySubChunk(struct SubChunkLightIndex, unsigned int &);
    /**
     * @hash   -421605255
     * @symbol ?_getBlock@SubChunkRelighter@@AEBAPEAUSubChunk@@USubChunkLightIndex@@AEAPEBVBlock@@1@Z
     */
    MCAPI struct SubChunk * _getBlock(struct SubChunkLightIndex, class Block const *&, class Block const *&) const;
    /**
     * @hash   1425136652
     * @symbol ?_getLight@SubChunkRelighter@@AEAAEUSubChunkLightIndex@@@Z
     */
    MCAPI unsigned char _getLight(struct SubChunkLightIndex);
    /**
     * @hash   -149458959
     * @symbol ?_getLightPair@SubChunkRelighter@@AEBA?AULightPair@SubChunkBrightnessStorage@@USubChunkLightIndex@@@Z
     */
    MCAPI struct SubChunkBrightnessStorage::LightPair _getLightPair(struct SubChunkLightIndex) const;

private:
    /**
     * @hash   1396546089
     * @symbol ?mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits@SubChunkRelighter@@0V?$bitset@$0DAAAA@@std@@A
     */
    MCAPI static class std::bitset<196608> mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits;
    /**
     * @hash   1926222865
     * @symbol ?mOuterEdgeOfComputationBits@SubChunkRelighter@@0V?$bitset@$0DAAAA@@std@@A
     */
    MCAPI static class std::bitset<196608> mOuterEdgeOfComputationBits;
    /**
     * @hash   -765662611
     * @symbol ?sDarkSpinLock@SubChunkRelighter@@0VSpinLock@@A
     */
    MCAPI static class SpinLock sDarkSpinLock;
    /**
     * @hash   -1047935538
     * @symbol ?sFullyDarkSubChunk@SubChunkRelighter@@0USubChunk@@A
     */
    MCAPI static struct SubChunk sFullyDarkSubChunk;
    /**
     * @hash   -1304326367
     * @symbol ?sFullyLitSubChunk@SubChunkRelighter@@0USubChunk@@A
     */
    MCAPI static struct SubChunk sFullyLitSubChunk;
    /**
     * @hash   -1816109752
     * @symbol ?sLitSpinLock@SubChunkRelighter@@0VSpinLock@@A
     */
    MCAPI static class SpinLock sLitSpinLock;

};