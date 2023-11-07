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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~LegacyChunkStorage() = default;

    // vIndex: 11, symbol: ?loadChunk@LegacyChunkStorage@@UEAAXAEAVLevelChunk@@_N@Z
    virtual void loadChunk(class LevelChunk&, bool);

    // vIndex: 13, symbol: ?saveLiveChunk@LegacyChunkStorage@@UEAA_NAEAVLevelChunk@@@Z
    virtual bool saveLiveChunk(class LevelChunk&);

    // vIndex: 19, symbol:
    // ?acquireDiscarded@LegacyChunkStorage@@UEAAXV?$unique_ptr@VLevelChunk@@ULevelChunkFinalDeleter@@@std@@@Z
    virtual void acquireDiscarded(std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);

    // symbol:
    // ??0LegacyChunkStorage@@QEAA@V?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@AEAVLevelStorage@@W4StorageVersion@@AEAVBiome@@@Z
    MCAPI LegacyChunkStorage(std::unique_ptr<class ChunkSource>, class LevelStorage&, ::StorageVersion, class Biome&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isImported@LegacyChunkStorage@@AEAA_NAEBVChunkPos@@@Z
    MCAPI bool _isImported(class ChunkPos const&);

    // symbol: ?_loadChunk@LegacyChunkStorage@@AEAA_NAEAVLevelChunk@@@Z
    MCAPI bool _loadChunk(class LevelChunk&);

    // symbol: ?_loadEntities@LegacyChunkStorage@@AEAAXXZ
    MCAPI void _loadEntities();

    // symbol: ?_markChunkAsImported@LegacyChunkStorage@@AEAAXAEBVChunkPos@@@Z
    MCAPI void _markChunkAsImported(class ChunkPos const&);

    // symbol: ?_openRegionFile@LegacyChunkStorage@@AEAA_NXZ
    MCAPI bool _openRegionFile();

    // NOLINTEND
};
