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
        RuntimeLightingSubchunkList& operator=(RuntimeLightingSubchunkList const&);
        RuntimeLightingSubchunkList(RuntimeLightingSubchunkList const&);
        RuntimeLightingSubchunkList();

    public:
        // NOLINTBEGIN
        // symbol: ??1RuntimeLightingSubchunkList@RuntimeLightingManager@@QEAA@XZ
        MCAPI ~RuntimeLightingSubchunkList();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RuntimeLightingManager& operator=(RuntimeLightingManager const&);
    RuntimeLightingManager(RuntimeLightingManager const&);
    RuntimeLightingManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RuntimeLightingManager@@UEAA@XZ
    virtual ~RuntimeLightingManager() = default;

    // symbol: ??0RuntimeLightingManager@@QEAA@AEAVDimension@@@Z
    MCAPI explicit RuntimeLightingManager(class Dimension& dimension);

    // symbol: ?flushRunTimeLighting@RuntimeLightingManager@@QEAAXXZ
    MCAPI void flushRunTimeLighting();

    // symbol: ?updateBlockLight@RuntimeLightingManager@@QEAAXAEBVBlockPos@@UBrightness@@111_N@Z
    MCAPI void updateBlockLight(
        class BlockPos const& blockPos,
        struct Brightness     oldBrightness,
        struct Brightness     newBrightness,
        struct Brightness     oldAbsorption,
        struct Brightness     newAbsorption,
        bool                  isSkyLight
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_checkForRelightingTask@RuntimeLightingManager@@AEAAXV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z
    MCAPI void _checkForRelightingTask(std::chrono::nanoseconds timeLimit);

    // symbol: ?_getListOfChunksWithPlayerDistance@RuntimeLightingManager@@AEAAXXZ
    MCAPI void _getListOfChunksWithPlayerDistance();

    // symbol: ?_relightChunks@RuntimeLightingManager@@AEAAXV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z
    MCAPI void _relightChunks(std::chrono::nanoseconds timeLimit);

    // symbol: ?_removeProcessedSubchunks@RuntimeLightingManager@@AEAAXXZ
    MCAPI void _removeProcessedSubchunks();

    // NOLINTEND
};
