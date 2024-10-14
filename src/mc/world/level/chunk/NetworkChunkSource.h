#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkSource.h"

class NetworkChunkSource : public ::ChunkSource {
public:
    // prevent constructor by default
    NetworkChunkSource& operator=(NetworkChunkSource const&);
    NetworkChunkSource(NetworkChunkSource const&);
    NetworkChunkSource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkChunkSource() = default;

    // vIndex: 3
    virtual std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const& cp);

    // vIndex: 7
    virtual std::shared_ptr<class LevelChunk>
    createNewChunk(class ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    // vIndex: 8
    virtual std::shared_ptr<class LevelChunk>
    getOrLoadChunk(class ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    // vIndex: 19
    virtual void acquireDiscarded(std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter> ptr);

    // vIndex: 24
    virtual std::unordered_map<class ChunkPos, std::weak_ptr<class LevelChunk>> const* getChunkMap();

    // vIndex: 25
    virtual std::unordered_map<class ChunkPos, std::weak_ptr<class LevelChunk>> const& getStorage() const;

    // vIndex: 27
    virtual bool canCreateViews() const;

    // vIndex: 31
    virtual bool canLaunchTasks() const;

    MCAPI explicit NetworkChunkSource(class Dimension& dimension);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void acquireDiscarded$(std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter> ptr);

    MCAPI bool canCreateViews$() const;

    MCAPI bool canLaunchTasks$() const;

    MCAPI std::shared_ptr<class LevelChunk>
          createNewChunk$(class ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCAPI std::unordered_map<class ChunkPos, std::weak_ptr<class LevelChunk>> const* getChunkMap$();

    MCAPI std::shared_ptr<class LevelChunk> getExistingChunk$(class ChunkPos const& cp);

    MCAPI std::shared_ptr<class LevelChunk>
          getOrLoadChunk$(class ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCAPI std::unordered_map<class ChunkPos, std::weak_ptr<class LevelChunk>> const& getStorage$() const;

    // NOLINTEND
};
