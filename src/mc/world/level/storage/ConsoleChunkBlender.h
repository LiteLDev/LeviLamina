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
    MCAPI ~ConsoleChunkBlender();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _blendChunkEnd4J(class LevelChunk& generatedChunk, class LevelChunk& lc);

    MCAPI void _blendChunkNether4J(class LevelChunk& generatedChunk, class LevelChunk& lc);

    MCAPI void _blendChunkOverworld(
        class LevelChunk& generatedChunk,
        class LevelChunk& lc,
        ::ConsoleChunkBlender::ShiftBlockTypes
    );

    MCAPI void
    _copyColumnFromGeneratedChunkNether(class LevelChunk& generatedChunk, class LevelChunk& lc, int x, int z);

    MCAPI void _copyColumnFromGeneratedChunkOverworld(
        class LevelChunk& generatedChunk,
        class LevelChunk& lc,
        int               x,
        int               z,
        ::ConsoleChunkBlender::ShiftBlockTypes
    );

    MCAPI class ChunkLocalHeight
    _findTopMostWaterHeight(class LevelChunk& lc, int x, int z, std::unordered_set<class BlockLegacy const*> const&);

    MCAPI void _prepInterpTable();

    MCAPI void
    _shiftColumnBySetBlocks(class LevelChunk& lc, int x, int z, int adj, bool, class ChunkLocalHeight, ::ConsoleChunkBlender::ShiftBlockTypes, struct OverworldBlendRules const&);

    // NOLINTEND
};
