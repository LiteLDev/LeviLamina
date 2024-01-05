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
    // vIndex: 0, symbol: __gen_??1MainChunkSource@@UEAA@XZ
    virtual ~MainChunkSource() = default;

    // vIndex: 3, symbol: ?getExistingChunk@MainChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@@Z
    virtual std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const& cp);

    // vIndex: 4, symbol: ?getRandomChunk@MainChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEAVRandom@@@Z
    virtual std::shared_ptr<class LevelChunk> getRandomChunk(class Random& random);

    // vIndex: 5, symbol: ?isChunkKnown@MainChunkSource@@UEAA_NAEBVChunkPos@@@Z
    virtual bool isChunkKnown(class ChunkPos const& chunkPos);

    // vIndex: 7, symbol:
    // ?createNewChunk@MainChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@W4LoadMode@ChunkSource@@_N@Z
    virtual std::shared_ptr<class LevelChunk>
    createNewChunk(class ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    // vIndex: 19, symbol:
    // ?acquireDiscarded@MainChunkSource@@UEAAXV?$unique_ptr@VLevelChunk@@ULevelChunkFinalDeleter@@@std@@@Z
    virtual void acquireDiscarded(std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter> ptr);

    // vIndex: 24, symbol:
    // ?getChunkMap@MainChunkSource@@UEAAPEBV?$unordered_map@VChunkPos@@V?$weak_ptr@VLevelChunk@@@std@@U?$hash@VChunkPos@@@3@U?$equal_to@VChunkPos@@@3@V?$allocator@U?$pair@$$CBVChunkPos@@V?$weak_ptr@VLevelChunk@@@std@@@std@@@3@@std@@XZ
    virtual std::unordered_map<class ChunkPos, std::weak_ptr<class LevelChunk>> const* getChunkMap();

    // vIndex: 25, symbol:
    // ?getStorage@MainChunkSource@@UEBAAEBV?$unordered_map@VChunkPos@@V?$weak_ptr@VLevelChunk@@@std@@U?$hash@VChunkPos@@@3@U?$equal_to@VChunkPos@@@3@V?$allocator@U?$pair@$$CBVChunkPos@@V?$weak_ptr@VLevelChunk@@@std@@@std@@@3@@std@@XZ
    virtual std::unordered_map<class ChunkPos, std::weak_ptr<class LevelChunk>> const& getStorage() const;

    // vIndex: 26, symbol: ?clearDeletedEntities@MainChunkSource@@UEAAXXZ
    virtual void clearDeletedEntities();

    // vIndex: 27, symbol: ?canCreateViews@MainChunkSource@@UEBA_NXZ
    virtual bool canCreateViews() const;

    // vIndex: 30, symbol: ?setLevelChunk@MainChunkSource@@UEAAXV?$shared_ptr@VLevelChunk@@@std@@@Z
    virtual void setLevelChunk(std::shared_ptr<class LevelChunk> lc);

    // symbol: ??0MainChunkSource@@QEAA@V?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@@Z
    MCAPI explicit MainChunkSource(std::unique_ptr<class ChunkSource> storage);

    // NOLINTEND
};
