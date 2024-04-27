#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/LockGuard.h"
#include "mc/world/level/block/utils/BlockDataFetchResult.h"
#include "mc/world/level/chunk/PruneType.h"
#include "mc/world/level/chunk/SubChunkBrightnessStorage.h"
#include "mc/world/level/chunk/SubChunkStorage.h"

struct SubChunk {
public:
    // SubChunk inner types define
    enum class BlockLayer : schar {
        Standard = 0,
        Extra    = 1,
        Count    = 2,
    };

    enum class SubChunkState : int {
        Invalid                    = -1,
        Normal                     = 0,
        IsLightingSystemSubChunk   = 1,
        NeedsRequest               = 2,
        ReceivedResponseFromServer = 3,
        ProcessingSubChunk         = 4,
        WaitingForCacheResponse    = 5,
        ProcessedSubChunk          = 6,
        RequestFinished            = 7,
    };

public:
    // prevent constructor by default
    SubChunk& operator=(SubChunk const&);
    SubChunk(SubChunk const&);

public:
    // NOLINTBEGIN
    // symbol: ??0SubChunk@@QEAA@XZ
    MCAPI SubChunk();

    // symbol: ??0SubChunk@@QEAA@$$QEAU0@@Z
    MCAPI SubChunk(struct SubChunk&& rhs);

    // symbol: ??0SubChunk@@QEAA@PEBVBlock@@_N1AEAVSpinLock@@C@Z
    MCAPI SubChunk(class Block const* initBlock, bool maxSkyLight, bool fullyLit, class SpinLock& spinLock, schar);

    // symbol:
    // ?deserialize@SubChunk@@QEAAXAEAVIDataInput@@AEBVBlockPalette@@AEBVSubChunkPos@@V?$optional@PEAUDeserializationChanges@@@std@@@Z
    MCAPI void
    deserialize(class IDataInput& stream, class BlockPalette const& palette, class SubChunkPos const& subChunkPos, std::optional<struct DeserializationChanges*>);

    // symbol: ?fetchBlocks@SubChunk@@QEBAXAEBVBlockPos@@0FAEAVBlockVolume@@@Z
    MCAPI void fetchBlocks(
        class BlockPos const& subChunkOrigin,
        class BlockPos const& volumeOrigin,
        short                 minHeight,
        class BlockVolume&    volume
    ) const;

    // symbol:
    // ?fetchBlocksInBox@SubChunk@@QEBAXAEBVBlockPos@@AEBVBoundingBox@@AEBV?$function@$$A6A_NAEBVBlock@@@Z@std@@AEAV?$vector@V?$BlockDataFetchResult@VBlock@@@@V?$allocator@V?$BlockDataFetchResult@VBlock@@@@@std@@@5@@Z
    MCAPI void fetchBlocksInBox(
        class BlockPos const&                                 positionOfChunk,
        class BoundingBox const&                              box,
        std::function<bool(class Block const&)> const&        predicate,
        std::vector<class BlockDataFetchResult<class Block>>& output
    ) const;

    // symbol:
    // ?fetchBlocksInCylinder@SubChunk@@QEBAXAEBVBlockPos@@0IIAEBV?$function@$$A6A_NAEBVBlock@@@Z@std@@AEAV?$vector@V?$BlockDataFetchResult@VBlock@@@@V?$allocator@V?$BlockDataFetchResult@VBlock@@@@@std@@@4@@Z
    MCAPI void fetchBlocksInCylinder(
        class BlockPos const&                                 positionOfChunk,
        class BlockPos const&                                 pos,
        uint                                                  radius,
        uint                                                  height,
        std::function<bool(class Block const&)> const&        predicate,
        std::vector<class BlockDataFetchResult<class Block>>& output
    ) const;

    // symbol: ?getAbsoluteIndex@SubChunk@@QEBACXZ
    MCAPI schar getAbsoluteIndex() const;

    // symbol: ?getBlock@SubChunk@@QEBAAEBVBlock@@G@Z
    MCAPI class Block const& getBlock(ushort index) const;

    // symbol: ?getExtraBlock@SubChunk@@QEBAAEBVBlock@@G@Z
    MCAPI class Block const& getExtraBlock(ushort index) const;

    // symbol: ?getLight@SubChunk@@QEBA?AULightPair@SubChunkBrightnessStorage@@G@Z
    MCAPI struct SubChunkBrightnessStorage::LightPair getLight(ushort idx) const;

    // symbol: ?getSubChunkState@SubChunk@@QEBA?AW4SubChunkState@1@XZ
    MCAPI ::SubChunk::SubChunkState getSubChunkState() const;

    // symbol: ?initialize@SubChunk@@QEAAXPEBVBlock@@_N1AEAVSpinLock@@C@Z
    MCAPI void
    initialize(class Block const* initBlock, bool maxSkyLight, bool fullyLit, class SpinLock& spinLock, schar);

    // symbol: ?isEmpty@SubChunk@@QEBA_NXZ
    MCAPI bool isEmpty() const;

    // symbol: ?isEmpty@SubChunk@@QEBA_NW4BlockLayer@1@@Z
    MCAPI bool isEmpty(::SubChunk::BlockLayer) const;

    // symbol: ?isPaletteUniform@SubChunk@@QEBA_NAEBVBlock@@@Z
    MCAPI bool isPaletteUniform(class Block const& block) const;

    // symbol: ?isPlaceHolderSubChunk@SubChunk@@QEBA_NXZ
    MCAPI bool isPlaceHolderSubChunk() const;

    // symbol: ?isReadPtrEmpty@SubChunk@@QEBA_NW4BlockLayer@1@@Z
    MCAPI bool isReadPtrEmpty(::SubChunk::BlockLayer) const;

    // symbol: ?isReplacementSubChunk@SubChunk@@QEBA_NXZ
    MCAPI bool isReplacementSubChunk() const;

    // symbol: ?isUniform@SubChunk@@QEBA_NAEBVBlock@@@Z
    MCAPI bool isUniform(class Block const& block) const;

    // symbol: ?likelyHasNonUniformBlockLight@SubChunk@@QEBA_NXZ
    MCAPI bool likelyHasNonUniformBlockLight() const;

    // symbol: ?needsInitLighting@SubChunk@@QEBA_NXZ
    MCAPI bool needsInitLighting() const;

    // symbol: ??4SubChunk@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct SubChunk& operator=(struct SubChunk&& rhs);

    // symbol: ?prune@SubChunk@@QEAAXW4PruneType@SubChunkStorageUnit@@@Z
    MCAPI void prune(::SubChunkStorageUnit::PruneType);

    // symbol: ?recalculateHash@SubChunk@@QEAAX_N@Z
    MCAPI void recalculateHash(bool network);

    // symbol:
    // ?recalculateHashAndSerialize@SubChunk@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI std::string recalculateHashAndSerialize(bool);

    // symbol: ?reset@SubChunk@@QEAAXPEBVBlock@@_N1@Z
    MCAPI void reset(class Block const* resetBlock, bool maxSkyLight, bool fullyLit);

    // symbol: ?safeToModify@SubChunk@@QEBA_NXZ
    MCAPI bool safeToModify() const;

    // symbol: ?serialize@SubChunk@@QEBAXAEAVIDataOutput@@_N@Z
    MCAPI void serialize(class IDataOutput& stream, bool network) const;

    // symbol: ?setAbsoluteIndex@SubChunk@@QEAAXC@Z
    MCAPI void setAbsoluteIndex(schar);

    // symbol: ?setAllIsMaxSkyLight@SubChunk@@QEAAXXZ
    MCAPI void setAllIsMaxSkyLight();

    // symbol: ?setAllIsNoSkyLight@SubChunk@@QEAAXXZ
    MCAPI void setAllIsNoSkyLight();

    // symbol: ?setBlock@SubChunk@@QEAAXGAEBVBlock@@@Z
    MCAPI void setBlock(ushort, class Block const&);

    // symbol: ?setBlockLight@SubChunk@@QEAAXGE@Z
    MCAPI void setBlockLight(ushort index, uchar lightValue);

    // symbol: ?setExtraBlock@SubChunk@@QEAAXGAEBVBlock@@@Z
    MCAPI void setExtraBlock(ushort, class Block const&);

    // symbol: ?setFromBlockVolume@SubChunk@@QEAAXAEBVBlockVolume@@F@Z
    MCAPI void setFromBlockVolume(class BlockVolume const& box, short height);

    // symbol: ?setLight@SubChunk@@QEAAXGULightPair@SubChunkBrightnessStorage@@@Z
    MCAPI void setLight(ushort idx, struct SubChunkBrightnessStorage::LightPair pair);

    // symbol: ?setNeedsClientLighting@SubChunk@@QEAAX_N@Z
    MCAPI void setNeedsClientLighting(bool state);

    // symbol: ?setNeedsInitLighting@SubChunk@@QEAAX_N@Z
    MCAPI void setNeedsInitLighting(bool state);

    // symbol: ?setSkyLight@SubChunk@@QEAAXGE@Z
    MCAPI void setSkyLight(ushort, uchar);

    // symbol: ??1SubChunk@@QEAA@XZ
    MCAPI ~SubChunk();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_createBlockLightStorage@SubChunk@@IEAAXXZ
    MCAPI void _createBlockLightStorage();

    // symbol:
    // ?_replaceBlocks@SubChunk@@IEAAXEV?$unique_ptr@V?$SubChunkStorage@VBlock@@@@U?$default_delete@V?$SubChunkStorage@VBlock@@@@@std@@@std@@AEAV?$LockGuard@VSpinLock@@@Threading@Bedrock@@@Z
    MCAPI void
    _replaceBlocks(uchar layer, std::unique_ptr<class SubChunkStorage<class Block>> newStorage, class Bedrock::Threading::LockGuard<class SpinLock>&);

    // symbol: ?_resetLight@SubChunk@@IEAAX_N0@Z
    MCAPI void _resetLight(bool maxSkyLight, bool maxLight);

    // symbol: ?_setBlock@SubChunk@@IEAAXEGAEBVBlock@@@Z
    MCAPI void _setBlock(uchar layer, ushort index, class Block const& block);

    // NOLINTEND
};
