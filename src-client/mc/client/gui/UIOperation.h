#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class UIOperation : int {
    None         = 0,
    InsertBack   = 1,
    InsertFront  = 2,
    InsertAfter  = 3,
    InsertBefore = 4,
    MoveBack     = 5,
    MoveFront    = 6,
    MoveAfter    = 7,
    MoveBefore   = 8,
    Swap         = 9,
    Remove       = 10,
    Replace      = 11,
};
