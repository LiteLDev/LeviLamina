#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/Bounds.h"
#include "mc/world/level/chunk/IRequestAction.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkRequestListType.h"
#include "mc/world/level/chunk/ChunksLoadedStatus.h"

class ChunkLoadedRequest {
public:
    ChunkLoadedRequest() = delete;

    enum class AreaType : schar {
        Bounds      = 0x0,
        Circle      = 0x1,
        TickingArea = 0x2,
    };

    bool                                  mAllowNonTickingPlayerAndTickingAreaChunks; // this+0x0
    enum class AreaType                   mAreaType;                                  // this+0x1
    struct Bounds                         mBounds;                                    // this+0x4
    std::string                           mTickingAreaName;                           // this+0x38
    std::string                           mSerializationId;                           // this+0x58
    std::unique_ptr<class IRequestAction> mRequestAction;                             // this+0x78
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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
