#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkLoadActionList {

public:
    // prevent constructor by default
    ChunkLoadActionList& operator=(ChunkLoadActionList const&) = delete;
    ChunkLoadActionList(ChunkLoadActionList const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ChunkLoadActionList\@\@QEAA\@XZ
     */
    MCAPI ChunkLoadActionList();
    /**
     * @symbol
     * ?addChunkLoadedRequest\@ChunkLoadActionList\@\@QEAAXVChunkLoadedRequest\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ChunksLoadedStatus\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI void
    addChunkLoadedRequest(class ChunkLoadedRequest, std::string const&, enum class ChunksLoadedStatus, class LevelStorage&);
    /**
     * @symbol
     * ?loadRequest\@ChunkLoadActionList\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@AEAVICommandOriginLoader\@\@0\@Z
     */
    MCAPI void
    loadRequest(std::string const&, class CompoundTag const&, class ICommandOriginLoader&, std::string const&);
    /**
     * @symbol
     * ?loadRequests\@ChunkLoadActionList\@\@QEAAXAEAVLevelStorage\@\@AEAVICommandOriginLoader\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void loadRequests(class LevelStorage&, class ICommandOriginLoader&, std::string const&);
    /**
     * @symbol
     * ?onChunkLoaded\@ChunkLoadActionList\@\@QEAAXAEAVLevelStorage\@\@AEAVChunkSource\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVLevelChunk\@\@UTick\@\@\@Z
     */
    MCAPI void
    onChunkLoaded(class LevelStorage&, class ChunkSource&, std::string const&, class LevelChunk&, struct Tick);
    /**
     * @symbol
     * ?onStaticTickingAreaAdded\@ChunkLoadActionList\@\@QEAAXAEAVLevelStorage\@\@AEAVDimension\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UTick\@\@\@Z
     */
    MCAPI void onStaticTickingAreaAdded(class LevelStorage&, class Dimension&, std::string const&, struct Tick);
    /**
     * @symbol
     * ?queueRequestOrExecuteAction\@ChunkLoadActionList\@\@QEAA?AW4QueueRequestResult\@\@VChunkLoadedRequest\@\@AEAVServerLevel\@\@AEAVLevelStorage\@\@AEAVDimension\@\@\@Z
     */
    MCAPI enum class QueueRequestResult
    queueRequestOrExecuteAction(class ChunkLoadedRequest, class ServerLevel&, class LevelStorage&, class Dimension&);
    /**
     * @symbol ?tickRequests\@ChunkLoadActionList\@\@QEAAXAEAVServerLevel\@\@AEAVDimension\@\@\@Z
     */
    MCAPI void tickRequests(class ServerLevel&, class Dimension&);
    /**
     * @symbol ??1ChunkLoadActionList\@\@QEAA\@XZ
     */
    MCAPI ~ChunkLoadActionList();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_addChunkLoadedRequest\@ChunkLoadActionList\@\@AEAAXVChunkLoadedRequest\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ChunksLoadedStatus\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI void
    _addChunkLoadedRequest(class ChunkLoadedRequest, std::string const&, enum class ChunksLoadedStatus, class LevelStorage&);
    /**
     * @symbol
     * ?_saveRequest\@ChunkLoadActionList\@\@AEAAXAEAVChunkLoadedRequest\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ChunkRequestListType\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI void
    _saveRequest(class ChunkLoadedRequest&, std::string const&, enum class ChunkRequestListType, class LevelStorage&);
    /**
     * @symbol
     * ?_updateAsyncList\@ChunkLoadActionList\@\@AEAAXAEAVLevelStorage\@\@AEAVDimension\@\@V?$function\@$$A6A?AW4ChunksLoadedStatus\@\@AEAVChunkLoadedRequest\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void
    _updateAsyncList(class LevelStorage&, class Dimension&, std::function<enum class ChunksLoadedStatus(class ChunkLoadedRequest&)>);
    /**
     * @symbol
     * ?_updateTickingList\@ChunkLoadActionList\@\@AEAAXAEAVServerLevel\@\@AEAVDimension\@\@V?$function\@$$A6A?AW4ChunksLoadedStatus\@\@AEAVChunkLoadedRequest\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void
    _updateTickingList(class ServerLevel&, class Dimension&, std::function<enum class ChunksLoadedStatus(class ChunkLoadedRequest&)>);
    // NOLINTEND
};
