#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkRequestListType.h"
#include "mc/world/level/chunk/ChunksLoadedStatus.h"
#include "mc/world/level/chunk/QueueRequestResult.h"
#include "mc/world/level/dimension/DimensionDataSerializer.h"

// auto generated forward declare list
// clang-format off
class ChunkLoadedRequest;
class ChunkSource;
class CompoundTag;
class Dimension;
class ICommandOriginLoader;
class IRequestAction;
class JigsawStructureElementRegistry;
class LevelChunk;
class LevelStorage;
class ServerLevel;
struct Tick;
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
    MCAPI ChunkLoadActionList();

    MCAPI void _addChunkLoadedRequest(
        ::ChunkLoadedRequest chunkLoadedRequest,
        ::std::string const& dimensionPrefix,
        ::ChunksLoadedStatus chunksLoadedStatus,
        ::LevelStorage&      levelStorage
    );

    MCAPI void _addChunkLoadedRequestToAsyncList(
        ::ChunkLoadedRequest chunkLoadedRequest,
        ::std::string const& dimensionPrefix,
        ::LevelStorage&      levelStorage
    );

    MCAPI void _addChunkLoadedRequestToTickingList(
        ::ChunkLoadedRequest chunkLoadedRequest,
        ::std::string const& dimensionPrefix,
        ::LevelStorage&      levelStorage
    );

    MCAPI int
    _clearRequest(::LevelStorage& levelStorage, ::IRequestAction* actionToRemove, ::std::string_view tickingAreaName);

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

    MCAPI void addChunkLoadedRequest(
        ::ChunkLoadedRequest chunkLoadedRequest,
        ::std::string const& dimensionPrefix,
        ::ChunksLoadedStatus chunksLoadedStatus,
        ::LevelStorage&      levelStorage
    );

    MCAPI int clearRequestWithAction(::LevelStorage& levelStorage, ::gsl::not_null<::IRequestAction*> actionToRemove);

    MCAPI int clearRequestWithTickingAreaName(
        ::LevelStorage&    levelStorage,
        ::std::string_view tickingAreaName,
        ::IRequestAction*  actionToRemove
    );

    MCAPI void loadRequest(
        ::std::string const&                    key,
        ::CompoundTag const&                    tag,
        ::ICommandOriginLoader&                 loader,
        ::std::string const&                    dimensionPrefix,
        ::JigsawStructureElementRegistry const& elementReg
    );

    MCAPI void loadRequests(
        ::LevelStorage&                         storage,
        ::ICommandOriginLoader&                 loader,
        ::std::string const&                    dimensionPrefix,
        ::DimensionType                         type,
        ::JigsawStructureElementRegistry const& elementReg
    );

    MCAPI void onChunkLoaded(
        ::LevelStorage& levelStorage,
        ::ChunkSource&  source,
        ::std::string const&,
        ::LevelChunk& lc,
        ::Tick        currentTick
    );

    MCAPI void onStaticTickingAreaAdded(
        ::LevelStorage&      levelStorage,
        ::Dimension&         dimension,
        ::std::string const& name,
        ::Tick               currentTick
    );

    MCAPI ::QueueRequestResult queueRequestOrExecuteAction(
        ::ChunkLoadedRequest chunkLoadedRequest,
        ::ServerLevel&       serverLevel,
        ::Dimension&         dimension
    );

    MCAPI void tickRequests(::ServerLevel& serverLevel, ::Dimension& dimension);

    MCAPI ~ChunkLoadActionList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
