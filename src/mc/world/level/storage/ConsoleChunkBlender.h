#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ConsoleChunkBlender {
public:
    // ConsoleChunkBlender inner types define
    enum class BlenderMode {};

    enum class ShiftBlockTypes {};

public:
    // prevent constructor by default
    ConsoleChunkBlender& operator=(ConsoleChunkBlender const&);
    ConsoleChunkBlender(ConsoleChunkBlender const&);
    ConsoleChunkBlender();

public:
    // NOLINTBEGIN
    // symbol: ??1ConsoleChunkBlender@@QEAA@XZ
    MCAPI ~ConsoleChunkBlender();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_blendChunkEnd4J@ConsoleChunkBlender@@IEAAXAEAVLevelChunk@@0@Z
    MCAPI void _blendChunkEnd4J(class LevelChunk& generatedChunk, class LevelChunk& lc);

    // symbol: ?_blendChunkNether4J@ConsoleChunkBlender@@IEAAXAEAVLevelChunk@@0@Z
    MCAPI void _blendChunkNether4J(class LevelChunk& generatedChunk, class LevelChunk& lc);

    // symbol: ?_blendChunkOverworld@ConsoleChunkBlender@@IEAAXAEAVLevelChunk@@0W4ShiftBlockTypes@1@@Z
    MCAPI void _blendChunkOverworld(
        class LevelChunk& generatedChunk,
        class LevelChunk& lc,
        ::ConsoleChunkBlender::ShiftBlockTypes
    );

    // symbol: ?_copyColumnFromGeneratedChunkNether@ConsoleChunkBlender@@IEAAXAEAVLevelChunk@@0HH@Z
    MCAPI void
    _copyColumnFromGeneratedChunkNether(class LevelChunk& generatedChunk, class LevelChunk& lc, int x, int z);

    // symbol:
    // ?_copyColumnFromGeneratedChunkOverworld@ConsoleChunkBlender@@IEAAXAEAVLevelChunk@@0HHW4ShiftBlockTypes@1@@Z
    MCAPI void _copyColumnFromGeneratedChunkOverworld(
        class LevelChunk& generatedChunk,
        class LevelChunk& lc,
        int               x,
        int               z,
        ::ConsoleChunkBlender::ShiftBlockTypes
    );

    // symbol:
    // ?_findTopMostWaterHeight@ConsoleChunkBlender@@IEAA?AVChunkLocalHeight@@AEAVLevelChunk@@HHAEBV?$unordered_set@PEBVBlockLegacy@@U?$hash@PEBVBlockLegacy@@@std@@U?$equal_to@PEBVBlockLegacy@@@3@V?$allocator@PEBVBlockLegacy@@@3@@std@@@Z
    MCAPI class ChunkLocalHeight
    _findTopMostWaterHeight(class LevelChunk& lc, int x, int z, std::unordered_set<class BlockLegacy const*> const&);

    // symbol: ?_prepInterpTable@ConsoleChunkBlender@@IEAAXXZ
    MCAPI void _prepInterpTable();

    // symbol:
    // ?_shiftColumnBySetBlocks@ConsoleChunkBlender@@IEAAXAEAVLevelChunk@@HHH_NVChunkLocalHeight@@W4ShiftBlockTypes@1@AEBUOverworldBlendRules@@@Z
    MCAPI void
    _shiftColumnBySetBlocks(class LevelChunk& lc, int x, int z, int adj, bool, class ChunkLocalHeight, ::ConsoleChunkBlender::ShiftBlockTypes, struct OverworldBlendRules const&);

    // NOLINTEND
};
