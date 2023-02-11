/**
 * @file  LevelChunkGarbageCollector.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelChunkGarbageCollector.
 *
 */
class LevelChunkGarbageCollector {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKGARBAGECOLLECTOR
public:
    class LevelChunkGarbageCollector& operator=(class LevelChunkGarbageCollector const &) = delete;
    LevelChunkGarbageCollector(class LevelChunkGarbageCollector const &) = delete;
    LevelChunkGarbageCollector() = delete;
#endif

public:
    /**
     * @hash   -1071316640
     * @symbol  ??0LevelChunkGarbageCollector\@\@QEAA\@AEAVDimension\@\@\@Z
     */
    MCAPI LevelChunkGarbageCollector(class Dimension &);
    /**
     * @hash   -907980748
     * @symbol  ?acquireDiscardedChunk\@LevelChunkGarbageCollector\@\@QEAAXV?$unique_ptr\@VLevelChunk\@\@U?$default_delete\@VLevelChunk\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void acquireDiscardedChunk(std::unique_ptr<class LevelChunk>);
    /**
     * @hash   -1075757049
     * @symbol  ?getPendingDeletesCount\@LevelChunkGarbageCollector\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getPendingDeletesCount() const;
    /**
     * @hash   -954452021
     * @symbol  ??1LevelChunkGarbageCollector\@\@QEAA\@XZ
     */
    MCAPI ~LevelChunkGarbageCollector();

//protected:
    /**
     * @hash   1167291446
     * @symbol  ?flush\@LevelChunkGarbageCollector\@\@IEAAXXZ
     */
    MCAPI void flush();

protected:

};