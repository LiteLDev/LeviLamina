/**
 * @file  ChunkViewSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ChunkSource.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChunkViewSource.
 *
 */
class ChunkViewSource : public ChunkSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKVIEWSOURCE
public:
    class ChunkViewSource& operator=(class ChunkViewSource const &) = delete;
    ChunkViewSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ChunkViewSource();
    /**
     * @hash   -1285836477
     * @vftbl  3
     * @symbol ?getExistingChunk@ChunkViewSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@@Z
     */
    virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const &);
    /**
     * @hash   904820658
     * @vftbl  4
     * @symbol ?getRandomChunk@ChunkViewSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEAVRandom@@@Z
     */
    virtual class std::shared_ptr<class LevelChunk> getRandomChunk(class Random &);
    /**
     * @hash   1255953953
     * @vftbl  7
     * @symbol ?createNewChunk@ChunkViewSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@W4LoadMode@ChunkSource@@_N@Z
     */
    virtual class std::shared_ptr<class LevelChunk> createNewChunk(class ChunkPos const &, enum class ChunkSource::LoadMode, bool);
    /**
     * @hash   -788662285
     * @vftbl  18
     * @symbol ?acquireDiscarded@ChunkViewSource@@UEAAXV?$unique_ptr@VLevelChunk@@ULevelChunkFinalDeleter@@@std@@@Z
     */
    virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);
    /**
     * @hash   -2124244129
     * @vftbl  22
     * @symbol ?isWithinWorldLimit@ChunkViewSource@@UEBA_NAEBVChunkPos@@@Z
     */
    virtual bool isWithinWorldLimit(class ChunkPos const &) const;
    /**
     * @hash   -700783151
     * @symbol ??0ChunkViewSource@@QEAA@AEBV0@@Z
     */
    MCAPI ChunkViewSource(class ChunkViewSource const &);
    /**
     * @hash   -89310116
     * @symbol ??0ChunkViewSource@@QEAA@AEAVChunkSource@@W4LoadMode@1@@Z
     */
    MCAPI ChunkViewSource(class ChunkSource &, enum class ChunkSource::LoadMode);
    /**
     * @hash   -1613025286
     * @symbol ??0ChunkViewSource@@QEAA@AEAVChunkSource@@AEAV?$LevelChunkGridAreaElement@V?$weak_ptr@VLevelChunk@@@std@@@@AEBUBounds@@@Z
     */
    MCAPI ChunkViewSource(class ChunkSource &, class LevelChunkGridAreaElement<class std::weak_ptr<class LevelChunk>> &, struct Bounds const &);
    /**
     * @hash   1619364863
     * @symbol ?clear@ChunkViewSource@@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @hash   -1291407180
     * @symbol ?clearEntryAtChunkPos@ChunkViewSource@@QEAAXAEBVChunkPos@@@Z
     */
    MCAPI void clearEntryAtChunkPos(class ChunkPos const &);
    /**
     * @hash   -1174382852
     * @symbol ?enableBlockEntityAccess@ChunkViewSource@@QEAA?AV?$vector@VLevelChunkBlockActorAccessToken@@V?$allocator@VLevelChunkBlockActorAccessToken@@@std@@@std@@XZ
     */
    MCAPI std::vector<class LevelChunkBlockActorAccessToken> enableBlockEntityAccess();
    /**
     * @hash   -1093047182
     * @symbol ?getArea@ChunkViewSource@@QEAAAEAV?$GridArea@V?$shared_ptr@VLevelChunk@@@std@@@@XZ
     */
    MCAPI class GridArea<class std::shared_ptr<class LevelChunk>> & getArea();
    /**
     * @hash   2118436810
     * @symbol ?move@ChunkViewSource@@QEAAXAEBUBounds@@_NW4ChunkSourceViewGenerateMode@ChunkSource@@V?$function@$$A6AXV?$buffer_span_mut@V?$shared_ptr@VLevelChunk@@@std@@@@V?$buffer_span@I@@@Z@std@@UActorUniqueID@@@Z
     */
    MCAPI void move(struct Bounds const &, bool, enum class ChunkSource::ChunkSourceViewGenerateMode, class std::function<void (class buffer_span_mut<class std::shared_ptr<class LevelChunk>>, class buffer_span<unsigned int>)>, struct ActorUniqueID);
    /**
     * @hash   -311360068
     * @symbol ?move@ChunkViewSource@@QEAAXAEBVBlockPos@@0_NW4ChunkSourceViewGenerateMode@ChunkSource@@V?$function@$$A6AXV?$buffer_span_mut@V?$shared_ptr@VLevelChunk@@@std@@@@V?$buffer_span@I@@@Z@std@@UActorUniqueID@@@Z
     */
    MCAPI void move(class BlockPos const &, class BlockPos const &, bool, enum class ChunkSource::ChunkSourceViewGenerateMode, class std::function<void (class buffer_span_mut<class std::shared_ptr<class LevelChunk>>, class buffer_span<unsigned int>)>, struct ActorUniqueID);
    /**
     * @hash   2004438849
     * @symbol ?move@ChunkViewSource@@QEAAXAEBVBlockPos@@H_NW4ChunkSourceViewGenerateMode@ChunkSource@@V?$function@$$A6AXV?$buffer_span_mut@V?$shared_ptr@VLevelChunk@@@std@@@@V?$buffer_span@I@@@Z@std@@UActorUniqueID@@@Z
     */
    MCAPI void move(class BlockPos const &, int, bool, enum class ChunkSource::ChunkSourceViewGenerateMode, class std::function<void (class buffer_span_mut<class std::shared_ptr<class LevelChunk>>, class buffer_span<unsigned int>)>, struct ActorUniqueID);
    /**
     * @hash   -132113432
     * @symbol ?rebuildSpecificArea@ChunkViewSource@@QEAAXAEBUBounds@@_NV?$function@$$A6AXV?$buffer_span_mut@V?$shared_ptr@VLevelChunk@@@std@@@@V?$buffer_span@I@@@Z@std@@@Z
     */
    MCAPI void rebuildSpecificArea(struct Bounds const &, bool, class std::function<void (class buffer_span_mut<class std::shared_ptr<class LevelChunk>>, class buffer_span<unsigned int>)>);
    /**
     * @symbol ?getGenerateMode@ChunkViewSource@@SA?AW4ChunkSourceViewGenerateMode@ChunkSource@@_N0@Z
     */
    MCAPI static enum class ChunkSource::ChunkSourceViewGenerateMode getGenerateMode(bool, bool);

};