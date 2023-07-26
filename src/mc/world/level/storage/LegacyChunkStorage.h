#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkSource.h"

class LegacyChunkStorage : public ::ChunkSource {

public:
    // prevent constructor by default
    LegacyChunkStorage& operator=(LegacyChunkStorage const&) = delete;
    LegacyChunkStorage(LegacyChunkStorage const&)            = delete;
    LegacyChunkStorage()                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?loadChunk\@LegacyChunkStorage\@\@UEAAXAEAVLevelChunk\@\@_N\@Z
     */
    virtual void loadChunk(class LevelChunk&, bool); // NOLINT
    /**
     * @vftbl 13
     * @symbol ?saveLiveChunk\@LegacyChunkStorage\@\@UEAA_NAEAVLevelChunk\@\@\@Z
     */
    virtual bool saveLiveChunk(class LevelChunk&); // NOLINT
    /**
     * @vftbl 18
     * @symbol
     * ?acquireDiscarded\@LegacyChunkStorage\@\@UEAAXV?$unique_ptr\@VLevelChunk\@\@ULevelChunkFinalDeleter\@\@\@std\@\@\@Z
     */
    virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>); // NOLINT
    /**
     * @symbol
     * ??0LegacyChunkStorage\@\@QEAA\@V?$unique_ptr\@VChunkSource\@\@U?$default_delete\@VChunkSource\@\@\@std\@\@\@std\@\@AEAVLevelStorage\@\@W4StorageVersion\@\@AEAVBiome\@\@\@Z
     */
    MCAPI
    LegacyChunkStorage(std::unique_ptr<class ChunkSource>, class LevelStorage&, enum class StorageVersion, class Biome&); // NOLINT

    // private:
    /**
     * @symbol ?_isImported\@LegacyChunkStorage\@\@AEAA_NAEBVChunkPos\@\@\@Z
     */
    MCAPI bool _isImported(class ChunkPos const&); // NOLINT
    /**
     * @symbol ?_loadChunk\@LegacyChunkStorage\@\@AEAA_NAEAVLevelChunk\@\@\@Z
     */
    MCAPI bool _loadChunk(class LevelChunk&); // NOLINT
    /**
     * @symbol ?_loadEntities\@LegacyChunkStorage\@\@AEAAXXZ
     */
    MCAPI void _loadEntities(); // NOLINT
    /**
     * @symbol ?_markChunkAsImported\@LegacyChunkStorage\@\@AEAAXAEBVChunkPos\@\@\@Z
     */
    MCAPI void _markChunkAsImported(class ChunkPos const&); // NOLINT
    /**
     * @symbol ?_openRegionFile\@LegacyChunkStorage\@\@AEAA_NXZ
     */
    MCAPI bool _openRegionFile(); // NOLINT

private:
};
