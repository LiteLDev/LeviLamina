#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkLoadedRequest {

public:
    // prevent constructor by default
    ChunkLoadedRequest& operator=(ChunkLoadedRequest const&) = delete;
    ChunkLoadedRequest(ChunkLoadedRequest const&)            = delete;
    ChunkLoadedRequest()                                     = delete;

public:
    /**
     * @symbol ??0ChunkLoadedRequest\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ChunkLoadedRequest(class ChunkLoadedRequest&&); // NOLINT
    /**
     * @symbol
     * ??0ChunkLoadedRequest\@\@QEAA\@AEBUBounds\@\@V?$unique_ptr\@VIRequestAction\@\@U?$default_delete\@VIRequestAction\@\@\@std\@\@\@std\@\@_N2\@Z
     */
    MCAPI ChunkLoadedRequest(struct Bounds const&, std::unique_ptr<class IRequestAction>, bool, bool); // NOLINT
    /**
     * @symbol
     * ??0ChunkLoadedRequest\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VIRequestAction\@\@U?$default_delete\@VIRequestAction\@\@\@std\@\@\@2\@_N\@Z
     */
    MCAPI ChunkLoadedRequest(std::string const&, std::unique_ptr<class IRequestAction>, bool); // NOLINT
    /**
     * @symbol ?areAllChunksLoaded\@ChunkLoadedRequest\@\@QEBA?AW4ChunksLoadedStatus\@\@AEAVDimension\@\@UTick\@\@\@Z
     */
    MCAPI enum class ChunksLoadedStatus areAllChunksLoaded(class Dimension&, struct Tick) const; // NOLINT
    /**
     * @symbol ?areaContainsChunk\@ChunkLoadedRequest\@\@QEBA_NAEBVLevelChunk\@\@\@Z
     */
    MCAPI bool areaContainsChunk(class LevelChunk const&) const; // NOLINT
    /**
     * @symbol ?serialize\@ChunkLoadedRequest\@\@QEAA?AVCompoundTag\@\@W4ChunkRequestListType\@\@\@Z
     */
    MCAPI class CompoundTag serialize(enum class ChunkRequestListType); // NOLINT
    /**
     * @symbol ??1ChunkLoadedRequest\@\@QEAA\@XZ
     */
    MCAPI ~ChunkLoadedRequest(); // NOLINT
    /**
     * @symbol
     * ?load\@ChunkLoadedRequest\@\@SA?AUDeserializedChunkLoadedRequest\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@AEAVICommandOriginLoader\@\@0\@Z
     */
    MCAPI static struct DeserializedChunkLoadedRequest
    load(std::string const&, class CompoundTag const&, class ICommandOriginLoader&, std::string const&); // NOLINT

    // private:
    /**
     * @symbol ?_getTickingArea\@ChunkLoadedRequest\@\@AEBAPEBVITickingAreaView\@\@AEBVDimension\@\@\@Z
     */
    MCAPI class ITickingAreaView const* _getTickingArea(class Dimension const&) const; // NOLINT

private:
};
