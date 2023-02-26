/**
 * @file  ChunkLoadedRequest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ??0ChunkLoadedRequest\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VIRequestAction\@\@U?$default_delete\@VIRequestAction\@\@\@std\@\@\@2\@_N\@Z
     */
    MCAPI ChunkLoadedRequest(std::string const &, std::unique_ptr<class IRequestAction>, bool);
    /**
     * @symbol  ??0ChunkLoadedRequest\@\@QEAA\@AEBUBounds\@\@V?$unique_ptr\@VIRequestAction\@\@U?$default_delete\@VIRequestAction\@\@\@std\@\@\@std\@\@_N2\@Z
     */
    MCAPI ChunkLoadedRequest(struct Bounds const &, std::unique_ptr<class IRequestAction>, bool, bool);
    /**
     * @symbol  ??0ChunkLoadedRequest\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ChunkLoadedRequest(class ChunkLoadedRequest &&);
    /**
     * @symbol  ?areAllChunksLoaded\@ChunkLoadedRequest\@\@QEBA?AW4ChunksLoadedStatus\@\@AEAVDimension\@\@UTick\@\@\@Z
     */
    MCAPI enum class ChunksLoadedStatus areAllChunksLoaded(class Dimension &, struct Tick) const;
    /**
     * @symbol  ?areaContainsChunk\@ChunkLoadedRequest\@\@QEBA_NAEBVLevelChunk\@\@\@Z
     */
    MCAPI bool areaContainsChunk(class LevelChunk const &) const;
    /**
     * @symbol  ?executeAction\@ChunkLoadedRequest\@\@QEAAXAEAVServerLevel\@\@AEAVDimension\@\@\@Z
     */
    MCAPI void executeAction(class ServerLevel &, class Dimension &);
    /**
     * @symbol  ?getSerializationId\@ChunkLoadedRequest\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getSerializationId() const;
    /**
     * @symbol  ?isValid\@ChunkLoadedRequest\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol  ?serialize\@ChunkLoadedRequest\@\@QEAA?AVCompoundTag\@\@W4ChunkRequestListType\@\@\@Z
     */
    MCAPI class CompoundTag serialize(enum class ChunkRequestListType);
    /**
     * @symbol  ?setSerializationId\@ChunkLoadedRequest\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setSerializationId(std::string const &);
    /**
     * @symbol  ?tickingAreaMatches\@ChunkLoadedRequest\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool tickingAreaMatches(std::string const &) const;
    /**
     * @symbol  ??1ChunkLoadedRequest\@\@QEAA\@XZ
     */
    MCAPI ~ChunkLoadedRequest();
    /**
     * @symbol  ?isValidTag\@ChunkLoadedRequest\@\@SA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI static bool isValidTag(class CompoundTag const &);
    /**
     * @symbol  ?load\@ChunkLoadedRequest\@\@SA?AUDeserializedChunkLoadedRequest\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@AEAVICommandOriginLoader\@\@0\@Z
     */
    MCAPI static struct DeserializedChunkLoadedRequest load(std::string const &, class CompoundTag const &, class ICommandOriginLoader &, std::string const &);

//private:
    /**
     * @symbol  ?_getTickingArea\@ChunkLoadedRequest\@\@AEBAPEBVITickingAreaView\@\@AEBVDimension\@\@\@Z
     */
    MCAPI class ITickingAreaView const * _getTickingArea(class Dimension const &) const;

private:

};