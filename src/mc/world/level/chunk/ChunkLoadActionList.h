#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkRequestListType.h"
#include "mc/world/level/chunk/ChunksLoadedStatus.h"
#include "mc/world/level/chunk/QueueRequestResult.h"

// auto generated forward declare list
// clang-format off
class ChunkLoadedRequest;
class ChunkSource;
class CompoundTag;
class Dimension;
class ICommandOriginLoader;
class IRequestAction;
class LevelChunk;
class LevelStorage;
class ServerLevel;
struct Tick;
// clang-format on

class ChunkLoadActionList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfff3ed;
    ::ll::UntypedStorage<8, 24> mUnkaef048;
    ::ll::UntypedStorage<4, 4>  mUnkc0f0ae;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkLoadActionList& operator=(ChunkLoadActionList const&);
    ChunkLoadActionList(ChunkLoadActionList const&);

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

    MCAPI void _addChunkLoadedRequestToTickingList(
        ::ChunkLoadedRequest chunkLoadedRequest,
        ::std::string const& dimensionPrefix,
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
        ::std::string const&    key,
        ::CompoundTag const&    tag,
        ::ICommandOriginLoader& loader,
        ::std::string const&    dimensionPrefix
    );

    MCAPI void
    loadRequests(::LevelStorage& storage, ::ICommandOriginLoader& loader, ::std::string const& dimensionPrefix);

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
