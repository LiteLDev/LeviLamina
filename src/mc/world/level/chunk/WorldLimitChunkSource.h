#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkSource.h"

class WorldLimitChunkSource : public ::ChunkSource {
public:
    // prevent constructor by default
    WorldLimitChunkSource& operator=(WorldLimitChunkSource const&);
    WorldLimitChunkSource(WorldLimitChunkSource const&);
    WorldLimitChunkSource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorldLimitChunkSource() = default;

    // vIndex: 3
    virtual std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const& cp);

    // vIndex: 7
    virtual std::shared_ptr<class LevelChunk>
    createNewChunk(class ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    // vIndex: 23
    virtual bool isWithinWorldLimit(class ChunkPos const& cp) const;

    // vIndex: 24
    virtual std::unordered_map<class ChunkPos, std::weak_ptr<class LevelChunk>> const* getChunkMap();

    // vIndex: 27
    virtual bool canCreateViews() const;

    MCAPI WorldLimitChunkSource(
        std::unique_ptr<class ChunkSource> storage,
        class BlockPos const&              center,
        int                                width,
        int                                depth
    );

    // NOLINTEND
};
