#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/QueueRequestResult.h"
#include "mc/world/level/chunk/ChunkRequestListType.h"
#include "mc/world/level/chunk/ChunksLoadedStatus.h"

class ChunkLoadActionList {
public:
    // prevent constructor by default
    ChunkLoadActionList& operator=(ChunkLoadActionList const&);
    ChunkLoadActionList(ChunkLoadActionList const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ChunkLoadActionList@@QEAA@XZ
    MCAPI ChunkLoadActionList();

    // symbol:
    // ?addChunkLoadedRequest@ChunkLoadActionList@@QEAAXVChunkLoadedRequest@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ChunksLoadedStatus@@AEAVLevelStorage@@@Z
    MCAPI void addChunkLoadedRequest(
        class ChunkLoadedRequest chunkLoadedRequest,
        std::string const&       dimensionPrefix,
        ::ChunksLoadedStatus     chunksLoadedStatus,
        class LevelStorage&      levelStorage
    );

    // symbol:
    // ?loadRequest@ChunkLoadActionList@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@AEAVICommandOriginLoader@@0@Z
    MCAPI void loadRequest(
        std::string const&          key,
        class CompoundTag const&    tag,
        class ICommandOriginLoader& loader,
        std::string const&          dimensionPrefix
    );

    // symbol:
    // ?loadRequests@ChunkLoadActionList@@QEAAXAEAVLevelStorage@@AEAVICommandOriginLoader@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void
    loadRequests(class LevelStorage& storage, class ICommandOriginLoader& loader, std::string const& dimensionPrefix);

    // symbol:
    // ?onChunkLoaded@ChunkLoadActionList@@QEAAXAEAVLevelStorage@@AEAVChunkSource@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVLevelChunk@@UTick@@@Z
    MCAPI void onChunkLoaded(
        class LevelStorage& levelStorage,
        class ChunkSource&  source,
        std::string const&,
        class LevelChunk& lc,
        struct Tick       currentTick
    );

    // symbol:
    // ?onStaticTickingAreaAdded@ChunkLoadActionList@@QEAAXAEAVLevelStorage@@AEAVDimension@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTick@@@Z
    MCAPI void onStaticTickingAreaAdded(
        class LevelStorage& levelStorage,
        class Dimension&    dimension,
        std::string const&  name,
        struct Tick         currentTick
    );

    // symbol:
    // ?queueRequestOrExecuteAction@ChunkLoadActionList@@QEAA?AW4QueueRequestResult@@VChunkLoadedRequest@@AEAVServerLevel@@AEAVLevelStorage@@AEAVDimension@@@Z
    MCAPI ::QueueRequestResult queueRequestOrExecuteAction(
        class ChunkLoadedRequest chunkLoadedRequest,
        class ServerLevel&       serverLevel,
        class LevelStorage&      levelStorage,
        class Dimension&         dimension
    );

    // symbol: ?tickRequests@ChunkLoadActionList@@QEAAXAEAVServerLevel@@AEAVDimension@@@Z
    MCAPI void tickRequests(class ServerLevel& serverLevel, class Dimension& dimension);

    // symbol: ??1ChunkLoadActionList@@QEAA@XZ
    MCAPI ~ChunkLoadActionList();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_addChunkLoadedRequest@ChunkLoadActionList@@AEAAXVChunkLoadedRequest@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ChunksLoadedStatus@@AEAVLevelStorage@@@Z
    MCAPI void _addChunkLoadedRequest(
        class ChunkLoadedRequest chunkLoadedRequest,
        std::string const&       dimensionPrefix,
        ::ChunksLoadedStatus     chunksLoadedStatus,
        class LevelStorage&      levelStorage
    );

    // symbol:
    // ?_saveRequest@ChunkLoadActionList@@AEAAXAEAVChunkLoadedRequest@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ChunkRequestListType@@AEAVLevelStorage@@@Z
    MCAPI void _saveRequest(
        class ChunkLoadedRequest& request,
        std::string const&        dimensionPrefix,
        ::ChunkRequestListType    chunkRequestListType,
        class LevelStorage&       levelStorage
    );

    // symbol:
    // ?_updateAsyncList@ChunkLoadActionList@@AEAAXAEAVLevelStorage@@AEAVDimension@@V?$function@$$A6A?AW4ChunksLoadedStatus@@AEAVChunkLoadedRequest@@@Z@std@@@Z
    MCAPI void
    _updateAsyncList(class LevelStorage& levelStorage, class Dimension& dimension, std::function<::ChunksLoadedStatus(class ChunkLoadedRequest&)>);

    // symbol:
    // ?_updateTickingList@ChunkLoadActionList@@AEAAXAEAVServerLevel@@AEAVDimension@@V?$function@$$A6A?AW4ChunksLoadedStatus@@AEAVChunkLoadedRequest@@@Z@std@@@Z
    MCAPI void
    _updateTickingList(class ServerLevel& serverLevel, class Dimension& dimension, std::function<::ChunksLoadedStatus(class ChunkLoadedRequest&)>);

    // NOLINTEND
};
