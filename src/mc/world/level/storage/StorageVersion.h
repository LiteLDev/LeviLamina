#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StorageVersion : int {
    Unknown                          = 0x0,
    OldV1                            = 0x1,
    OldV2                            = 0x2,
    OldV3                            = 0x3,
    LevelDB1                         = 0x4,
    LevelDBSubChunks                 = 0x5,
    LevelDBSubChunkRawZip            = 0x6,
    LevelDBPaletted1                 = 0x7,
    LevelDBPalettedMultiBlockStorage = 0x8,
    LevelDataUpgradedSeed            = 0x9,
    LevelDataStrictSize              = 0xA,
};
