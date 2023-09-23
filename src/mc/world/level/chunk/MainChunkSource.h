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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?getExistingChunk@MainChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@@Z
    virtual std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const&);

    // vIndex: 4, symbol: ?getRandomChunk@MainChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEAVRandom@@@Z
    virtual std::shared_ptr<class LevelChunk> getRandomChunk(class Random&);

    // vIndex: 5, symbol: ?isChunkKnown@MainChunkSource@@UEAA_NAEBVChunkPos@@@Z
    virtual bool isChunkKnown(class ChunkPos const&);

    // vIndex: 7, symbol:
    // ?createNewChunk@MainChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@W4LoadMode@ChunkSource@@_N@Z
    virtual std::shared_ptr<class LevelChunk> createNewChunk(class ChunkPos const&, ::ChunkSource::LoadMode, bool);

    // vIndex: 19, symbol:
    // ?acquireDiscarded@MainChunkSource@@UEAAXV?$unique_ptr@VLevelChunk@@ULevelChunkFinalDeleter@@@std@@@Z
    virtual void acquireDiscarded(std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);

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
    virtual void setLevelChunk(std::shared_ptr<class LevelChunk>);

    // symbol: ??0MainChunkSource@@QEAA@V?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@@Z
    MCAPI explicit MainChunkSource(std::unique_ptr<class ChunkSource>);

    // NOLINTEND
};
