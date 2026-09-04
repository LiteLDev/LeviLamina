#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockType;
class ChunkLocalHeight;
class LevelChunk;
class PerlinSimplexNoise;
struct OverworldBlendRules;
// clang-format on

class ConsoleChunkBlender {
public:
    // ConsoleChunkBlender inner types define
    enum class BlenderMode : int {
        None                    = 0,
        Overworld4J             = 1,
        OverworldCliffsAndCaves = 2,
        Nether4J                = 3,
        NetherUpdate            = 4,
        End4J                   = 5,
    };

    enum class ShiftBlockTypes : int {
        ConsoleBlend      = 0,
        TerrainGenChanged = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinSimplexNoise>> mConversionBlendNoise;
    ::ll::TypedStorage<4, 16, float[2][2]>                            mInterpCorners;
    ::ll::TypedStorage<4, 1024, float[16][16]>                        mInterpTable;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _blendChunkOverworld(
        ::LevelChunk&                                generatedChunk,
        ::LevelChunk&                                lc,
        ::ConsoleChunkBlender::ShiftBlockTypes const shiftBlockType
    );

    MCNAPI ::ChunkLocalHeight _findTopMostWaterHeight(
        ::LevelChunk&                                   lc,
        int                                             x,
        int                                             z,
        ::std::unordered_set<::BlockType const*> const& waterBlocks
    );

    MCNAPI void _prepInterpTable();

    MCNAPI void _shiftColumnBySetBlocks(
        ::LevelChunk&                                lc,
        int                                          x,
        int                                          z,
        int                                          adj,
        bool                                         isSeaBlock,
        ::ChunkLocalHeight const                     topSeaBlockHeight,
        ::ConsoleChunkBlender::ShiftBlockTypes const shiftBlockType,
        ::OverworldBlendRules const&                 blendRules
    );
    // NOLINTEND
};
