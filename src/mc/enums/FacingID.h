#pragma once

#include "mc/_HeaderOutputPredefine.h"

// enum class FacingID : schar {
//     Unknown = -1,
//     Down    = 0,
//     Up      = 1,
//     North   = 2,
//     South   = 3,
//     West    = 4,
//     East    = 5,
// };

namespace Face {
constexpr uchar Unknown = 0xFF;
constexpr uchar Down    = 0;
constexpr uchar Up      = 1;
constexpr uchar North   = 2;
constexpr uchar South   = 3;
constexpr uchar West    = 4;
constexpr uchar East    = 5;
} // namespace Face