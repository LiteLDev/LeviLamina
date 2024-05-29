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
    // symbol: ??0ChunkLoadedRequest@@QEAA@$$QEAV0@@Z
    MCAPI ChunkLoadedRequest(class ChunkLoadedRequest&&);

    // symbol:
    // ??0ChunkLoadedRequest@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VIRequestAction@@U?$default_delete@VIRequestAction@@@std@@@2@_N@Z
    MCAPI ChunkLoadedRequest(
        std::string const&                    tickingAreaName,
        std::unique_ptr<class IRequestAction> requestAction,
        bool                                  allowNonPlayerTicking
    );

    // symbol:
    // ??0ChunkLoadedRequest@@QEAA@AEBUBounds@@V?$unique_ptr@VIRequestAction@@U?$default_delete@VIRequestAction@@@std@@@std@@_N2@Z
    MCAPI ChunkLoadedRequest(
        struct Bounds const&                  bounds,
        std::unique_ptr<class IRequestAction> requestAction,
        bool                                  isCircle,
        bool                                  allowNonPlayerTicking
    );

    // symbol: ?areAllChunksLoaded@ChunkLoadedRequest@@QEBA?AW4ChunksLoadedStatus@@AEAVDimension@@UTick@@@Z
    MCAPI ::ChunksLoadedStatus areAllChunksLoaded(class Dimension& dimension, struct Tick currentLevelTick) const;

    // symbol: ?areaContainsChunk@ChunkLoadedRequest@@QEBA_NAEBVLevelChunk@@@Z
    MCAPI bool areaContainsChunk(class LevelChunk const& chunk) const;

    // symbol: ?serialize@ChunkLoadedRequest@@QEAA?AVCompoundTag@@W4ChunkRequestListType@@@Z
    MCAPI class CompoundTag serialize(::ChunkRequestListType chunkRequestListType);

    // symbol: ??1ChunkLoadedRequest@@QEAA@XZ
    MCAPI ~ChunkLoadedRequest();

    // symbol:
    // ?load@ChunkLoadedRequest@@SA?AUDeserializedChunkLoadedRequest@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@AEAVICommandOriginLoader@@0@Z
    MCAPI static struct DeserializedChunkLoadedRequest load(
        std::string const&          key,
        class CompoundTag const&    tag,
        class ICommandOriginLoader& loader,
        std::string const&          dimensionPrefix
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getTickingArea@ChunkLoadedRequest@@AEBAPEBVITickingAreaView@@AEBVDimension@@@Z
    MCAPI class ITickingAreaView const* _getTickingArea(class Dimension const& dimension) const;

    // NOLINTEND
};
