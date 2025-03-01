#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkRequestListType.h"
#include "mc/world/level/chunk/ChunksLoadedStatus.h"
#include "mc/world/level/chunk/QueueRequestResult.h"

// auto generated forward declare list
// clang-format off
class ChunkLoadedRequest;
class Dimension;
class DimensionDataSerializer;
class IRequestAction;
class LevelStorage;
class ServerLevel;
// clang-format on

class ChunkLoadActionList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ChunkLoadedRequest>> mChunkLoadedRequests;
    ::ll::TypedStorage<8, 24, ::std::vector<::ChunkLoadedRequest>> mChunkLoadedRequestsWaitForTicking;
    ::ll::TypedStorage<4, 4, ::DimensionDataSerializer>            mDimensionDataSerializer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addChunkLoadedRequest(
        ::ChunkLoadedRequest chunkLoadedRequest,
        ::std::string const& dimensionPrefix,
        ::ChunksLoadedStatus chunksLoadedStatus,
        ::LevelStorage&      levelStorage
    );

    MCAPI int
    _clearRequest(::LevelStorage& levelStorage, ::IRequestAction* actionToRemove, ::std::string_view tickingAreaName);

    MCAPI ::QueueRequestResult _queueRequestOrExecuteAction(
        ::ChunkLoadedRequest chunkLoadedRequest,
        ::ServerLevel&       serverLevel,
        ::LevelStorage&      levelStorage,
        ::Dimension&         dimension,
        ::ChunksLoadedStatus chunksLoadedStatus
    );

    MCAPI void _saveRequest(
        ::ChunkLoadedRequest&  request,
        ::std::string const&   dimensionPrefix,
        ::ChunkRequestListType chunkRequestListType,
        ::LevelStorage&        levelStorage
    );

    MCAPI void _updateAsyncList(
        ::LevelStorage&                                              levelStorage,
        ::Dimension&                                                 dimension,
        ::std::function<::ChunksLoadedStatus(::ChunkLoadedRequest&)> chunksLoadedCheckFunction
    );

    MCAPI void _updateTickingList(
        ::ServerLevel&                                               serverLevel,
        ::Dimension&                                                 dimension,
        ::std::function<::ChunksLoadedStatus(::ChunkLoadedRequest&)> chunksLoadedCheckFunction
    );

    MCAPI ::QueueRequestResult queueRequestOrExecuteAction(
        ::ChunkLoadedRequest chunkLoadedRequest,
        ::ServerLevel&       serverLevel,
        ::Dimension&         dimension
    );
    // NOLINTEND
};
