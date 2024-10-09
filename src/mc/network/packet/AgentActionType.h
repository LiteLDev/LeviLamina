#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AgentActionType : int {
    Attack            = 0x1,
    Collect           = 0x2,
    Destroy           = 0x3,
    DetectRedstone    = 0x4,
    DetectObstacle    = 0x5,
    Drop              = 0x6,
    DropAll           = 0x7,
    Inspect           = 0x8,
    InspectData       = 0x9,
    InspectItemCount  = 0xA,
    InspectItemDetail = 0xB,
    InspectItemSpace  = 0xC,
    Interact          = 0xD,
    Move              = 0xE,
    PlaceBlock        = 0xF,
    Till              = 0x10,
    TransferItemTo    = 0x11,
    Turn              = 0x12,
};
