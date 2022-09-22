/**
 * @file  SubChunk.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SubChunkBrightnessStorage.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure SubChunk.
 *
 */
struct SubChunk {

#define AFTER_EXTRA
// Add Member There
    enum class SubChunkState;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNK
public:
    struct SubChunk& operator=(struct SubChunk const &) = delete;
    SubChunk(struct SubChunk const &) = delete;
#endif

public:
    /**
     * @hash   -1817310647
     * @symbol ??0SubChunk@@QEAA@XZ
     */
    MCAPI SubChunk();
    /**
     * @hash   929349049
     * @symbol ??0SubChunk@@QEAA@PEBVBlock@@_N1AEAVSpinLock@@C@Z
     */
    MCAPI SubChunk(class Block const *, bool, bool, class SpinLock &, signed char);
    /**
     * @hash   1758725063
     * @symbol ??0SubChunk@@QEAA@$$QEAU0@@Z
     */
    MCAPI SubChunk(struct SubChunk &&);
    /**
     * @hash   -740947772
     * @symbol ?deserialize@SubChunk@@QEAAXAEAVIDataInput@@AEBVBlockPalette@@AEBVSubChunkPos@@V?$optional@PEAUDeserializationChanges@@@std@@@Z
     */
    MCAPI void deserialize(class IDataInput &, class BlockPalette const &, class SubChunkPos const &, class std::optional<struct DeserializationChanges *>);
    /**
     * @hash   400308597
     * @symbol ?fetchBlocks@SubChunk@@QEBAXAEBVBlockPos@@0FAEAVBlockVolume@@@Z
     */
    MCAPI void fetchBlocks(class BlockPos const &, class BlockPos const &, short, class BlockVolume &) const;
    /**
     * @hash   82250039
     * @symbol ?fetchBlocksInBox@SubChunk@@QEBAXAEBVBlockPos@@AEBVBoundingBox@@AEBV?$function@$$A6A_NAEBVBlock@@@Z@std@@AEAV?$vector@V?$BlockDataFetchResult@VBlock@@@@V?$allocator@V?$BlockDataFetchResult@VBlock@@@@@std@@@5@@Z
     */
    MCAPI void fetchBlocksInBox(class BlockPos const &, class BoundingBox const &, class std::function<bool (class Block const &)> const &, std::vector<class BlockDataFetchResult<class Block>> &) const;
    /**
     * @hash   1516743905
     * @symbol ?fetchBlocksInCylinder@SubChunk@@QEBAXAEBVBlockPos@@0IIAEBV?$function@$$A6A_NAEBVBlock@@@Z@std@@AEAV?$vector@V?$BlockDataFetchResult@VBlock@@@@V?$allocator@V?$BlockDataFetchResult@VBlock@@@@@std@@@4@@Z
     */
    MCAPI void fetchBlocksInCylinder(class BlockPos const &, class BlockPos const &, unsigned int, unsigned int, class std::function<bool (class Block const &)> const &, std::vector<class BlockDataFetchResult<class Block>> &) const;
    /**
     * @hash   -128946746
     * @symbol ?getLight@SubChunk@@QEBA?AULightPair@SubChunkBrightnessStorage@@G@Z
     */
    MCAPI struct SubChunkBrightnessStorage::LightPair getLight(unsigned short) const;
    /**
     * @hash   -809825932
     * @symbol ?getSubChunkState@SubChunk@@QEBA?AW4SubChunkState@1@XZ
     */
    MCAPI enum SubChunk::SubChunkState getSubChunkState() const;
    /**
     * @hash   -1535376019
     * @symbol ?initialize@SubChunk@@QEAAXPEBVBlock@@_N1AEAVSpinLock@@C@Z
     */
    MCAPI void initialize(class Block const *, bool, bool, class SpinLock &, signed char);
    /**
     * @hash   -4109761
     * @symbol ?isPaletteUniform@SubChunk@@QEBA_NAEBVBlock@@@Z
     */
    MCAPI bool isPaletteUniform(class Block const &) const;
    /**
     * @hash   964087119
     * @symbol ?isUniform@SubChunk@@QEBA_NAEBVBlock@@@Z
     */
    MCAPI bool isUniform(class Block const &) const;
    /**
     * @hash   935092258
     * @symbol ?likelyHasNonUniformBlockLight@SubChunk@@QEBA_NXZ
     */
    MCAPI bool likelyHasNonUniformBlockLight() const;
    /**
     * @hash   1172511000
     * @symbol ?needsInitLighting@SubChunk@@QEBA_NXZ
     */
    MCAPI bool needsInitLighting() const;
    /**
     * @hash   696878062
     * @symbol ??4SubChunk@@QEAAAEAU0@$$QEAU0@@Z
     */
    MCAPI struct SubChunk & operator=(struct SubChunk &&);
    /**
     * @hash   2102085554
     * @symbol ?prune@SubChunk@@QEAAXW4PruneType@SubChunkStorageUnit@@@Z
     */
    MCAPI void prune(enum SubChunkStorageUnit::PruneType);
    /**
     * @hash   -894922540
     * @symbol ?recalculateHash@SubChunk@@QEAAX_N@Z
     */
    MCAPI void recalculateHash(bool);
    /**
     * @hash   -2145457953
     * @symbol ?recalculateHashAndSerialize@SubChunk@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCAPI std::string recalculateHashAndSerialize(bool);
    /**
     * @hash   -142613651
     * @symbol ?reset@SubChunk@@QEAAXPEBVBlock@@_N1@Z
     */
    MCAPI void reset(class Block const *, bool, bool);
    /**
     * @hash   -1916013176
     * @symbol ?safeToModify@SubChunk@@QEBA_NXZ
     */
    MCAPI bool safeToModify() const;
    /**
     * @hash   220072605
     * @symbol ?serialize@SubChunk@@QEBAXAEAVIDataOutput@@_N@Z
     */
    MCAPI void serialize(class IDataOutput &, bool) const;
    /**
     * @hash   916749315
     * @symbol ?setAllIsMaxSkyLight@SubChunk@@QEAAXXZ
     */
    MCAPI void setAllIsMaxSkyLight();
    /**
     * @hash   1378926181
     * @symbol ?setAllIsNoSkyLight@SubChunk@@QEAAXXZ
     */
    MCAPI void setAllIsNoSkyLight();
    /**
     * @hash   -924030307
     * @symbol ?setBlockLight@SubChunk@@QEAAXGE@Z
     */
    MCAPI void setBlockLight(unsigned short, unsigned char);
    /**
     * @hash   1845732150
     * @symbol ?setFromBlockVolume@SubChunk@@QEAAXAEBVBlockVolume@@F@Z
     */
    MCAPI void setFromBlockVolume(class BlockVolume const &, short);
    /**
     * @hash   1227408644
     * @symbol ?setNeedsClientLighting@SubChunk@@QEAAX_N@Z
     */
    MCAPI void setNeedsClientLighting(bool);
    /**
     * @hash   -306036918
     * @symbol ?setNeedsInitLighting@SubChunk@@QEAAX_N@Z
     */
    MCAPI void setNeedsInitLighting(bool);
    /**
     * @hash   1663766157
     * @symbol ?setSkyLight@SubChunk@@QEAAXGE@Z
     */
    MCAPI void setSkyLight(unsigned short, unsigned char);
    /**
     * @hash   -1663311206
     * @symbol ?setSubChunkState@SubChunk@@QEAAXW4SubChunkState@1@@Z
     */
    MCAPI void setSubChunkState(enum SubChunk::SubChunkState);
    /**
     * @hash   1610005573
     * @symbol ?shutdown@SubChunk@@QEAAXXZ
     */
    MCAPI void shutdown();
    /**
     * @hash   767108359
     * @symbol ??1SubChunk@@QEAA@XZ
     */
    MCAPI ~SubChunk();
    /**
     * @hash   344233043
     * @symbol ?flushGarbageCollectors@SubChunk@@SAXXZ
     */
    MCAPI static void flushGarbageCollectors();

//protected:
    /**
     * @hash   -2081034051
     * @symbol ?_createBlockLightStorage@SubChunk@@IEAAXXZ
     */
    MCAPI void _createBlockLightStorage();
    /**
     * @hash   -1798745679
     * @symbol ?_createSkyLightStorage@SubChunk@@IEAAXXZ
     */
    MCAPI void _createSkyLightStorage();
    /**
     * @hash   -1809966610
     * @symbol ?_replaceBlocks@SubChunk@@IEAAXEV?$unique_ptr@V?$SubChunkStorage@VBlock@@@@U?$default_delete@V?$SubChunkStorage@VBlock@@@@@std@@@std@@AEAV?$LockGuard@VSpinLock@@@Threading@Bedrock@@@Z
     */
    MCAPI void _replaceBlocks(unsigned char, std::unique_ptr<class SubChunkStorage<class Block>>, class Bedrock::Threading::LockGuard<class SpinLock> &);
    /**
     * @hash   -1088742084
     * @symbol ?_resetLight@SubChunk@@IEAAX_N0@Z
     */
    MCAPI void _resetLight(bool, bool);
    /**
     * @hash   165112188
     * @symbol ?_setBlock@SubChunk@@IEAAXEGAEBVBlock@@@Z
     */
    MCAPI void _setBlock(unsigned char, unsigned short, class Block const &);

};