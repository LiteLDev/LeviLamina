/**
 * @file  ChunkLoadActionList.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChunkLoadActionList.
 *
 */
class ChunkLoadActionList {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKLOADACTIONLIST
public:
    class ChunkLoadActionList& operator=(class ChunkLoadActionList const &) = delete;
    ChunkLoadActionList(class ChunkLoadActionList const &) = delete;
#endif

public:
    /**
     * @hash   47324467
     * @symbol ??0ChunkLoadActionList@@QEAA@XZ
     */
    MCAPI ChunkLoadActionList();
    /**
     * @hash   125627663
     * @symbol ?addChunkLoadedRequest@ChunkLoadActionList@@QEAAXVChunkLoadedRequest@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ChunksLoadedStatus@@AEAVLevelStorage@@@Z
     */
    MCAPI void addChunkLoadedRequest(class ChunkLoadedRequest, std::string const &, enum class ChunksLoadedStatus, class LevelStorage &);
    /**
     * @hash   1565723122
     * @symbol ?loadRequests@ChunkLoadActionList@@QEAAXAEAVLevelStorage@@AEAVICommandOriginLoader@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void loadRequests(class LevelStorage &, class ICommandOriginLoader &, std::string const &);
    /**
     * @hash   -941550906
     * @symbol ?onChunkLoaded@ChunkLoadActionList@@QEAAXAEAVLevelStorage@@AEAVChunkSource@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVLevelChunk@@UTick@@@Z
     */
    MCAPI void onChunkLoaded(class LevelStorage &, class ChunkSource &, std::string const &, class LevelChunk &, struct Tick);
    /**
     * @hash   -1874119521
     * @symbol ?onStaticTickingAreaAdded@ChunkLoadActionList@@QEAAXAEAVLevelStorage@@AEAVDimension@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTick@@@Z
     */
    MCAPI void onStaticTickingAreaAdded(class LevelStorage &, class Dimension &, std::string const &, struct Tick);
    /**
     * @hash   -1092931576
     * @symbol ?queueRequestOrExecuteAction@ChunkLoadActionList@@QEAA?AW4QueueRequestResult@@VChunkLoadedRequest@@AEAVServerLevel@@AEAVLevelStorage@@AEAVDimension@@@Z
     */
    MCAPI enum class QueueRequestResult queueRequestOrExecuteAction(class ChunkLoadedRequest, class ServerLevel &, class LevelStorage &, class Dimension &);
    /**
     * @hash   -1585312045
     * @symbol ?tickRequests@ChunkLoadActionList@@QEAAXAEAVServerLevel@@AEAVDimension@@@Z
     */
    MCAPI void tickRequests(class ServerLevel &, class Dimension &);
    /**
     * @hash   1948703779
     * @symbol ??1ChunkLoadActionList@@QEAA@XZ
     */
    MCAPI ~ChunkLoadActionList();

//private:
    /**
     * @hash   1694793360
     * @symbol ?_addChunkLoadedRequest@ChunkLoadActionList@@AEAAXVChunkLoadedRequest@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ChunksLoadedStatus@@AEAVLevelStorage@@@Z
     */
    MCAPI void _addChunkLoadedRequest(class ChunkLoadedRequest, std::string const &, enum class ChunksLoadedStatus, class LevelStorage &);
    /**
     * @hash   -528156408
     * @symbol ?_saveRequest@ChunkLoadActionList@@AEAAXAEAVChunkLoadedRequest@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ChunkRequestListType@@AEAVLevelStorage@@@Z
     */
    MCAPI void _saveRequest(class ChunkLoadedRequest &, std::string const &, enum class ChunkRequestListType, class LevelStorage &);
    /**
     * @hash   1954270088
     * @symbol ?_updateAsyncList@ChunkLoadActionList@@AEAAXAEAVLevelStorage@@AEAVDimension@@V?$function@$$A6A?AW4ChunksLoadedStatus@@AEAVChunkLoadedRequest@@@Z@std@@@Z
     */
    MCAPI void _updateAsyncList(class LevelStorage &, class Dimension &, class std::function<enum class ChunksLoadedStatus (class ChunkLoadedRequest &)>);
    /**
     * @hash   966651445
     * @symbol ?_updateTickingList@ChunkLoadActionList@@AEAAXAEAVServerLevel@@AEAVDimension@@V?$function@$$A6A?AW4ChunksLoadedStatus@@AEAVChunkLoadedRequest@@@Z@std@@@Z
     */
    MCAPI void _updateTickingList(class ServerLevel &, class Dimension &, class std::function<enum class ChunksLoadedStatus (class ChunkLoadedRequest &)>);

private:

};