#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class InputEventType : schar {
    Button                          = 0,
    PointerLocation                 = 1,
    TextChar                        = 2,
    Direction                       = 3,
    Vector                          = 4,
    RawInput                        = 5,
    AddClient                       = 6,
    ChangeUser                      = 7,
    ControllerConnectionStateChange = 8,
    PointerLocationWithId           = 9,
    ClearPointerLocationWithId      = 10,
    ClearPointerLocations           = 11,
    TouchPadTouch                   = 12,
    CustomZone                      = 13,
    ControlOption                   = 14,
    NumberOfEnabledControlOptions   = 15,
    OverlappingControls             = 16,
    PotentialOverlappingControls    = 17,
};
