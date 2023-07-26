#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/LockGuard.h"
#include "mc/world/level/block/utils/BlockDataFetchResult.h"
#include "mc/world/level/chunk/SubChunkBrightnessStorage.h"
#include "mc/world/level/chunk/SubChunkStorage.h"

// auto generated forward declare list
// clang-format off
namespace SubChunkStorageUnit { enum class PruneType; }
// clang-format on

struct SubChunk {
public:
    // SubChunk inner types declare
    // clang-format off

    // clang-format on

    // SubChunk inner types define
    enum class SubChunkState {};

public:
    // prevent constructor by default
    SubChunk& operator=(SubChunk const&) = delete;
    SubChunk(SubChunk const&)            = delete;

public:
    /**
     * @symbol ??0SubChunk\@\@QEAA\@PEBVBlock\@\@_N1AEAVSpinLock\@\@C\@Z
     */
    MCAPI SubChunk(class Block const*, bool, bool, class SpinLock&, signed char); // NOLINT
    /**
     * @symbol ??0SubChunk\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI SubChunk(struct SubChunk&&); // NOLINT
    /**
     * @symbol ??0SubChunk\@\@QEAA\@XZ
     */
    MCAPI SubChunk(); // NOLINT
    /**
     * @symbol
     * ?deserialize\@SubChunk\@\@QEAAXAEAVIDataInput\@\@AEBVBlockPalette\@\@AEBVSubChunkPos\@\@V?$optional\@PEAUDeserializationChanges\@\@\@std\@\@\@Z
     */
    MCAPI void
    deserialize(class IDataInput&, class BlockPalette const&, class SubChunkPos const&, class std::optional<struct DeserializationChanges*>); // NOLINT
    /**
     * @symbol ?fetchBlocks\@SubChunk\@\@QEBAXAEBVBlockPos\@\@0FAEAVBlockVolume\@\@\@Z
     */
    MCAPI void fetchBlocks(class BlockPos const&, class BlockPos const&, short, class BlockVolume&) const; // NOLINT
    /**
     * @symbol
     * ?fetchBlocksInBox\@SubChunk\@\@QEBAXAEBVBlockPos\@\@AEBVBoundingBox\@\@AEBV?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@AEAV?$vector\@V?$BlockDataFetchResult\@VBlock\@\@\@\@V?$allocator\@V?$BlockDataFetchResult\@VBlock\@\@\@\@\@std\@\@\@5\@\@Z
     */
    MCAPI void
    fetchBlocksInBox(class BlockPos const&, class BoundingBox const&, class std::function<bool(class Block const&)> const&, std::vector<class BlockDataFetchResult<class Block>>&)
        const; // NOLINT
    /**
     * @symbol
     * ?fetchBlocksInCylinder\@SubChunk\@\@QEBAXAEBVBlockPos\@\@0IIAEBV?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@AEAV?$vector\@V?$BlockDataFetchResult\@VBlock\@\@\@\@V?$allocator\@V?$BlockDataFetchResult\@VBlock\@\@\@\@\@std\@\@\@4\@\@Z
     */
    MCAPI void
    fetchBlocksInCylinder(class BlockPos const&, class BlockPos const&, unsigned int, unsigned int, class std::function<bool(class Block const&)> const&, std::vector<class BlockDataFetchResult<class Block>>&)
        const; // NOLINT
    /**
     * @symbol ?getLight\@SubChunk\@\@QEBA?AULightPair\@SubChunkBrightnessStorage\@\@G\@Z
     */
    MCAPI struct SubChunkBrightnessStorage::LightPair getLight(unsigned short) const; // NOLINT
    /**
     * @symbol ?getSubChunkState\@SubChunk\@\@QEBA?AW4SubChunkState\@1\@XZ
     */
    MCAPI enum class SubChunk::SubChunkState getSubChunkState() const; // NOLINT
    /**
     * @symbol ?initialize\@SubChunk\@\@QEAAXPEBVBlock\@\@_N1AEAVSpinLock\@\@C\@Z
     */
    MCAPI void initialize(class Block const*, bool, bool, class SpinLock&, signed char); // NOLINT
    /**
     * @symbol ?isPaletteUniform\@SubChunk\@\@QEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool isPaletteUniform(class Block const&) const; // NOLINT
    /**
     * @symbol ?isUniform\@SubChunk\@\@QEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool isUniform(class Block const&) const; // NOLINT
    /**
     * @symbol ?likelyHasNonUniformBlockLight\@SubChunk\@\@QEBA_NXZ
     */
    MCAPI bool likelyHasNonUniformBlockLight() const; // NOLINT
    /**
     * @symbol ?needsInitLighting\@SubChunk\@\@QEBA_NXZ
     */
    MCAPI bool needsInitLighting() const; // NOLINT
    /**
     * @symbol ??4SubChunk\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct SubChunk& operator=(struct SubChunk&&); // NOLINT
    /**
     * @symbol ?prune\@SubChunk\@\@QEAAXW4PruneType\@SubChunkStorageUnit\@\@\@Z
     */
    MCAPI void prune(enum class SubChunkStorageUnit::PruneType); // NOLINT
    /**
     * @symbol ?recalculateHash\@SubChunk\@\@QEAAX_N\@Z
     */
    MCAPI void recalculateHash(bool); // NOLINT
    /**
     * @symbol
     * ?recalculateHashAndSerialize\@SubChunk\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI std::string recalculateHashAndSerialize(bool); // NOLINT
    /**
     * @symbol ?reset\@SubChunk\@\@QEAAXPEBVBlock\@\@_N1\@Z
     */
    MCAPI void reset(class Block const*, bool, bool); // NOLINT
    /**
     * @symbol ?safeToModify\@SubChunk\@\@QEBA_NXZ
     */
    MCAPI bool safeToModify() const; // NOLINT
    /**
     * @symbol ?serialize\@SubChunk\@\@QEBAXAEAVIDataOutput\@\@_N\@Z
     */
    MCAPI void serialize(class IDataOutput&, bool) const; // NOLINT
    /**
     * @symbol ?setAllIsMaxSkyLight\@SubChunk\@\@QEAAXXZ
     */
    MCAPI void setAllIsMaxSkyLight(); // NOLINT
    /**
     * @symbol ?setAllIsNoSkyLight\@SubChunk\@\@QEAAXXZ
     */
    MCAPI void setAllIsNoSkyLight(); // NOLINT
    /**
     * @symbol ?setBlockLight\@SubChunk\@\@QEAAXGE\@Z
     */
    MCAPI void setBlockLight(unsigned short, unsigned char); // NOLINT
    /**
     * @symbol ?setFromBlockVolume\@SubChunk\@\@QEAAXAEBVBlockVolume\@\@F\@Z
     */
    MCAPI void setFromBlockVolume(class BlockVolume const&, short); // NOLINT
    /**
     * @symbol ?setNeedsClientLighting\@SubChunk\@\@QEAAX_N\@Z
     */
    MCAPI void setNeedsClientLighting(bool); // NOLINT
    /**
     * @symbol ?setNeedsInitLighting\@SubChunk\@\@QEAAX_N\@Z
     */
    MCAPI void setNeedsInitLighting(bool); // NOLINT
    /**
     * @symbol ?setSkyLight\@SubChunk\@\@QEAAXGE\@Z
     */
    MCAPI void setSkyLight(unsigned short, unsigned char); // NOLINT
    /**
     * @symbol ??1SubChunk\@\@QEAA\@XZ
     */
    MCAPI ~SubChunk(); // NOLINT
    /**
     * @symbol ?flushGarbageCollectors\@SubChunk\@\@SAXXZ
     */
    MCAPI static void flushGarbageCollectors(); // NOLINT

    // protected:
    /**
     * @symbol ?_createBlockLightStorage\@SubChunk\@\@IEAAXXZ
     */
    MCAPI void _createBlockLightStorage(); // NOLINT
    /**
     * @symbol ?_createSkyLightStorage\@SubChunk\@\@IEAAXXZ
     */
    MCAPI void _createSkyLightStorage(); // NOLINT
    /**
     * @symbol
     * ?_replaceBlocks\@SubChunk\@\@IEAAXEV?$unique_ptr\@V?$SubChunkStorage\@VBlock\@\@\@\@U?$default_delete\@V?$SubChunkStorage\@VBlock\@\@\@\@\@std\@\@\@std\@\@AEAV?$LockGuard\@VSpinLock\@\@\@Threading\@Bedrock\@\@\@Z
     */
    MCAPI void
    _replaceBlocks(unsigned char, std::unique_ptr<class SubChunkStorage<class Block>>, class Bedrock::Threading::LockGuard<class SpinLock>&); // NOLINT
    /**
     * @symbol ?_resetLight\@SubChunk\@\@IEAAX_N0\@Z
     */
    MCAPI void _resetLight(bool, bool); // NOLINT
    /**
     * @symbol ?_setBlock\@SubChunk\@\@IEAAXEGAEBVBlock\@\@\@Z
     */
    MCAPI void _setBlock(unsigned char, unsigned short, class Block const&); // NOLINT
};
