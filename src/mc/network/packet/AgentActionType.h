#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AgentActionType : int {
    Attack            = 1,
    Collect           = 2,
    Destroy           = 3,
    DetectRedstone    = 4,
    DetectObstacle    = 5,
    Drop              = 6,
    DropAll           = 7,
    Inspect           = 8,
    InspectData       = 9,
    InspectItemCount  = 10,
    InspectItemDetail = 11,
    InspectItemSpace  = 12,
    Interact          = 13,
    Move              = 14,
    PlaceBlock        = 15,
    Till              = 16,
    TransferItemTo    = 17,
    Turn              = 18,
};
