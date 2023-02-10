/**
 * @file  SubChunk.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   -940386615
     * @symbol  ??0SubChunk\@\@QEAA\@XZ
     */
    MCAPI SubChunk();
    /**
     * @hash   1805919433
     * @symbol  ??0SubChunk\@\@QEAA\@PEBVBlock\@\@_N1AEAVSpinLock\@\@C\@Z
     */
    MCAPI SubChunk(class Block const *, bool, bool, class SpinLock &, signed char);
    /**
     * @hash   -1659671849
     * @symbol  ??0SubChunk\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI SubChunk(struct SubChunk &&);
    /**
     * @hash   135930132
     * @symbol  ?deserialize\@SubChunk\@\@QEAAXAEAVIDataInput\@\@AEBVBlockPalette\@\@AEBVSubChunkPos\@\@V?$optional\@PEAUDeserializationChanges\@\@\@std\@\@\@Z
     */
    MCAPI void deserialize(class IDataInput &, class BlockPalette const &, class SubChunkPos const &, class std::optional<struct DeserializationChanges *>);
    /**
     * @hash   1262748437
     * @symbol  ?fetchBlocks\@SubChunk\@\@QEBAXAEBVBlockPos\@\@0FAEAVBlockVolume\@\@\@Z
     */
    MCAPI void fetchBlocks(class BlockPos const &, class BlockPos const &, short, class BlockVolume &) const;
    /**
     * @hash   959220199
     * @symbol  ?fetchBlocksInBox\@SubChunk\@\@QEBAXAEBVBlockPos\@\@AEBVBoundingBox\@\@AEBV?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@AEAV?$vector\@V?$BlockDataFetchResult\@VBlock\@\@\@\@V?$allocator\@V?$BlockDataFetchResult\@VBlock\@\@\@\@\@std\@\@\@5\@\@Z
     */
    MCAPI void fetchBlocksInBox(class BlockPos const &, class BoundingBox const &, class std::function<bool (class Block const &)> const &, std::vector<class BlockDataFetchResult<class Block>> &) const;
    /**
     * @hash   -1901237855
     * @symbol  ?fetchBlocksInCylinder\@SubChunk\@\@QEBAXAEBVBlockPos\@\@0IIAEBV?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@AEAV?$vector\@V?$BlockDataFetchResult\@VBlock\@\@\@\@V?$allocator\@V?$BlockDataFetchResult\@VBlock\@\@\@\@\@std\@\@\@4\@\@Z
     */
    MCAPI void fetchBlocksInCylinder(class BlockPos const &, class BlockPos const &, unsigned int, unsigned int, class std::function<bool (class Block const &)> const &, std::vector<class BlockDataFetchResult<class Block>> &) const;
    /**
     * @hash   750529702
     * @symbol  ?getLight\@SubChunk\@\@QEBA?AULightPair\@SubChunkBrightnessStorage\@\@G\@Z
     */
    MCAPI struct SubChunkBrightnessStorage::LightPair getLight(unsigned short) const;
    /**
     * @hash   -559166380
     * @symbol  ?getSubChunkState\@SubChunk\@\@QEBA?AW4SubChunkState\@1\@XZ
     */
    MCAPI enum class SubChunk::SubChunkState getSubChunkState() const;
    /**
     * @hash   -658390483
     * @symbol  ?initialize\@SubChunk\@\@QEAAXPEBVBlock\@\@_N1AEAVSpinLock\@\@C\@Z
     */
    MCAPI void initialize(class Block const *, bool, bool, class SpinLock &, signed char);
    /**
     * @hash   872691263
     * @symbol  ?isPaletteUniform\@SubChunk\@\@QEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool isPaletteUniform(class Block const &) const;
    /**
     * @hash   1840903519
     * @symbol  ?isUniform\@SubChunk\@\@QEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool isUniform(class Block const &) const;
    /**
     * @hash   298618114
     * @symbol  ?likelyHasNonUniformBlockLight\@SubChunk\@\@QEBA_NXZ
     */
    MCAPI bool likelyHasNonUniformBlockLight() const;
    /**
     * @hash   1444835336
     * @symbol  ?needsInitLighting\@SubChunk\@\@QEBA_NXZ
     */
    MCAPI bool needsInitLighting() const;
    /**
     * @hash   1573802094
     * @symbol  ??4SubChunk\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct SubChunk & operator=(struct SubChunk &&);
    /**
     * @hash   -1315896206
     * @symbol  ?prune\@SubChunk\@\@QEAAXW4PruneType\@SubChunkStorageUnit\@\@\@Z
     */
    MCAPI void prune(enum class SubChunkStorageUnit::PruneType);
    /**
     * @hash   -17906252
     * @symbol  ?recalculateHash\@SubChunk\@\@QEAAX_N\@Z
     */
    MCAPI void recalculateHash(bool);
    /**
     * @hash   -1268441665
     * @symbol  ?recalculateHashAndSerialize\@SubChunk\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI std::string recalculateHashAndSerialize(bool);
    /**
     * @hash   734079741
     * @symbol  ?reset\@SubChunk\@\@QEAAXPEBVBlock\@\@_N1\@Z
     */
    MCAPI void reset(class Block const *, bool, bool);
    /**
     * @hash   -1039319784
     * @symbol  ?safeToModify\@SubChunk\@\@QEBA_NXZ
     */
    MCAPI bool safeToModify() const;
    /**
     * @hash   1096765997
     * @symbol  ?serialize\@SubChunk\@\@QEBAXAEAVIDataOutput\@\@_N\@Z
     */
    MCAPI void serialize(class IDataOutput &, bool) const;
    /**
     * @hash   1793504211
     * @symbol  ?setAllIsMaxSkyLight\@SubChunk\@\@QEAAXXZ
     */
    MCAPI void setAllIsMaxSkyLight();
    /**
     * @hash   -2039286219
     * @symbol  ?setAllIsNoSkyLight\@SubChunk\@\@QEAAXXZ
     */
    MCAPI void setAllIsNoSkyLight();
    /**
     * @hash   -44538483
     * @symbol  ?setBlockLight\@SubChunk\@\@QEAAXGE\@Z
     */
    MCAPI void setBlockLight(unsigned short, unsigned char);
    /**
     * @hash   -1572480250
     * @symbol  ?setFromBlockVolume\@SubChunk\@\@QEAAXAEBVBlockVolume\@\@F\@Z
     */
    MCAPI void setFromBlockVolume(class BlockVolume const &, short);
    /**
     * @hash   2104102036
     * @symbol  ?setNeedsClientLighting\@SubChunk\@\@QEAAX_N\@Z
     */
    MCAPI void setNeedsClientLighting(bool);
    /**
     * @hash   -33712582
     * @symbol  ?setNeedsInitLighting\@SubChunk\@\@QEAAX_N\@Z
     */
    MCAPI void setNeedsInitLighting(bool);
    /**
     * @hash   -1751709315
     * @symbol  ?setSkyLight\@SubChunk\@\@QEAAXGE\@Z
     */
    MCAPI void setSkyLight(unsigned short, unsigned char);
    /**
     * @hash   -786617814
     * @symbol  ?setSubChunkState\@SubChunk\@\@QEAAXW4SubChunkState\@1\@\@Z
     */
    MCAPI void setSubChunkState(enum class SubChunk::SubChunkState);
    /**
     * @hash   1701892549
     * @symbol  ?shutdown\@SubChunk\@\@QEAAXXZ
     */
    MCAPI void shutdown();
    /**
     * @hash   1644032391
     * @symbol  ??1SubChunk\@\@QEAA\@XZ
     */
    MCAPI ~SubChunk();
    /**
     * @hash   1221218579
     * @symbol  ?flushGarbageCollectors\@SubChunk\@\@SAXXZ
     */
    MCAPI static void flushGarbageCollectors();

//protected:
    /**
     * @hash   -1204094643
     * @symbol  ?_createBlockLightStorage\@SubChunk\@\@IEAAXXZ
     */
    MCAPI void _createBlockLightStorage();
    /**
     * @hash   -921806271
     * @symbol  ?_createSkyLightStorage\@SubChunk\@\@IEAAXXZ
     */
    MCAPI void _createSkyLightStorage();
    /**
     * @hash   -933027202
     * @symbol  ?_replaceBlocks\@SubChunk\@\@IEAAXEV?$unique_ptr\@V?$SubChunkStorage\@VBlock\@\@\@\@U?$default_delete\@V?$SubChunkStorage\@VBlock\@\@\@\@\@std\@\@\@std\@\@AEAV?$LockGuard\@VSpinLock\@\@\@Threading\@Bedrock\@\@\@Z
     */
    MCAPI void _replaceBlocks(unsigned char, std::unique_ptr<class SubChunkStorage<class Block>>, class Bedrock::Threading::LockGuard<class SpinLock> &);
    /**
     * @hash   -211787300
     * @symbol  ?_resetLight\@SubChunk\@\@IEAAX_N0\@Z
     */
    MCAPI void _resetLight(bool, bool);
    /**
     * @hash   1042066972
     * @symbol  ?_setBlock\@SubChunk\@\@IEAAXEGAEBVBlock\@\@\@Z
     */
    MCAPI void _setBlock(unsigned char, unsigned short, class Block const &);

};