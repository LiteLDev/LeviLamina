#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRef.h"
#include "mc/world/level/chunk/ILevelChunkSaveManagerProxy.h"

class LevelChunkSaveManagerProxy : public ::ILevelChunkSaveManagerProxy {
public:
    // prevent constructor by default
    LevelChunkSaveManagerProxy& operator=(LevelChunkSaveManagerProxy const&);
    LevelChunkSaveManagerProxy(LevelChunkSaveManagerProxy const&);
    LevelChunkSaveManagerProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LevelChunkSaveManagerProxy@@UEAA@XZ
    virtual ~LevelChunkSaveManagerProxy() = default;

    // vIndex: 1, symbol:
    // ?getRandomDimension@LevelChunkSaveManagerProxy@@UEBA?AV?$WeakRef@VDimension@@@@AEAVDimensionManager@@@Z
    virtual class WeakRef<class Dimension> getRandomDimension(class DimensionManager&) const;

    // vIndex: 2, symbol:
    // ?getRandomChunk@LevelChunkSaveManagerProxy@@UEBA?AV?$shared_ptr@VLevelChunk@@@std@@AEAVDimension@@@Z
    virtual std::shared_ptr<class LevelChunk> getRandomChunk(class Dimension&) const;

    // vIndex: 3, symbol:
    // ?getChunk@LevelChunkSaveManagerProxy@@UEBA?AV?$shared_ptr@VLevelChunk@@@std@@AEAVDimension@@AEBVChunkPos@@@Z
    virtual std::shared_ptr<class LevelChunk> getChunk(class Dimension&, class ChunkPos const&) const;

    // vIndex: 4, symbol: ?doesNonActorDataInLevelChunkNeedSaving@LevelChunkSaveManagerProxy@@UEBA_NAEBVLevelChunk@@HH@Z
    virtual bool doesNonActorDataInLevelChunkNeedSaving(class LevelChunk const&, int, int) const;

    // vIndex: 5, symbol: ?doesLevelChunkNeedSaving@LevelChunkSaveManagerProxy@@UEBA_NAEBVLevelChunk@@HH@Z
    virtual bool doesLevelChunkNeedSaving(class LevelChunk const&, int, int) const;

    // vIndex: 6, symbol: ?saveLiveChunk@LevelChunkSaveManagerProxy@@UEAAXAEAVDimension@@AEAVLevelChunk@@@Z
    virtual void saveLiveChunk(class Dimension&, class LevelChunk&);

    // vIndex: 7, symbol:
    // ?queueTaskForChunkSave@LevelChunkSaveManagerProxy@@UEAAXV?$function@$$A6A?AVTaskResult@@XZ@std@@@Z
    virtual void queueTaskForChunkSave(std::function<class TaskResult()>);

    // vIndex: 8, symbol: ?startLeaveGame@LevelChunkSaveManagerProxy@@UEAAXXZ
    virtual void startLeaveGame();

    // symbol: ??0LevelChunkSaveManagerProxy@@QEAA@AEAVRandom@@AEAVScheduler@@@Z
    MCAPI LevelChunkSaveManagerProxy(class Random&, class Scheduler&);

    // NOLINTEND
};
