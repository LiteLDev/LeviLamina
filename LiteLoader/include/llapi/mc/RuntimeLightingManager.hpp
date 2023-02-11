/**
 * @file  RuntimeLightingManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1777788872
     * @symbol  ??0RuntimeLightingManager\@\@QEAA\@AEAVDimension\@\@\@Z
     */
    MCAPI RuntimeLightingManager(class Dimension &);
    /**
     * @hash   2008479093
     * @symbol  ?flushRunTimeLighting\@RuntimeLightingManager\@\@QEAAXXZ
     */
    MCAPI void flushRunTimeLighting();
    /**
     * @hash   -852054426
     * @symbol  ?updateBlockLight\@RuntimeLightingManager\@\@QEAAXAEBVBlockPos\@\@UBrightness\@\@111_N\@Z
     */
    MCAPI void updateBlockLight(class BlockPos const &, struct Brightness, struct Brightness, struct Brightness, struct Brightness, bool);
    /**
     * @hash   -1757086717
     * @symbol  ??1RuntimeLightingManager\@\@QEAA\@XZ
     */
    MCAPI ~RuntimeLightingManager();

//private:
    /**
     * @hash   -253355312
     * @symbol  ?_checkForRelightingTask\@RuntimeLightingManager\@\@AEAAXV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI void _checkForRelightingTask(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);
    /**
     * @hash   794729537
     * @symbol  ?_getListOfChunksWithPlayerDistance\@RuntimeLightingManager\@\@AEAAXXZ
     */
    MCAPI void _getListOfChunksWithPlayerDistance();
    /**
     * @hash   855628874
     * @symbol  ?_relightChunks\@RuntimeLightingManager\@\@AEAAXV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI void _relightChunks(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);
    /**
     * @hash   -1340711138
     * @symbol  ?_removeProcessedSubchunks\@RuntimeLightingManager\@\@AEAAXXZ
     */
    MCAPI void _removeProcessedSubchunks();

private:

};