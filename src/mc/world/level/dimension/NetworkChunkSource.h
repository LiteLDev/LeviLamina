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
    // vIndex: 0, symbol: __gen_??1NetworkChunkSource@@UEAA@XZ
    virtual ~NetworkChunkSource() = default;

    // vIndex: 3, symbol: ?getExistingChunk@NetworkChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@@Z
    virtual std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const& cp);

    // vIndex: 7, symbol:
    // ?createNewChunk@NetworkChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@W4LoadMode@ChunkSource@@_N@Z
    virtual std::shared_ptr<class LevelChunk>
    createNewChunk(class ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    // vIndex: 8, symbol:
    // ?getOrLoadChunk@NetworkChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@W4LoadMode@ChunkSource@@_N@Z
    virtual std::shared_ptr<class LevelChunk>
    getOrLoadChunk(class ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    // vIndex: 19, symbol:
    // ?acquireDiscarded@NetworkChunkSource@@UEAAXV?$unique_ptr@VLevelChunk@@ULevelChunkFinalDeleter@@@std@@@Z
    virtual void acquireDiscarded(std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter> ptr);

    // vIndex: 24, symbol:
    // ?getChunkMap@NetworkChunkSource@@UEAAPEBV?$unordered_map@VChunkPos@@V?$weak_ptr@VLevelChunk@@@std@@U?$hash@VChunkPos@@@3@U?$equal_to@VChunkPos@@@3@V?$allocator@U?$pair@$$CBVChunkPos@@V?$weak_ptr@VLevelChunk@@@std@@@std@@@3@@std@@XZ
    virtual std::unordered_map<class ChunkPos, std::weak_ptr<class LevelChunk>> const* getChunkMap();

    // vIndex: 25, symbol:
    // ?getStorage@NetworkChunkSource@@UEBAAEBV?$unordered_map@VChunkPos@@V?$weak_ptr@VLevelChunk@@@std@@U?$hash@VChunkPos@@@3@U?$equal_to@VChunkPos@@@3@V?$allocator@U?$pair@$$CBVChunkPos@@V?$weak_ptr@VLevelChunk@@@std@@@std@@@3@@std@@XZ
    virtual std::unordered_map<class ChunkPos, std::weak_ptr<class LevelChunk>> const& getStorage() const;

    // vIndex: 27, symbol: ?canCreateViews@NetworkChunkSource@@UEBA_NXZ
    virtual bool canCreateViews() const;

    // vIndex: 31, symbol: ?canLaunchTasks@NetworkChunkSource@@UEBA_NXZ
    virtual bool canLaunchTasks() const;

    // symbol: ??0NetworkChunkSource@@QEAA@AEAVDimension@@@Z
    MCAPI explicit NetworkChunkSource(class Dimension& dimension);

    // NOLINTEND
};
