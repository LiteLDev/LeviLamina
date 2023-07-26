/**
 * @file  RuntimeLightingManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RuntimeLightingManager.
 *
 */
class RuntimeLightingManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RUNTIMELIGHTINGMANAGER
public:
    class RuntimeLightingManager& operator=(class RuntimeLightingManager const &) = delete;
    RuntimeLightingManager(class RuntimeLightingManager const &) = delete;
    RuntimeLightingManager() = delete;
#endif

public:
    /**
     * @symbol  ??0RuntimeLightingManager\@\@QEAA\@AEAVDimension\@\@\@Z
     */
    MCAPI RuntimeLightingManager(class Dimension &);
    /**
     * @symbol  ?flushRunTimeLighting\@RuntimeLightingManager\@\@QEAAXXZ
     */
    MCAPI void flushRunTimeLighting();
    /**
     * @symbol  ?updateBlockLight\@RuntimeLightingManager\@\@QEAAXAEBVBlockPos\@\@UBrightness\@\@111_N\@Z
     */
    MCAPI void updateBlockLight(class BlockPos const &, struct Brightness, struct Brightness, struct Brightness, struct Brightness, bool);
    /**
     * @symbol  ??1RuntimeLightingManager\@\@QEAA\@XZ
     */
    MCAPI ~RuntimeLightingManager();

//private:
    /**
     * @symbol  ?_checkForRelightingTask\@RuntimeLightingManager\@\@AEAAXV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI void _checkForRelightingTask(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);
    /**
     * @symbol  ?_getListOfChunksWithPlayerDistance\@RuntimeLightingManager\@\@AEAAXXZ
     */
    MCAPI void _getListOfChunksWithPlayerDistance();
    /**
     * @symbol  ?_relightChunks\@RuntimeLightingManager\@\@AEAAXV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI void _relightChunks(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);
    /**
     * @symbol  ?_removeProcessedSubchunks\@RuntimeLightingManager\@\@AEAAXXZ
     */
    MCAPI void _removeProcessedSubchunks();

private:

};