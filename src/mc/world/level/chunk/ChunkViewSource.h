#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/GridArea.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/buffer_span_mut.h"
#include "mc/world/level/LevelChunkGridAreaElement.h"
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/chunk/ChunkSourceViewGenerateMode.h"

class ChunkViewSource : public ::ChunkSource {
public:
    // prevent constructor by default
    ChunkViewSource& operator=(ChunkViewSource const&) = delete;
    ChunkViewSource()                                  = delete;


    enum class ChunkSource::LoadMode      mParentLoadMode;
    GridArea<std::shared_ptr<LevelChunk>> mArea;
    ChunkSource&                          mMainSource;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?getExistingChunk@ChunkViewSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@@Z
    virtual std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const&);

    // vIndex: 4, symbol: ?getRandomChunk@ChunkViewSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEAVRandom@@@Z
    virtual std::shared_ptr<class LevelChunk> getRandomChunk(class Random&);

    // vIndex: 7, symbol:
    // ?createNewChunk@ChunkViewSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@W4LoadMode@ChunkSource@@_N@Z
    virtual std::shared_ptr<class LevelChunk> createNewChunk(class ChunkPos const&, ::ChunkSource::LoadMode, bool);

    // vIndex: 18, symbol:
    // ?acquireDiscarded@ChunkViewSource@@UEAAXV?$unique_ptr@VLevelChunk@@ULevelChunkFinalDeleter@@@std@@@Z
    virtual void acquireDiscarded(std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);

    // vIndex: 22, symbol: ?isWithinWorldLimit@ChunkViewSource@@UEBA_NAEBVChunkPos@@@Z
    virtual bool isWithinWorldLimit(class ChunkPos const&) const;

    // vIndex: 29, symbol: ?setLevelChunk@ChunkViewSource@@UEAAXV?$shared_ptr@VLevelChunk@@@std@@@Z
    virtual void setLevelChunk(std::shared_ptr<class LevelChunk>);

    // symbol: ??1ChunkViewSource@@UEAA@XZ
    MCVAPI ~ChunkViewSource();

    // symbol: ??0ChunkViewSource@@QEAA@AEAVChunkSource@@W4LoadMode@1@@Z
    MCAPI ChunkViewSource(class ChunkSource&, ::ChunkSource::LoadMode);

    // symbol:
    // ??0ChunkViewSource@@QEAA@AEAVChunkSource@@AEAV?$LevelChunkGridAreaElement@V?$weak_ptr@VLevelChunk@@@std@@@@AEBUBounds@@@Z
    MCAPI
    ChunkViewSource(class ChunkSource&, class LevelChunkGridAreaElement<std::weak_ptr<class LevelChunk>>&, struct Bounds const&);

    // symbol: ??0ChunkViewSource@@QEAA@AEBV0@@Z
    MCAPI ChunkViewSource(class ChunkViewSource const&);

    // symbol: ?clear@ChunkViewSource@@QEAAXXZ
    MCAPI void clear();

    // symbol: ?clearEntryAtChunkPos@ChunkViewSource@@QEAAXAEBVChunkPos@@@Z
    MCAPI void clearEntryAtChunkPos(class ChunkPos const&);

    // symbol:
    // ?enableBlockEntityAccess@ChunkViewSource@@QEAA?AV?$vector@VLevelChunkBlockActorAccessToken@@V?$allocator@VLevelChunkBlockActorAccessToken@@@std@@@std@@XZ
    MCAPI std::vector<class LevelChunkBlockActorAccessToken> enableBlockEntityAccess();

    // symbol: ?getArea@ChunkViewSource@@QEAAAEAV?$GridArea@V?$shared_ptr@VLevelChunk@@@std@@@@XZ
    MCAPI class GridArea<std::shared_ptr<class LevelChunk>>& getArea();

    // symbol:
    // ?move@ChunkViewSource@@QEAAXAEBVBlockPos@@H_NW4ChunkSourceViewGenerateMode@@V?$function@$$A6AXV?$buffer_span_mut@V?$shared_ptr@VLevelChunk@@@std@@@@V?$buffer_span@I@@@Z@std@@PEBM@Z
    MCAPI void
    move(class BlockPos const&, int, bool, ::ChunkSourceViewGenerateMode, std::function<void(class buffer_span_mut<std::shared_ptr<class LevelChunk>>, class buffer_span<uint>)>, float const*);

    // symbol:
    // ?move@ChunkViewSource@@QEAAXAEBVBlockPos@@0_NW4ChunkSourceViewGenerateMode@@V?$function@$$A6AXV?$buffer_span_mut@V?$shared_ptr@VLevelChunk@@@std@@@@V?$buffer_span@I@@@Z@std@@PEBM@Z
    MCAPI void
    move(class BlockPos const&, class BlockPos const&, bool, ::ChunkSourceViewGenerateMode, std::function<void(class buffer_span_mut<std::shared_ptr<class LevelChunk>>, class buffer_span<uint>)>, float const*);

    // symbol:
    // ?move@ChunkViewSource@@QEAAXAEBUBounds@@_NW4ChunkSourceViewGenerateMode@@V?$function@$$A6AXV?$buffer_span_mut@V?$shared_ptr@VLevelChunk@@@std@@@@V?$buffer_span@I@@@Z@std@@PEBM@Z
    MCAPI void
    move(struct Bounds const&, bool, ::ChunkSourceViewGenerateMode, std::function<void(class buffer_span_mut<std::shared_ptr<class LevelChunk>>, class buffer_span<uint>)>, float const*);

    // symbol:
    // ?rebuildSpecificArea@ChunkViewSource@@QEAAXAEBUBounds@@_NV?$function@$$A6AXV?$buffer_span_mut@V?$shared_ptr@VLevelChunk@@@std@@@@V?$buffer_span@I@@@Z@std@@@Z
    MCAPI void
    rebuildSpecificArea(struct Bounds const&, bool, std::function<void(class buffer_span_mut<std::shared_ptr<class LevelChunk>>, class buffer_span<uint>)>);

    // symbol: ?getGenerateMode@ChunkViewSource@@SA?AW4ChunkSourceViewGenerateMode@@_N0@Z
    MCAPI static ::ChunkSourceViewGenerateMode getGenerateMode(bool, bool);

    // NOLINTEND
};
