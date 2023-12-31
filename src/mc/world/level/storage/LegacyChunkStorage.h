#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/StorageVersion.h"
#include "mc/world/level/chunk/ChunkSource.h"

class LegacyChunkStorage : public ::ChunkSource {
public:
    // prevent constructor by default
    LegacyChunkStorage& operator=(LegacyChunkStorage const&);
    LegacyChunkStorage(LegacyChunkStorage const&);
    LegacyChunkStorage();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LegacyChunkStorage@@UEAA@XZ
    virtual ~LegacyChunkStorage() = default;

    // vIndex: 11, symbol: ?loadChunk@LegacyChunkStorage@@UEAAXAEAVLevelChunk@@_N@Z
    virtual void loadChunk(class LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    // vIndex: 13, symbol: ?saveLiveChunk@LegacyChunkStorage@@UEAA_NAEAVLevelChunk@@@Z
    virtual bool saveLiveChunk(class LevelChunk& lc);

    // vIndex: 19, symbol:
    // ?acquireDiscarded@LegacyChunkStorage@@UEAAXV?$unique_ptr@VLevelChunk@@ULevelChunkFinalDeleter@@@std@@@Z
    virtual void acquireDiscarded(std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter> ptr);

    // symbol:
    // ??0LegacyChunkStorage@@QEAA@V?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@AEAVLevelStorage@@W4StorageVersion@@AEAVBiome@@@Z
    MCAPI LegacyChunkStorage(
        std::unique_ptr<class ChunkSource> parent,
        class LevelStorage&                levelStorage,
        ::StorageVersion                   v,
        class Biome&                       defaultBiome
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isImported@LegacyChunkStorage@@AEAA_NAEBVChunkPos@@@Z
    MCAPI bool _isImported(class ChunkPos const& pos);

    // symbol: ?_loadChunk@LegacyChunkStorage@@AEAA_NAEAVLevelChunk@@@Z
    MCAPI bool _loadChunk(class LevelChunk& lc);

    // symbol: ?_loadEntities@LegacyChunkStorage@@AEAAXXZ
    MCAPI void _loadEntities();

    // symbol: ?_markChunkAsImported@LegacyChunkStorage@@AEAAXAEBVChunkPos@@@Z
    MCAPI void _markChunkAsImported(class ChunkPos const& pos);

    // symbol: ?_openRegionFile@LegacyChunkStorage@@AEAA_NXZ
    MCAPI bool _openRegionFile();

    // NOLINTEND
};
