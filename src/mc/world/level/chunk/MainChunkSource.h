#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkSource.h"

class MainChunkSource : public ::ChunkSource {
public:
    // prevent constructor by default
    MainChunkSource& operator=(MainChunkSource const&);
    MainChunkSource(MainChunkSource const&);
    MainChunkSource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MainChunkSource() = default;

    // vIndex: 3
    virtual std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const& cp);

    // vIndex: 4
    virtual std::shared_ptr<class LevelChunk> getRandomChunk(class Random& random);

    // vIndex: 5
    virtual bool isChunkKnown(class ChunkPos const& chunkPos);

    // vIndex: 7
    virtual std::shared_ptr<class LevelChunk>
    createNewChunk(class ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    // vIndex: 19
    virtual void acquireDiscarded(std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter> ptr);

    // vIndex: 24
    virtual std::unordered_map<class ChunkPos, std::weak_ptr<class LevelChunk>> const* getChunkMap();

    // vIndex: 25
    virtual std::unordered_map<class ChunkPos, std::weak_ptr<class LevelChunk>> const& getStorage() const;

    // vIndex: 26
    virtual void clearDeletedEntities();

    // vIndex: 27
    virtual bool canCreateViews() const;

    // vIndex: 30
    virtual void setLevelChunk(std::shared_ptr<class LevelChunk> lc);

    MCAPI explicit MainChunkSource(std::unique_ptr<class ChunkSource> storage);

    // NOLINTEND
};
