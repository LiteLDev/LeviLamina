#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StructureLoadResult : int {
    Success                           = 0,
    MissingFormatVersionField         = 1,
    InvalidFormatVersion              = 2,
    MissingSizeField                  = 3,
    SizeIsNot3Elements                = 4,
    NegativeSize                      = 5,
    MissingWorldOriginField           = 6,
    WorldOriginIsNot3Elements         = 7,
    MissingBlockIndicesField          = 8,
    BlockIndicesNot2Arrays            = 9,
    BlockIndicesIsNotAList            = 10,
    BlockIndicesListsNotSameSize      = 11,
    MismatchedSizeAndBlockIndicesSize = 12,
    MissingPaletteField               = 13,
    FailedToLoadPalette               = 14,
    ExpectedCompoundTagInPaletteList  = 15,
    MissingEntitiesField              = 16,
    ExpectedCompoundTagInEntitiesList = 17,
};
