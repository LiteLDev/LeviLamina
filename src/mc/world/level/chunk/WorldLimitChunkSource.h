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
    // vIndex: 0, symbol: __gen_??1WorldLimitChunkSource@@UEAA@XZ
    virtual ~WorldLimitChunkSource() = default;

    // vIndex: 3, symbol:
    // ?getExistingChunk@WorldLimitChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@@Z
    virtual std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const& cp);

    // vIndex: 7, symbol:
    // ?createNewChunk@WorldLimitChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@W4LoadMode@ChunkSource@@_N@Z
    virtual std::shared_ptr<class LevelChunk>
    createNewChunk(class ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    // vIndex: 23, symbol: ?isWithinWorldLimit@WorldLimitChunkSource@@UEBA_NAEBVChunkPos@@@Z
    virtual bool isWithinWorldLimit(class ChunkPos const& cp) const;

    // vIndex: 24, symbol:
    // ?getChunkMap@WorldLimitChunkSource@@UEAAPEBV?$unordered_map@VChunkPos@@V?$weak_ptr@VLevelChunk@@@std@@U?$hash@VChunkPos@@@3@U?$equal_to@VChunkPos@@@3@V?$allocator@U?$pair@$$CBVChunkPos@@V?$weak_ptr@VLevelChunk@@@std@@@std@@@3@@std@@XZ
    virtual std::unordered_map<class ChunkPos, std::weak_ptr<class LevelChunk>> const* getChunkMap();

    // vIndex: 27, symbol: ?canCreateViews@WorldLimitChunkSource@@UEBA_NXZ
    virtual bool canCreateViews() const;

    // symbol:
    // ??0WorldLimitChunkSource@@QEAA@V?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@AEBVBlockPos@@HH@Z
    MCAPI WorldLimitChunkSource(
        std::unique_ptr<class ChunkSource> storage,
        class BlockPos const&              center,
        int                                width,
        int                                depth
    );

    // NOLINTEND
};
