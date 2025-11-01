#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DateHelper {

enum class DurationFormat : int {
    NotLocalized = 0,
    LocalizedAbbreviated3Char = 1,
    LocalizedAbbreviated1Char = 2,
    LocalizedNotAbbreviated = 3,
};

}
