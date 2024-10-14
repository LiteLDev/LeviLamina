#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkRequestListType.h"
#include "mc/world/level/chunk/ChunksLoadedStatus.h"
#include "mc/world/level/chunk/QueueRequestResult.h"

class ChunkLoadActionList {
public:
    // prevent constructor by default
    ChunkLoadActionList& operator=(ChunkLoadActionList const&);
    ChunkLoadActionList(ChunkLoadActionList const&);

public:
    // NOLINTBEGIN
    MCAPI ChunkLoadActionList();

    MCAPI void addChunkLoadedRequest(
        class ChunkLoadedRequest chunkLoadedRequest,
        std::string const&       dimensionPrefix,
        ::ChunksLoadedStatus     chunksLoadedStatus,
        class LevelStorage&      levelStorage
    );

    MCAPI void
    loadRequests(class LevelStorage& storage, class ICommandOriginLoader& loader, std::string const& dimensionPrefix);

    MCAPI void onChunkLoaded(
        class LevelStorage& levelStorage,
        class ChunkSource&  source,
        std::string const&,
        class LevelChunk& lc,
        struct Tick       currentTick
    );

    MCAPI void onStaticTickingAreaAdded(
        class LevelStorage& levelStorage,
        class Dimension&    dimension,
        std::string const&  name,
        struct Tick         currentTick
    );

    MCAPI ::QueueRequestResult queueRequestOrExecuteAction(
        class ChunkLoadedRequest chunkLoadedRequest,
        class ServerLevel&       serverLevel,
        class LevelStorage&      levelStorage,
        class Dimension&         dimension
    );

    MCAPI void tickRequests(class ServerLevel& serverLevel, class Dimension& dimension);

    MCAPI ~ChunkLoadActionList();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addChunkLoadedRequest(
        class ChunkLoadedRequest chunkLoadedRequest,
        std::string const&       dimensionPrefix,
        ::ChunksLoadedStatus     chunksLoadedStatus,
        class LevelStorage&      levelStorage
    );

    MCAPI void _saveRequest(
        class ChunkLoadedRequest& request,
        std::string const&        dimensionPrefix,
        ::ChunkRequestListType    chunkRequestListType,
        class LevelStorage&       levelStorage
    );

    MCAPI void _updateAsyncList(
        class LevelStorage&                                            levelStorage,
        class Dimension&                                               dimension,
        std::function<::ChunksLoadedStatus(class ChunkLoadedRequest&)> chunksLoadedCheckFunction
    );

    MCAPI void _updateTickingList(
        class ServerLevel&                                             serverLevel,
        class Dimension&                                               dimension,
        std::function<::ChunksLoadedStatus(class ChunkLoadedRequest&)> chunksLoadedCheckFunction
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
