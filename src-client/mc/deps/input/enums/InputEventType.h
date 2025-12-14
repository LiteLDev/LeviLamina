#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class InputEventType : schar {
    Button                          = 0,
    PointerLocation                 = 1,
    TextChar                        = 2,
    CaretLocation                   = 3,
    Direction                       = 4,
    Vector                          = 5,
    RawInput                        = 6,
    AddClient                       = 7,
    ChangeUser                      = 8,
    ControllerConnectionStateChange = 9,
    PointerLocationWithId           = 10,
    ClearPointerLocationWithId      = 11,
    ClearPointerLocations           = 12,
    TouchPadTouch                   = 13,
    CustomZone                      = 14,
    ControlOption                   = 15,
    NumberOfEnabledControlOptions   = 16,
    OverlappingControls             = 17,
    PotentialOverlappingControls    = 18,
};
