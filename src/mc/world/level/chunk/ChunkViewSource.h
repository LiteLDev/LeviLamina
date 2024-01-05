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
    ChunkViewSource& operator=(ChunkViewSource const&);
    ChunkViewSource();


    ::ChunkSource::LoadMode               mParentLoadMode;
    GridArea<std::shared_ptr<LevelChunk>> mArea;
    ChunkSource&                          mMainSource;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ChunkViewSource@@UEAA@XZ
    virtual ~ChunkViewSource();

    // vIndex: 3, symbol: ?getExistingChunk@ChunkViewSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@@Z
    virtual std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const& pos);

    // vIndex: 4, symbol: ?getRandomChunk@ChunkViewSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEAVRandom@@@Z
    virtual std::shared_ptr<class LevelChunk> getRandomChunk(class Random& random);

    // vIndex: 7, symbol:
    // ?createNewChunk@ChunkViewSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@W4LoadMode@ChunkSource@@_N@Z
    virtual std::shared_ptr<class LevelChunk>
    createNewChunk(class ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    // vIndex: 19, symbol:
    // ?acquireDiscarded@ChunkViewSource@@UEAAXV?$unique_ptr@VLevelChunk@@ULevelChunkFinalDeleter@@@std@@@Z
    virtual void acquireDiscarded(std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter> ptr);

    // vIndex: 23, symbol: ?isWithinWorldLimit@ChunkViewSource@@UEBA_NAEBVChunkPos@@@Z
    virtual bool isWithinWorldLimit(class ChunkPos const& cp) const;

    // vIndex: 30, symbol: ?setLevelChunk@ChunkViewSource@@UEAAXV?$shared_ptr@VLevelChunk@@@std@@@Z
    virtual void setLevelChunk(std::shared_ptr<class LevelChunk> lc);

    // symbol: ??0ChunkViewSource@@QEAA@AEBV0@@Z
    MCAPI ChunkViewSource(class ChunkViewSource const&);

    // symbol: ??0ChunkViewSource@@QEAA@AEAVChunkSource@@W4LoadMode@1@@Z
    MCAPI ChunkViewSource(class ChunkSource& mainSource, ::ChunkSource::LoadMode parentLoadMode);

    // symbol:
    // ??0ChunkViewSource@@QEAA@AEAVChunkSource@@AEAV?$LevelChunkGridAreaElement@V?$weak_ptr@VLevelChunk@@@std@@@@AEBUBounds@@@Z
    MCAPI ChunkViewSource(
        class ChunkSource&                                                mainSource,
        class LevelChunkGridAreaElement<std::weak_ptr<class LevelChunk>>& gridArea,
        struct Bounds const&                                              bounds
    );

    // symbol: ?clear@ChunkViewSource@@QEAAXXZ
    MCAPI void clear();

    // symbol: ?clearEntryAtChunkPos@ChunkViewSource@@QEAAXAEBVChunkPos@@@Z
    MCAPI void clearEntryAtChunkPos(class ChunkPos const& chunkPos);

    // symbol:
    // ?enableBlockEntityAccess@ChunkViewSource@@QEAA?AV?$vector@VLevelChunkBlockActorAccessToken@@V?$allocator@VLevelChunkBlockActorAccessToken@@@std@@@std@@XZ
    MCAPI std::vector<class LevelChunkBlockActorAccessToken> enableBlockEntityAccess();

    // symbol: ?getArea@ChunkViewSource@@QEAAAEAV?$GridArea@V?$shared_ptr@VLevelChunk@@@std@@@@XZ
    MCAPI class GridArea<std::shared_ptr<class LevelChunk>>& getArea();

    // symbol:
    // ?move@ChunkViewSource@@QEAAXAEBUBounds@@_NW4ChunkSourceViewGenerateMode@@V?$function@$$A6AXV?$buffer_span_mut@V?$shared_ptr@VLevelChunk@@@std@@@@V?$buffer_span@I@@@Z@std@@PEBM@Z
    MCAPI void
    move(struct Bounds const& bounds, bool isCircle, ::ChunkSourceViewGenerateMode, std::function<void(class buffer_span_mut<std::shared_ptr<class LevelChunk>>, class buffer_span<uint>)> add, float const*);

    // symbol:
    // ?move@ChunkViewSource@@QEAAXAEBVBlockPos@@0_NW4ChunkSourceViewGenerateMode@@V?$function@$$A6AXV?$buffer_span_mut@V?$shared_ptr@VLevelChunk@@@std@@@@V?$buffer_span@I@@@Z@std@@PEBM@Z
    MCAPI void
    move(class BlockPos const& blockMin, class BlockPos const& blockMax, bool isCircle, ::ChunkSourceViewGenerateMode, std::function<void(class buffer_span_mut<std::shared_ptr<class LevelChunk>>, class buffer_span<uint>)> add, float const*);

    // symbol:
    // ?move@ChunkViewSource@@QEAAXAEBVBlockPos@@H_NW4ChunkSourceViewGenerateMode@@V?$function@$$A6AXV?$buffer_span_mut@V?$shared_ptr@VLevelChunk@@@std@@@@V?$buffer_span@I@@@Z@std@@PEBM@Z
    MCAPI void
    move(class BlockPos const& center, int radius, bool isCircle, ::ChunkSourceViewGenerateMode, std::function<void(class buffer_span_mut<std::shared_ptr<class LevelChunk>>, class buffer_span<uint>)> add, float const*);

    // symbol:
    // ?rebuildSpecificArea@ChunkViewSource@@QEAAXAEBUBounds@@_NV?$function@$$A6AXV?$buffer_span_mut@V?$shared_ptr@VLevelChunk@@@std@@@@V?$buffer_span@I@@@Z@std@@@Z
    MCAPI void rebuildSpecificArea(
        struct Bounds const& bounds,
        bool,
        std::function<void(class buffer_span_mut<std::shared_ptr<class LevelChunk>>, class buffer_span<uint>)> add
    );

    // symbol: ?getGenerateMode@ChunkViewSource@@SA?AW4ChunkSourceViewGenerateMode@@_N0@Z
    MCAPI static ::ChunkSourceViewGenerateMode getGenerateMode(bool isClientSide, bool);

    // NOLINTEND
};
