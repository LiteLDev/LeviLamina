#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class OpCode : uchar {
    Continuation = 0,
    NonControlText = 1,
    NonControlBinary = 2,
    NonControlReserved1 = 3,
    NonControlReserved2 = 4,
    NonControlReserved3 = 5,
    NonControlReserved4 = 6,
    NonControlReserved5 = 7,
    ControlClose = 8,
    ControlPing = 9,
    ControlPong = 10,
    ControlReserved1 = 11,
    ControlReserved2 = 12,
    ControlReserved3 = 13,
    ControlReserved4 = 14,
    ControlReserved5 = 15,
};
