#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StructureLoadResult : int {
    Success                                     = 0,
    MissingFormatVersionField                   = 1,
    InvalidFormatVersion                        = 2,
    InvalidNeighborAwareBlockUpgradeVersionType = 3,
    InvalidNeighborAwareBlockUpgradeVersion     = 4,
    MissingSizeField                            = 5,
    SizeIsNot3Elements                          = 6,
    NegativeSize                                = 7,
    MissingWorldOriginField                     = 8,
    WorldOriginIsNot3Elements                   = 9,
    MissingBlockIndicesField                    = 10,
    BlockIndicesNot2Arrays                      = 11,
    BlockIndicesIsNotAList                      = 12,
    BlockIndicesListsNotSameSize                = 13,
    MismatchedSizeAndBlockIndicesSize           = 14,
    MissingPaletteField                         = 15,
    FailedToLoadPalette                         = 16,
    ExpectedCompoundTagInPaletteList            = 17,
    MissingEntitiesField                        = 18,
    ExpectedCompoundTagInEntitiesList           = 19,
};
