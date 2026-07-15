#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PerlinSimplexNoise;
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
};
