#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

enum class DiffServCodePoint : int {
    NoChange = 4294967295,
    Default  = 0,
    Cs0      = 0,
    Cs1      = 8,
    Af11     = 10,
    Af12     = 12,
    Af13     = 14,
    Cs2      = 16,
    Af21     = 18,
    Af22     = 20,
    Af23     = 22,
    Cs3      = 24,
    Af31     = 26,
    Af32     = 28,
    Af33     = 30,
    Cs4      = 32,
    Af41     = 34,
    Af42     = 36,
    Af43     = 38,
    Cs5      = 40,
    Ef       = 46,
    Cs6      = 48,
    Cs7      = 56,
};

}
