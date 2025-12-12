#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StructureBlockPaletteLoadResult : int {
    Success                                            = 0,
    MissingBlockPaletteField                           = 1,
    ExpectedCompoundTagInBlockList                     = 2,
    MissingBlockPositionDataField                      = 3,
    ExpectedNumberAsStringWhenParsingBlockPositionData = 4,
    ExpectedCompoundForBlockPositionData               = 5,
    ExpectedCompoundTagForBlockEntityData              = 6,
    ExpectedListTagForTickQueueData                    = 7,
    ExpectedCompoundTagInTickQueueData                 = 8,
};
