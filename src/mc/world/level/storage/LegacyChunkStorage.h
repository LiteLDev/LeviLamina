#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/storage/StorageVersion.h"

class LegacyChunkStorage : public ::ChunkSource {
public:
    // prevent constructor by default
    LegacyChunkStorage& operator=(LegacyChunkStorage const&);
    LegacyChunkStorage(LegacyChunkStorage const&);
    LegacyChunkStorage();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyChunkStorage() = default;

    // vIndex: 11
    virtual void loadChunk(class LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    // vIndex: 13
    virtual bool saveLiveChunk(class LevelChunk& lc);

    // vIndex: 19
    virtual void acquireDiscarded(std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter> ptr);

    MCAPI LegacyChunkStorage(
        std::unique_ptr<class ChunkSource> parent,
        class LevelStorage&                levelStorage,
        ::StorageVersion                   v,
        class Biome&                       defaultBiome
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _isImported(class ChunkPos const& pos);

    MCAPI bool _loadChunk(class LevelChunk& lc);

    MCAPI void _loadEntities();

    MCAPI void _markChunkAsImported(class ChunkPos const& pos);

    MCAPI bool _openRegionFile();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        std::unique_ptr<class ChunkSource> parent,
        class LevelStorage&                levelStorage,
        ::StorageVersion                   v,
        class Biome&                       defaultBiome
    );

    MCAPI void acquireDiscarded$(std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter> ptr);

    MCAPI void loadChunk$(class LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    MCAPI bool saveLiveChunk$(class LevelChunk& lc);

    // NOLINTEND
};
