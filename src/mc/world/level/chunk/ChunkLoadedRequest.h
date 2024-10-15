#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkRequestListType.h"
#include "mc/world/level/chunk/ChunksLoadedStatus.h"

class ChunkLoadedRequest {
public:
    // prevent constructor by default
    ChunkLoadedRequest& operator=(ChunkLoadedRequest const&);
    ChunkLoadedRequest(ChunkLoadedRequest const&);
    ChunkLoadedRequest();

public:
    // NOLINTBEGIN
    MCAPI ChunkLoadedRequest(class ChunkLoadedRequest&&);

    MCAPI ChunkLoadedRequest(
        std::string const&                    tickingAreaName,
        std::unique_ptr<class IRequestAction> requestAction,
        bool                                  allowNonTickingPlayerAndTickingAreaChunks
    );

    MCAPI ChunkLoadedRequest(
        struct Bounds const&                  bounds,
        std::unique_ptr<class IRequestAction> requestAction,
        bool                                  isCircleArea,
        bool                                  allowNonTickingPlayerAndTickingAreaChunks
    );

    MCAPI ::ChunksLoadedStatus areAllChunksLoaded(class Dimension& dimension, struct Tick currentLevelTick) const;

    MCAPI bool areaContainsChunk(class LevelChunk const& chunk) const;

    MCAPI class CompoundTag serialize(::ChunkRequestListType chunkRequestListType);

    MCAPI ~ChunkLoadedRequest();

    MCAPI static bool isValidTag(class CompoundTag const& tag);

    MCAPI static struct DeserializedChunkLoadedRequest load(
        std::string const&          key,
        class CompoundTag const&    tag,
        class ICommandOriginLoader& loader,
        std::string const&          dimensionPrefix
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class ITickingAreaView const* _getTickingArea(class Dimension const& dimension) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        struct Bounds const&                  bounds,
        std::unique_ptr<class IRequestAction> requestAction,
        bool                                  isCircleArea,
        bool                                  allowNonTickingPlayerAndTickingAreaChunks
    );

    MCAPI void* ctor$(class ChunkLoadedRequest&&);

    MCAPI void* ctor$(
        std::string const&                    tickingAreaName,
        std::unique_ptr<class IRequestAction> requestAction,
        bool                                  allowNonTickingPlayerAndTickingAreaChunks
    );

    MCAPI void dtor$();

    // NOLINTEND
};
