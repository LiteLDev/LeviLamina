/**
 * @file  ChunkLoadedRequest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChunkLoadedRequest.
 *
 */
class ChunkLoadedRequest {

#define AFTER_EXTRA
// Add Member There
    char filler[128];

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKLOADEDREQUEST
public:
    class ChunkLoadedRequest& operator=(class ChunkLoadedRequest const &) = delete;
    ChunkLoadedRequest(class ChunkLoadedRequest const &) = delete;
    ChunkLoadedRequest() = delete;
#endif

public:
    /**
     * @hash   -246310923
     * @symbol ??0ChunkLoadedRequest@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VIRequestAction@@U?$default_delete@VIRequestAction@@@std@@@2@_N@Z
     */
    MCAPI ChunkLoadedRequest(std::string const &, std::unique_ptr<class IRequestAction>, bool);
    /**
     * @hash   229060410
     * @symbol ??0ChunkLoadedRequest@@QEAA@AEBUBounds@@V?$unique_ptr@VIRequestAction@@U?$default_delete@VIRequestAction@@@std@@@std@@_N2@Z
     */
    MCAPI ChunkLoadedRequest(struct Bounds const &, std::unique_ptr<class IRequestAction>, bool, bool);
    /**
     * @hash   2027131395
     * @symbol ??0ChunkLoadedRequest@@QEAA@$$QEAV0@@Z
     */
    MCAPI ChunkLoadedRequest(class ChunkLoadedRequest &&);
    /**
     * @hash   525536338
     * @symbol ?areAllChunksLoaded@ChunkLoadedRequest@@QEBA?AW4ChunksLoadedStatus@@AEAVDimension@@UTick@@@Z
     */
    MCAPI enum ChunksLoadedStatus areAllChunksLoaded(class Dimension &, struct Tick) const;
    /**
     * @hash   197948031
     * @symbol ?areaContainsChunk@ChunkLoadedRequest@@QEBA_NAEBVLevelChunk@@@Z
     */
    MCAPI bool areaContainsChunk(class LevelChunk const &) const;
    /**
     * @hash   -12380095
     * @symbol ?executeAction@ChunkLoadedRequest@@QEAAXAEAVServerLevel@@AEAVDimension@@@Z
     */
    MCAPI void executeAction(class ServerLevel &, class Dimension &);
    /**
     * @hash   -793673538
     * @symbol ?getSerializationId@ChunkLoadedRequest@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getSerializationId() const;
    /**
     * @hash   -815552198
     * @symbol ?isValid@ChunkLoadedRequest@@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   -1692280353
     * @symbol ?serialize@ChunkLoadedRequest@@QEAA?AVCompoundTag@@W4ChunkRequestListType@@@Z
     */
    MCAPI class CompoundTag serialize(enum ChunkRequestListType);
    /**
     * @hash   -1261267796
     * @symbol ?setSerializationId@ChunkLoadedRequest@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setSerializationId(std::string const &);
    /**
     * @hash   1591930217
     * @symbol ?tickingAreaMatches@ChunkLoadedRequest@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool tickingAreaMatches(std::string const &) const;
    /**
     * @hash   1129196215
     * @symbol ??1ChunkLoadedRequest@@QEAA@XZ
     */
    MCAPI ~ChunkLoadedRequest();
    /**
     * @hash   -528103491
     * @symbol ?isValidTag@ChunkLoadedRequest@@SA_NAEBVCompoundTag@@@Z
     */
    MCAPI static bool isValidTag(class CompoundTag const &);
    /**
     * @hash   -439436075
     * @symbol ?load@ChunkLoadedRequest@@SA?AUDeserializedChunkLoadedRequest@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@AEAVICommandOriginLoader@@0@Z
     */
    MCAPI static struct DeserializedChunkLoadedRequest load(std::string const &, class CompoundTag const &, class ICommandOriginLoader &, std::string const &);

//private:
    /**
     * @hash   -1838203749
     * @symbol ?_getTickingArea@ChunkLoadedRequest@@AEBAPEBVITickingAreaView@@AEBVDimension@@@Z
     */
    MCAPI class ITickingAreaView const * _getTickingArea(class Dimension const &) const;

private:

};