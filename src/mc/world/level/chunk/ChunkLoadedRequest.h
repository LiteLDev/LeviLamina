#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/Bounds.h"
#include "mc/world/level/chunk/IRequestAction.h"

class ChunkLoadedRequest {

public:
    ChunkLoadedRequest() = delete;

    enum class AreaType : char {
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
    /**
     * @symbol ??0ChunkLoadedRequest\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ChunkLoadedRequest(class ChunkLoadedRequest&&);
    /**
     * @symbol
     * ??0ChunkLoadedRequest\@\@QEAA\@AEBUBounds\@\@V?$unique_ptr\@VIRequestAction\@\@U?$default_delete\@VIRequestAction\@\@\@std\@\@\@std\@\@_N2\@Z
     */
    MCAPI ChunkLoadedRequest(struct Bounds const&, std::unique_ptr<class IRequestAction>, bool, bool);
    /**
     * @symbol
     * ??0ChunkLoadedRequest\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VIRequestAction\@\@U?$default_delete\@VIRequestAction\@\@\@std\@\@\@2\@_N\@Z
     */
    MCAPI ChunkLoadedRequest(std::string const&, std::unique_ptr<class IRequestAction>, bool);
    /**
     * @symbol ?areAllChunksLoaded\@ChunkLoadedRequest\@\@QEBA?AW4ChunksLoadedStatus\@\@AEAVDimension\@\@UTick\@\@\@Z
     */
    MCAPI enum class ChunksLoadedStatus areAllChunksLoaded(class Dimension&, struct Tick) const;
    /**
     * @symbol ?areaContainsChunk\@ChunkLoadedRequest\@\@QEBA_NAEBVLevelChunk\@\@\@Z
     */
    MCAPI bool areaContainsChunk(class LevelChunk const&) const;
    /**
     * @symbol ?serialize\@ChunkLoadedRequest\@\@QEAA?AVCompoundTag\@\@W4ChunkRequestListType\@\@\@Z
     */
    MCAPI class CompoundTag serialize(enum class ChunkRequestListType);
    /**
     * @symbol ??1ChunkLoadedRequest\@\@QEAA\@XZ
     */
    MCAPI ~ChunkLoadedRequest();
    /**
     * @symbol
     * ?load\@ChunkLoadedRequest\@\@SA?AUDeserializedChunkLoadedRequest\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@AEAVICommandOriginLoader\@\@0\@Z
     */
    MCAPI static struct DeserializedChunkLoadedRequest
    load(std::string const&, class CompoundTag const&, class ICommandOriginLoader&, std::string const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_getTickingArea\@ChunkLoadedRequest\@\@AEBAPEBVITickingAreaView\@\@AEBVDimension\@\@\@Z
     */
    MCAPI class ITickingAreaView const* _getTickingArea(class Dimension const&) const;
    // NOLINTEND
};
