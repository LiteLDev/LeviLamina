#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RuntimeLightingManager {
public:
    // RuntimeLightingManager inner types declare
    // clang-format off
    struct RuntimeLightingSubchunkList;
    // clang-format on

    // RuntimeLightingManager inner types define
    struct RuntimeLightingSubchunkList {

    public:
        // prevent constructor by default
        RuntimeLightingSubchunkList& operator=(RuntimeLightingSubchunkList const&) = delete;
        RuntimeLightingSubchunkList(RuntimeLightingSubchunkList const&)            = delete;
        RuntimeLightingSubchunkList()                                              = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??1RuntimeLightingSubchunkList\@RuntimeLightingManager\@\@QEAA\@XZ
         */
        MCAPI ~RuntimeLightingSubchunkList();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    RuntimeLightingManager& operator=(RuntimeLightingManager const&) = delete;
    RuntimeLightingManager(RuntimeLightingManager const&)            = delete;
    RuntimeLightingManager()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0RuntimeLightingManager\@\@QEAA\@AEAVDimension\@\@\@Z
     */
    MCAPI RuntimeLightingManager(class Dimension&);
    /**
     * @symbol ?flushRunTimeLighting\@RuntimeLightingManager\@\@QEAAXXZ
     */
    MCAPI void flushRunTimeLighting();
    /**
     * @symbol ?updateBlockLight\@RuntimeLightingManager\@\@QEAAXAEBVBlockPos\@\@UBrightness\@\@111_N\@Z
     */
    MCAPI void updateBlockLight(
        class BlockPos const&,
        struct Brightness,
        struct Brightness,
        struct Brightness,
        struct Brightness,
        bool
    );
    /**
     * @symbol ??1RuntimeLightingManager\@\@QEAA\@XZ
     */
    MCAPI ~RuntimeLightingManager();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_checkForRelightingTask\@RuntimeLightingManager\@\@AEAAXV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI void _checkForRelightingTask(std::chrono::nanoseconds);
    /**
     * @symbol ?_getListOfChunksWithPlayerDistance\@RuntimeLightingManager\@\@AEAAXXZ
     */
    MCAPI void _getListOfChunksWithPlayerDistance();
    /**
     * @symbol
     * ?_relightChunks\@RuntimeLightingManager\@\@AEAAXV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI void _relightChunks(std::chrono::nanoseconds);
    /**
     * @symbol ?_removeProcessedSubchunks\@RuntimeLightingManager\@\@AEAAXXZ
     */
    MCAPI void _removeProcessedSubchunks();
    // NOLINTEND
};
